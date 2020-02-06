//
//  blackjack.m
//  translator
//
//  Created by Sengupta, Dhruv on 2/6/20.
//  Copyright © 2020 Sengupta, Dhruv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "blackjack.h"

//
//#include "control.h"

@implementation BlackController
//@synthesize input, piglatin, shorthand;

- (void)viewDidLoad {
   UIImageView *imgView=[[UIImageView alloc]initWithFrame:CGRectMake(300,300,75,125)];
    [imgView setImage:[UIImage imageNamed:@"2c"]];//if your images extension is .png than no need to write extension of an image..
    [self.view addSubview:imgView];
    
    
}

- (IBAction)go:(id)sender {

}

@end
