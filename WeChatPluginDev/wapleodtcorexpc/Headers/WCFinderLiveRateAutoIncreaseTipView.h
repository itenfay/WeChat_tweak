//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCFinderLiveRateAutoIncreaseTipView : UIView
{
    UIView *_containerView;
    UILabel *_playbackSpeedLabel;
    UIImageView *_firstPlayIcon;
    UIImageView *_secondPlayIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *secondPlayIcon; // @synthesize secondPlayIcon=_secondPlayIcon;
@property(retain, nonatomic) UIImageView *firstPlayIcon; // @synthesize firstPlayIcon=_firstPlayIcon;
@property(retain, nonatomic) UILabel *playbackSpeedLabel; // @synthesize playbackSpeedLabel=_playbackSpeedLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)stopAnimation;
- (void)startAnimation;
- (id)genUIImageView;
- (void)layoutView;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

