#import <Foundation/Foundation.h>
#include "golfwang.h"
@implementation GolfController
@synthesize ball, hole, wall, portal, portal2, wall2, wall3, onoff, nextlvl, laser;
- (void)viewDidLoad {
 [super viewDidLoad];
 // changes hole image to be circular
 self.hole.layer.cornerRadius = .5*self.hole.layer.frame.size.height;
 self.hole.layer.masksToBounds = YES;
    self.portal.layer.cornerRadius = .5*self.hole.layer.frame.size.height;
    self.portal.layer.masksToBounds = YES;
    self.portal2.layer.cornerRadius = .5*self.hole.layer.frame.size.height;
    self.portal2.layer.masksToBounds = YES;
    self.onoff.layer.cornerRadius = .5*self.hole.layer.frame.size.height;
    self.onoff.layer.masksToBounds = YES;
    self.nextlvl.layer.cornerRadius = .5*self.hole.layer.frame.size.height;
    self.nextlvl.layer.masksToBounds = YES;
     self.nextlvl.hidden = YES;
}
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
NSLog(@"touches Began");
   UITouch *touch = [touches anyObject];
   // turn user interaction off as swipe begins
   [self.view setUserInteractionEnabled:NO];
    
   // store point a touch began
   self.firstPoint = [touch locationInView:self.view];
}
-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
NSLog(@"touches Ended");
   UITouch *touch = [touches anyObject];
   // store point a touch end
   self.lastPoint = [touch locationInView:self.view];
   // logic to calculate swipevector as distance between touch began and touch end
   CGPoint swipeVector = CGPointMake(self.lastPoint.x - self.firstPoint.x, self.lastPoint.y - self.firstPoint.y);
   // velocity of ball based off of swipe
   self.ballVelocityX = speedScale * swipeVector.x;
   self.ballVelocityY = speedScale * swipeVector.y;
   // move ball occurs multiple times at this sampling rate, until friction causes ball to stop
   self.gameTimer = [NSTimer scheduledTimerWithTimeInterval:.05 target:self selector:@selector(moveBall) userInfo:nil repeats:YES];
}
-(void)moveBall {
   // simulates friction by reducing velocity
   self.ballVelocityX = speedDamping * self.ballVelocityX;
   self.ballVelocityY = speedDamping * self.ballVelocityY;
    
   // this is the ball move
   self.ball.center = CGPointMake(self.ball.center.x + self.ballVelocityX, self.ball.center.y + self.ballVelocityY);
    
   // logic to calculate if ball and hole collide
   if (CGRectIntersectsRect(self.ball.frame, self.hole.frame)) {
    [self.gameTimer invalidate];
    [self.view setUserInteractionEnabled:YES];
    self.ball.center = CGPointMake(self.hole.center.x, self.hole.center.y);
    self.ball.alpha = 0.2;
       NSString *path = [[NSBundle mainBundle] pathForResource:@"clapping" ofType:@"mp3"];
       NSURL *url = [NSURL URLWithString:path];
       player = [[AVAudioPlayer alloc]initWithContentsOfURL:url error:NULL];
       [player play];
       self.nextlvl.hidden = FALSE;
       
       
   }
    if (CGRectIntersectsRect(self.ball.frame, self.onoff.frame)) {
      [onoff setBackgroundColor:[UIColor greenColor]];
        self.ballVelocityY = speedDamping * self.ballVelocityY * (-1);
           self.ballVelocityX = speedDamping * self.ballVelocityX * (-1);
        self.laser.alpha = 0;
        self.laser.hidden = YES;
        self.laser.center = CGPointMake(self.laser2.center.x, self.laser2.center.y);
        
        
         
         
     }
    
   // if ball slows/stops turn off game timer and turn user interaction back on
   if(fabs(self.ballVelocityX) < stopSpeed && fabs(self.ballVelocityY) < stopSpeed) {
    [self.gameTimer invalidate];
    [self.view setUserInteractionEnabled:YES];
   }
 
    if (CGRectIntersectsRect(self.ball.frame, self.wall.frame)) {
     self.ballVelocityX = speedDamping * self.ballVelocityX * (-1);
    }
    if (CGRectIntersectsRect(self.ball.frame, self.wall2.frame)) {

        self.ballVelocityX = speedDamping * self.ballVelocityX * (-1);
       }
    if (CGRectIntersectsRect(self.ball.frame, self.wall3.frame)) {

         self.ballVelocityY = speedDamping * self.ballVelocityY * (-1);
        self.ballVelocityX = speedDamping * self.ballVelocityX * (-1);
        }
    if (CGRectIntersectsRect(self.ball.frame, self.laser.frame)) {

     self.ballVelocityY = speedDamping * self.ballVelocityY * (-1);
    self.ballVelocityX = speedDamping * self.ballVelocityX * (-1);
    }
    
    if (CGRectIntersectsRect(self.ball.frame, self.portal.frame)) {
self.ball.center = CGPointMake(self.portal2.center.x, self.portal2.center.y);
            
           }
    
        
}


@end
