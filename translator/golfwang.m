//
//  golfwang.m
//  translator
//
//  Created by Sengupta, Dhruv on 1/15/20.
//  Copyright © 2020 Sengupta, Dhruv. All rights reserved.
//
#import "golfwang.h"
#import <Foundation/Foundation.h>
//#import "GolfController.h"
@implementation GolfController
@synthesize ball, hole;
- (void)viewDidLoad {
  [super viewDidLoad];
  // changes hole image to be circular
  self.hole.layer.cornerRadius = .5*self.hole.layer.frame.size.height;
  self.hole.layer.masksToBounds = YES;
    
}
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
NSLog(@"touches Began");
}
-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
NSLog(@"touches Ended");
}
-(void)moveBall {
}
@end
