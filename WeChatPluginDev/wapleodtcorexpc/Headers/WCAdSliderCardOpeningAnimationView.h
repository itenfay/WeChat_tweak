//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PAGView, WCAdSliderCardOpeningAnimationInfo, WCAdURLImageView, WCDataItem;
@protocol WCAdSliderCardOpeningAnimationViewDelegate;

@interface WCAdSliderCardOpeningAnimationView
{
    _Bool _isDetail;
    _Bool _hasPlayedFlag;
    _Bool _isHideAnimating;
    _Bool _finishedFlag;
    id <WCAdSliderCardOpeningAnimationViewDelegate> _delegate;
    WCDataItem *_dataItem;
    WCAdSliderCardOpeningAnimationInfo *_openingAnimationInfo;
    PAGView *_animationPagView;
    WCAdURLImageView *_animationThumbView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool finishedFlag; // @synthesize finishedFlag=_finishedFlag;
@property(nonatomic) _Bool isHideAnimating; // @synthesize isHideAnimating=_isHideAnimating;
@property(nonatomic) _Bool hasPlayedFlag; // @synthesize hasPlayedFlag=_hasPlayedFlag;
@property(retain, nonatomic) WCAdURLImageView *animationThumbView; // @synthesize animationThumbView=_animationThumbView;
@property(retain, nonatomic) PAGView *animationPagView; // @synthesize animationPagView=_animationPagView;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) WCAdSliderCardOpeningAnimationInfo *openingAnimationInfo; // @synthesize openingAnimationInfo=_openingAnimationInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdSliderCardOpeningAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationUpdate:(id)arg1;
- (void)closeView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)hasDisplayFinished;
- (void)hideWithAnimation;
- (void)play;
- (void)initPagView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 isDetail:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

