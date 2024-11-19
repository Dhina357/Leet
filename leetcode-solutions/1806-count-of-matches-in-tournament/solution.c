

int numberOfMatches(int teams){
    
       
        
         int matches;
         int total_matches=0;
        while(teams!=1){
            if(teams%2==0){
                matches=teams/2;
                }
            else{
               matches=(teams-1)/2;
                 }
                         total_matches+=matches ;
                         teams-=matches;
        }
return total_matches;
}
