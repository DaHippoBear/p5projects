  #import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
 #define speedScale 0.20
 #define speedDamping 0.90 // friction rate
 #define stopSpeed 5.0
 @interface GolfController : UIViewController



{
  AVAudioPlayer *player;
}
 @property (strong, nonatomic) IBOutlet UIImageView *hole;
 @property (strong, nonatomic) IBOutlet UIImageView *ball;
 @property (strong, nonatomic) IBOutlet UIImageView *wall;
 @property (strong, nonatomic) IBOutlet UIImageView *wall2;
 @property (strong, nonatomic) IBOutlet UIImageView *wall3;
 @property (strong, nonatomic) IBOutlet UIImageView *portal;
 @property (strong, nonatomic) IBOutlet UIImageView *portal2;
@property (strong, nonatomic) IBOutlet UIImageView *laser;
 @property (strong, nonatomic) IBOutlet UILabel *onoff;
@property (strong, nonatomic) IBOutlet UILabel *laser2;
@property (strong, nonatomic) IBOutlet UIButton *nextlvl;
 // These values simulate speed and friction
 @property (nonatomic) CGPoint firstPoint;
 @property (nonatomic) CGPoint lastPoint;
 @property (nonatomic) float ballVelocityX;
 @property (nonatomic) float ballVelocityY;
 @property (strong, nonatomic) NSTimer *gameTimer;
 @end
