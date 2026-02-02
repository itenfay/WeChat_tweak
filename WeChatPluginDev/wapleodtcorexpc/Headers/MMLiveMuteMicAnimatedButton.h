//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface MMLiveMuteMicAnimatedButton : UIButton
{
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)stopAnimation;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

