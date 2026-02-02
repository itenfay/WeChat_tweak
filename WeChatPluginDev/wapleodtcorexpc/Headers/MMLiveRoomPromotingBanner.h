//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMFinderLiveSyncPromotionInfo, MMLiveTaskId, MMUILabel, PAGView, UIImageView;

@interface MMLiveRoomPromotingBanner : UIView
{
    CDUnknownBlockType _promotingStateLabelClickedBlock;
    CDUnknownBlockType _promotingStateLabelTimeoutBlock;
    double _maxWidth;
    MMLiveTaskId *_taskId;
    MMUILabel *_promotingStateLabel;
    PAGView *_animationView;
    UIImageView *_doneIconView;
    MMFinderLiveSyncPromotionInfo *_promotionInfo;
    CAGradientLayer *_gradientLayer;
    unsigned long long _lastPromotingState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastPromotingState; // @synthesize lastPromotingState=_lastPromotingState;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMFinderLiveSyncPromotionInfo *promotionInfo; // @synthesize promotionInfo=_promotionInfo;
@property(retain, nonatomic) UIImageView *doneIconView; // @synthesize doneIconView=_doneIconView;
@property(retain, nonatomic) PAGView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) MMUILabel *promotingStateLabel; // @synthesize promotingStateLabel=_promotingStateLabel;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(copy, nonatomic) CDUnknownBlockType promotingStateLabelTimeoutBlock; // @synthesize promotingStateLabelTimeoutBlock=_promotingStateLabelTimeoutBlock;
@property(copy, nonatomic) CDUnknownBlockType promotingStateLabelClickedBlock; // @synthesize promotingStateLabelClickedBlock=_promotingStateLabelClickedBlock;
- (void)onStopPromoting;
- (void)onPromotingStateLabelClicked;
- (unsigned long long)promotingState:(id)arg1;
- (id)finderLiveTask;
- (void)sizeToFits;
- (void)updateSyncPromotionInfo:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

@end

