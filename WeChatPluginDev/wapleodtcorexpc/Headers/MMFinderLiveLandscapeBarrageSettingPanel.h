//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class CAGradientLayer, MMFinderLiveLandscapeBarrageEntranceItemView, MMFinderLiveLandscapeBarrageParamCardItemView, MMFinderLiveTask, MMLiveTaskId, MMUIButton, MMUILabel, UIScrollView, UIView;

@interface MMFinderLiveLandscapeBarrageSettingPanel : NSObject
{
    CDUnknownBlockType _settingPanelCloseCallback;
    MMLiveTaskId *_taskId;
    UIView *_contentView;
    UIView *_gradientBackView;
    CAGradientLayer *_gradientLayer;
    MMUILabel *_titleLabel;
    MMUIButton *_closeButton;
    UIScrollView *_contentScrollView;
    MMFinderLiveLandscapeBarrageEntranceItemView *_entranceItem;
    MMFinderLiveLandscapeBarrageParamCardItemView *_rangeParamCardItem;
    MMFinderLiveLandscapeBarrageParamCardItemView *_displayParamCardItem;
}

@property(retain, nonatomic) MMFinderLiveLandscapeBarrageParamCardItemView *displayParamCardItem; // @synthesize displayParamCardItem=_displayParamCardItem;
@property(retain, nonatomic) MMFinderLiveLandscapeBarrageParamCardItemView *rangeParamCardItem; // @synthesize rangeParamCardItem=_rangeParamCardItem;
@property(retain, nonatomic) MMFinderLiveLandscapeBarrageEntranceItemView *entranceItem; // @synthesize entranceItem=_entranceItem;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientBackView; // @synthesize gradientBackView=_gradientBackView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType settingPanelCloseCallback; // @synthesize settingPanelCloseCallback=_settingPanelCloseCallback;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onCloseAction;
- (id)createParamCard:(unsigned long long)arg1;
- (void)layoutDisplayParamCardItem;
- (void)layoutRangeParamCardItem;
- (void)layoutEntranceItem;
- (void)updateContentScrollContentSize;
- (double)getContentScrollViewHeight;
- (void)layoutContentScrollView;
- (void)layoutCloseButton;
- (void)layoutTitleLabel;
- (void)layoutGradientBackView;
- (double)getNavHeaderHeight;
- (double)contentViewHeight;
- (double)contentViewWidth;
- (void)layoutContentView;
- (void)layoutUI;
- (void)initUI;
- (void)initNotifications;
- (void)initPageSheetConfig;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1;

@end
