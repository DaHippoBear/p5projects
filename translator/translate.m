#include "control.h"
#import "translate.h"

//
//#include "control.h"

@implementation TranslateController
@synthesize input, piglatin, shorthand;

- (void)viewDidLoad {
    [super viewDidLoad];
    [piglatin setText:@"Recursion"];
    [shorthand setText:@"Pointer Swap"];
}

- (IBAction)go:(id)sender {
    const char *cInput = [input.text UTF8String];
    piglatin.text = [NSString stringWithFormat:@"%s" , pig((char*)cInput) ];
    shorthand.text = [NSString stringWithFormat:@"%s" , shorty((char*)cInput) ];
}

@end
