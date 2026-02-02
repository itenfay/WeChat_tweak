//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InteractionLabel, MMTimer, MMUIButton, NSString, UIImageView;

@interface MMAssetUserActionTipsView
{
    CDUnknownBlockType _clickBlock;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _displayTimeConsumeCompleteBlock;
    double _displayDuration;
    InteractionLabel *_tipsLabel;
    MMUIButton *_closeButton;
    MMTimer *_displayTimer;
    UIImageView *_leftFireworksImageView;
    UIImageView *_rightFireworksImageView;
    struct CGSize _lastSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(retain, nonatomic) UIImageView *rightFireworksImageView; // @synthesize rightFireworksImageView=_rightFireworksImageView;
@property(retain, nonatomic) UIImageView *leftFireworksImageView; // @synthesize leftFireworksImageView=_leftFireworksImageView;
@property(retain, nonatomic) MMTimer *displayTimer; // @synthesize displayTimer=_displayTimer;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) InteractionLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
@property(copy, nonatomic) CDUnknownBlockType displayTimeConsumeCompleteBlock; // @synthesize displayTimeConsumeCompleteBlock=_displayTimeConsumeCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void)animationHideWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animationShowWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)onDisplayTimeConsumedComplete;
- (void)onClickCloseButton;
- (void)onClickTips;
- (double)selfCornerRadius;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)loadCloseButton;
- (void)loadTipsLabel;
- (void)loadFireworksImageView;
- (void)loadView;
- (void)didDisappear;
- (void)didAppear;
- (void)updateWithTips:(id)arg1;
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

