//Thanks to CPDigitalDarkoom & his tweak "SafariWallSetter"
@implementation VolbrateCustomHeaderCell
@synthesize headerLabel,subHeaderLabel,subHeaderLabel2;

- (id)init {

	   self = [super initWithFrame:CGRectZero];
	   
       if (self) {
	
            self.headerLabel = [[UILabel alloc] initWithFrame:CGRectZero];
            [self.headerLabel setNumberOfLines:1];
            [self.headerLabel setFont:[UIFont fontWithName:@"HelveticaNeue-Light" size:40]];
            [self.headerLabel setText:@"Volbrate"];
            [self.headerLabel setBackgroundColor:[UIColor clearColor]];
            [self.headerLabel setTextColor:[UIColor colorWithRed:0.25 green:0.76 blue:0.50 alpha:1.0]];
            [self.headerLabel setTextAlignment:NSTextAlignmentCenter];
            [self addSubview:self.headerLabel];
            [self.headerLabel setTranslatesAutoresizingMaskIntoConstraints:NO];
            [self addConstraint:[NSLayoutConstraint constraintWithItem:self.headerLabel attribute:NSLayoutAttributeTop relatedBy:NSLayoutRelationEqual toItem:self attribute:NSLayoutAttributeBottom multiplier:0.2 constant:0]];
            [self addConstraint:[NSLayoutConstraint constraintWithItem:self.headerLabel attribute:NSLayoutAttributeCenterX relatedBy:NSLayoutRelationEqual toItem:self attribute:NSLayoutAttributeCenterX multiplier:1 constant:0]];
        
            self.subHeaderLabel = [[UILabel alloc] initWithFrame:CGRectZero];
            [self.subHeaderLabel setNumberOfLines:1];
            [self.subHeaderLabel setFont:[UIFont fontWithName:@"HelveticaNeue-Light" size:20]];
            [self.subHeaderLabel setText:@"Feedback for Volume Control"];
            [self.subHeaderLabel setBackgroundColor:[UIColor clearColor]];
            [self.subHeaderLabel setTextColor:[UIColor colorWithRed:0.30 green:0.69 blue:0.49 alpha:1.0]];
            [self.subHeaderLabel setTextAlignment:NSTextAlignmentCenter];
            [self addSubview:self.subHeaderLabel];
            [self.subHeaderLabel setTranslatesAutoresizingMaskIntoConstraints:NO];
            [self addConstraint:[NSLayoutConstraint constraintWithItem:self.subHeaderLabel attribute:NSLayoutAttributeTop relatedBy:NSLayoutRelationEqual toItem:self.headerLabel attribute:NSLayoutAttributeBottom multiplier:1 constant:5]];
            [self addConstraint:[NSLayoutConstraint constraintWithItem:self.subHeaderLabel attribute:NSLayoutAttributeCenterX relatedBy:NSLayoutRelationEqual toItem:self attribute:NSLayoutAttributeCenterX multiplier:1 constant:0]];

            self.subHeaderLabel2 = [[UILabel alloc] initWithFrame:CGRectZero];
            [self.subHeaderLabel2 setNumberOfLines:1];
            [self.subHeaderLabel2 setFont:[UIFont fontWithName:@"HelveticaNeue-Light" size:17]];
            [self.subHeaderLabel2 setText:@"by LacertosusDeus"];
            [self.subHeaderLabel2 setBackgroundColor:[UIColor clearColor]];
            [self.subHeaderLabel2 setTextColor:[UIColor colorWithRed:0.40 green:0.80 blue:0.60 alpha:1.0]];
            [self.subHeaderLabel2 setTextAlignment:NSTextAlignmentCenter];
            [self addSubview:self.subHeaderLabel2];
            [self.subHeaderLabel2 setTranslatesAutoresizingMaskIntoConstraints:NO];
            [self addConstraint:[NSLayoutConstraint constraintWithItem:self.subHeaderLabel2 attribute:NSLayoutAttributeTop relatedBy:NSLayoutRelationEqual toItem:self.subHeaderLabel attribute:NSLayoutAttributeBottom multiplier:1 constant:5]];
            [self addConstraint:[NSLayoutConstraint constraintWithItem:self.subHeaderLabel2 attribute:NSLayoutAttributeCenterX relatedBy:NSLayoutRelationEqual toItem:self attribute:NSLayoutAttributeCenterX multiplier:1 constant:0]];

    }

    return self;
}
@end