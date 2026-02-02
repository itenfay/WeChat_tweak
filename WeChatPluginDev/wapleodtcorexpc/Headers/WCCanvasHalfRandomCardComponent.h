//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCAdURLImageView, WCAdvertiseInfo, WCCanvasComponentHalfRandomCardItemInfo, WCCanvasDynamicDataLoader, WCCanvasHalfRandomSubCard;

@interface WCCanvasHalfRandomCardComponent
{
    WCCanvasDynamicDataLoader *_dynamicLoader;
    unsigned long long _cardState;
    WCAdURLImageView *_bgImageView;
    UIView *_animationContainer;
    WCAdURLImageView *_animationImgView;
    WCCanvasComponentHalfRandomCardItemInfo *_theChosenItemInfo;
    WCCanvasHalfRandomSubCard *_theChosenSubCardView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasHalfRandomSubCard *theChosenSubCardView; // @synthesize theChosenSubCardView=_theChosenSubCardView;
@property(retain, nonatomic) WCCanvasComponentHalfRandomCardItemInfo *theChosenItemInfo; // @synthesize theChosenItemInfo=_theChosenItemInfo;
@property(retain, nonatomic) WCAdURLImageView *animationImgView; // @synthesize animationImgView=_animationImgView;
@property(retain, nonatomic) UIView *animationContainer; // @synthesize animationContainer=_animationContainer;
@property(retain, nonatomic) WCAdURLImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) unsigned long long cardState; // @synthesize cardState=_cardState;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dynamicLoader; // @synthesize dynamicLoader=_dynamicLoader;
- (void)doShowSpecialRedEnvelopeItemReportWithCardId:(id)arg1 isLastCard:(_Bool)arg2;
- (void)doGetCardIdResultReportWithResult:(_Bool)arg1 cardId:(id)arg2;
- (_Bool)shouldShowBulletCommentsView;
- (id)fetchHalfScreenJumpInfo;
- (int)onSubCardFetchCanvasFinderCommentScene;
- (id)onSubCardFetchCanvasPageId;
- (id)onSubCardFetchBulletCommentsForBulletCommentsType:(long long)arg1;
- (id)onSubCardFetchBulletCommentsTitle;
- (_Bool)onSubCardShouldShowBulletCommentsView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onRandomCardChooseAnimationEnd;
- (void)tryToShowTheChosenCard;
- (void)tryToShowPickCardAnimation;
- (void)updateRedPacketCoverUrl:(id)arg1 forCardId:(id)arg2;
- (void)onFetchTwistCardId:(id)arg1 cardExtInfo:(id)arg2 componentExtInfo:(id)arg3;
- (void)tryToFetchRandomCardId;
- (void)pickACardToShow;
- (_Bool)isGivenCardIdValid:(id)arg1;
- (struct CGSize)getBgImageViewSize;
- (id)getUxInfoWithShared:(_Bool)arg1;
@property(readonly, nonatomic) WCAdvertiseInfo *advertiseInfo;
- (_Bool)isComponentSubCardReady;
- (id)findADefaultCardToShow;
- (void)updateSubCardViewWithCardId:(id)arg1;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)componentReportAddExposureCount;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

