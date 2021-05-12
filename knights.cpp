int flag = 0,n = strlen(str)/2;
        for(int j = 0; j < n; j++){
            if(str[j]!= str[strlen(str)-(j+1)]){
                flag = 1;
                break;
            }
        }
