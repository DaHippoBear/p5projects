  //
  //  blackjackViewController.h
  //  UI-Portfolio
  //
  //  Created by Cherian, Nathaniel on 2/6/20.
  //  Copyright © 2020 Cherian, Nathaniel. All rights reserved.
  //

  #import <UIKit/UIKit.h>

  NS_ASSUME_NONNULL_BEGIN

  @interface blackjackViewController : UIViewController
  @property (strong, nonatomic) NSArray *cards;
  @property (weak, nonatomic) IBOutlet UIButton *startButton;
@property (weak, nonatomic) IBOutlet UIButton *sstartButton;
  @property (weak, nonatomic) IBOutlet UIButton *hitButton;
  @property (weak, nonatomic) IBOutlet UIButton *standButton;
  @property (weak, nonatomic) IBOutlet UIButton *resetButton;
  @property (weak, nonatomic) IBOutlet UIButton *bet100Button;
  @property (weak, nonatomic) IBOutlet UIButton *bet200Button;
  @property (weak, nonatomic) IBOutlet UIButton *bet500Button;
  @property (weak, nonatomic) IBOutlet UIButton *bet1000Button;
  @property (strong, nonatomic) IBOutlet UIImageView *player1;
  @property (strong, nonatomic) IBOutlet UIImageView *player2;
  @property (strong, nonatomic) IBOutlet UIImageView *player3;
  @property (strong, nonatomic) IBOutlet UIImageView *player4;
  @property (strong, nonatomic) IBOutlet UIImageView *house1;
  @property (strong, nonatomic) IBOutlet UIImageView *house2;
  @property (strong, nonatomic) IBOutlet UIImageView *house3;
  @property (strong, nonatomic) IBOutlet UIImageView *house4;
@property (strong, nonatomic) IBOutlet UIImageView *startupscreen;
  @property (strong, nonatomic) IBOutlet UILabel *playerPointLabel;
  @property (strong, nonatomic) IBOutlet UILabel *housePointLabel;
  @property (strong, nonatomic) IBOutlet UILabel *infoLabel;
  @property (strong, nonatomic) IBOutlet UILabel *betlabel;
  @property (strong, nonatomic) IBOutlet UILabel *balancelabel;


  @end

  NS_ASSUME_NONNULL_END
