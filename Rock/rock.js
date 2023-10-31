let score = JSON.parse(localStorage.getItem('score'))||{
    wins:0,losses:0,ties:0
};

updateScoreElements();


function playGame(playerMove){
    const computerMove = pickComputerMove();

    let ressult ='';

    if(playerMove === 'Scissors'){
        if (computerMove === 'rock'){
            ressult= 'You Lose';
        }

        else if(computerMove === 'paper'){
             ressult= 'You win';
        }

        else if(computerMove === 'Scissors'){
             ressult= 'Tie';
        }

    } 
    
    else if(playerMove === 'paper') {
        if (computerMove === 'rock'){
            ressult= 'You win';
        }
        
        else if(computerMove === 'paper'){
            ressult= 'Tie';
        }
        
        else if(computerMove=== 'Scissors'){
            ressult= 'You Lose';
        }
    } 
    
    else if(playerMove === 'rock'){
        if (computerMove === 'rock'){
            ressult= 'Tie';
        }
        
        else if(computerMove === 'paper'){
            ressult= 'You Lose';
        }
        
        else if(computerMove === 'Scissors'){
            ressult= 'You win';
         }

    }


    if(ressult === 'You win'){
        score.wins+=1;
    }
    else if(ressult=== 'You Lose'){
        score.losses+=1;
    }
    else if(ressult === 'Tie'){
        score.ties+=1;
    }

    localStorage.setItem('score' , JSON.stringify(score));
    
    updateScoreElements();

    document.querySelector('.js-results').innerHTML = ressult;

    document.querySelector('.js-moves').innerHTML
    = `  You
<img src="images/${playerMove}-emoji.png" class="move-icon">
<img src="images/${computerMove}-emoji.png" class="move-icon">
Computer`;

}

function updateScoreElements(){
    document.querySelector('.js-score').innerHTML =` Wins: ${score.wins}, losses: ${score.losses}, ties: ${score.ties}, `;

}

function pickComputerMove(){

    const randomNumber = Math.random();

    let computerMove='';

    if(randomNumber >= 0 && randomNumber< 1/3){
        computerMove = 'rock';
    }
    else if(randomNumber >= 1/3 && randomNumber < 2/3){
        computerMove = 'paper';
    }

    else if(randomNumber>= 2/3 && randomNumber < 1){
        computerMove = 'Scissors';
    }

    return computerMove;

}