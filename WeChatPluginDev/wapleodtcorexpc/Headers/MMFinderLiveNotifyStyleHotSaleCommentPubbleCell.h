//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveECHotSaleLikeAnimationCenter, MMFinderLiveNumberAnimationLogic, MMGradientView, NSString, UILabel;

@interface MMFinderLiveNotifyStyleHotSaleCommentPubbleCell
{
    MMFinderLiveNumberAnimationLogic *_animationLogic;
    MMGradientView *_gradientView;
    UILabel *_infoPrefixLabel;
    UILabel *_infoNumberLabel;
    MMGradientView *_infoBackgroundView;
}

+ (double)preferDisplayDurationWithComment:(id)arg1;
+ (id)numberFont;
- (void).cxx_destruct;
@property(retain, nonatomic) MMGradientView *infoBackgroundView; // @synthesize infoBackgroundView=_infoBackgroundView;
@property(retain, nonatomic) UILabel *infoNumberLabel; // @synthesize infoNumberLabel=_infoNumberLabel;
@property(retain, nonatomic) UILabel *infoPrefixLabel; // @synthesize infoPrefixLabel=_infoPrefixLabel;
@property(retain, nonatomic) MMGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) MMFinderLiveNumberAnimationLogic *animationLogic; // @synthesize animationLogic=_animationLogic;
- (void)onWillOpenProduct:(id)arg1;
- (void)changeNumberWithLogic:(id)arg1;
- (void)runCustomExitAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)runCustomEnterAnimation;
@property(readonly, nonatomic) MMFinderLiveECHotSaleLikeAnimationCenter *animationCenter;
- (void)layoutUI;
- (id)initWithCellFrame:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

