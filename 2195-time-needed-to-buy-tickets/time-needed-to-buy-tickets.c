int timeRequiredToBuy(int* tickets,int ticketsSize,int k){
    int time=0;
    for(int i=0;i<ticketsSize;i++){
        if(i<=k){
            if(tickets[i]<tickets[k])time+=tickets[i];
            else time+=tickets[k];
        }else{
            if(tickets[i]<tickets[k])time+=tickets[i];
            else time+=tickets[k]-1;
        }
    }
    return time;
}