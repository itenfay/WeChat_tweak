//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAAnimationGroup, CameraScanCodesMarkDotInfo, MMUIButton, UIImageView;

@interface CameraScanCodesMarkDotView : UIView
{
    UIImageView *_dotView;
    MMUIButton *_clickButton;
    CAAnimationGroup *_showAnimation;
    CAAnimationGroup *_breatheAnimation;
    CameraScanCodesMarkDotInfo *_markDotInfo;
    CDUnknownBlockType _clickBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) CameraScanCodesMarkDotInfo *markDotInfo; // @synthesize markDotInfo=_markDotInfo;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onButtonClicked:(id)arg1;
- (void)stopAllAnimations;
- (void)startBreatheAnimation;
- (void)startShowAnimationWithIsMultiCodes:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setupBreatheAnimation;
- (void)setupShowAnimation;
- (void)setupSubviews;
- (id)init;

@end

