//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, MMTimer, MMUIButton, NSString, UIImageView, UILabel, WCFinderJumpInfo, WCFinderTextCarouselView;
@protocol WCFinderDynamicCardAdViewDelegate;

@interface WCFinderDynamicCardAdView : UIView
{
    int _showPosition;
    id <WCFinderDynamicCardAdViewDelegate> _delegate;
    FinderJumpInfo_Style *_jumpInfoStyle;
    unsigned long long _currentPhase;
    unsigned long long _feedExposeTimestamp;
    unsigned long long _adExposeTimestamp;
    unsigned long long _adExpandTimestamp;
    unsigned long long _prefetchPlayTime;
    WCFinderJumpInfo *_jumpInfo;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    WCFinderTextCarouselView *_descCarouselView;
    UILabel *_infoLabel;
    UIImageView *_infoIconView;
    MMUIButton *_actionButton;
    double _minWidth;
    double _maxWidth;
    MMTimer *_timer;
    struct CGSize _selfSizeBeforeAnimation;
    struct CGRect _actionBtnFrameBeforeAnimation;
    struct CGRect _actionBtnFrameAfterAnimation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) struct CGRect actionBtnFrameAfterAnimation; // @synthesize actionBtnFrameAfterAnimation=_actionBtnFrameAfterAnimation;
@property(nonatomic) struct CGSize selfSizeBeforeAnimation; // @synthesize selfSizeBeforeAnimation=_selfSizeBeforeAnimation;
@property(nonatomic) struct CGRect actionBtnFrameBeforeAnimation; // @synthesize actionBtnFrameBeforeAnimation=_actionBtnFrameBeforeAnimation;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak UIImageView *infoIconView; // @synthesize infoIconView=_infoIconView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) WCFinderTextCarouselView *descCarouselView; // @synthesize descCarouselView=_descCarouselView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) unsigned long long prefetchPlayTime; // @synthesize prefetchPlayTime=_prefetchPlayTime;
@property(nonatomic) unsigned long long adExpandTimestamp; // @synthesize adExpandTimestamp=_adExpandTimestamp;
@property(nonatomic) unsigned long long adExposeTimestamp; // @synthesize adExposeTimestamp=_adExposeTimestamp;
@property(nonatomic) unsigned long long feedExposeTimestamp; // @synthesize feedExposeTimestamp=_feedExposeTimestamp;
@property(nonatomic) unsigned long long currentPhase; // @synthesize currentPhase=_currentPhase;
@property(retain, nonatomic) FinderJumpInfo_Style *jumpInfoStyle; // @synthesize jumpInfoStyle=_jumpInfoStyle;
@property(nonatomic) __weak id <WCFinderDynamicCardAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)updateUIInfoWithAnimated:(_Bool)arg1;
- (void)jumpInfoActionAfterAnimationToPhase:(unsigned long long)arg1;
- (void)jumpInfoActionBeforeAnimationToPhase:(unsigned long long)arg1;
- (void)changeToPhase:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)expandJumpInfoViewForCompletePlayIfNeeded;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)resetReportData;
- (int)imageSizeType;
- (int)buttonType;
- (id)buttonBackgroundColor;
- (id)buttonTitleColor;
- (id)buttonTextWithPhase:(unsigned long long)arg1;
- (id)buttonText;
- (id)infoTextColor;
- (id)infoText;
- (id)infoIconUrl;
- (id)descTextArrayWithPhase:(unsigned long long)arg1;
- (id)descTextArray;
- (id)descTextColor;
- (id)titleText;
- (id)titleColor;
- (id)iconUrl;
- (id)cardBackgroundColor;
- (id)cardStyleAtPhase:(unsigned long long)arg1;
- (id)cardStyle;
- (void)notifyToExpand;
- (void)notifyToShow;
- (void)layoutUI;
- (void)onActionButtonDidClick;
- (void)setPhase:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

