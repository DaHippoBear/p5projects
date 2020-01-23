 #import <UIKit/UIKit.h>
#define speedScale 0.20
#define speedDamping 0.90 // friction rate
#define stopSpeed 5.0
@interface GolfController : UIViewController
@property (strong, nonatomic) IBOutlet UIImageView *hole;
@property (strong, nonatomic) IBOutlet UIImageView *ball;
@property (strong, nonatomic) IBOutlet UIImageView *wall;
@property (strong, nonatomic) IBOutlet UIImageView *wall2;
@property (strong, nonatomic) IBOutlet UIImageView *wall3;
@property (strong, nonatomic) IBOutlet UIImageView *portal1;
@property (strong, nonatomic) IBOutlet UIImageView *portal2;

// These values simulate speed and friction
@property (nonatomic) CGPoint firstPoint;
@property (nonatomic) CGPoint lastPoint;
@property (nonatomic) float ballVelocityX;
@property (nonatomic) float ballVelocityY;
@property (strong, nonatomic) NSTimer *gameTimer;
@end
