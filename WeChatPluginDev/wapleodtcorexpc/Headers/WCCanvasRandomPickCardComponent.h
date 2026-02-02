//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdRandomPickCardItemsView, WCCanvasComponentRandomPickCardInfo;

@interface WCCanvasRandomPickCardComponent
{
    _Bool _didShowImpressiveAnimation;
    WCCanvasComponentRandomPickCardInfo *_cardsInfo;
    WCAdRandomPickCardItemsView *_cardItemsView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool didShowImpressiveAnimation; // @synthesize didShowImpressiveAnimation=_didShowImpressiveAnimation;
@property(retain, nonatomic) WCAdRandomPickCardItemsView *cardItemsView; // @synthesize cardItemsView=_cardItemsView;
@property(retain, nonatomic) WCCanvasComponentRandomPickCardInfo *cardsInfo; // @synthesize cardsInfo=_cardsInfo;
- (void)onRandomPickCardItemsQuickSwitchAnimationIsDone;
- (_Bool)onRandomPickCardItemsIsReadyToPlayQuickSwitchAnimation;
- (_Bool)onRandomPickCardItemsIsCardSelectedPreviouslyWithCardId:(id)arg1;
- (_Bool)onRandomPickCardItemsIsCardSelectedWithCardId:(id)arg1;
- (void)onRandomPickCardItemsItemViewDidClick:(id)arg1 index:(unsigned long long)arg2;
- (id)onRandomPickCardItemsFetchPickCardLogic;
- (id)onRandomPickCardItemsFetchCanvasPageId;
- (id)randomPickCardLogic;
- (void)showCardItemsViewWithAnimation;
- (void)makeCardItemsViewPrepare;
- (void)tryToShowImpressiveAnimation;
- (void)randomPickSetCardViewsForTransitionBeginning:(_Bool)arg1;
- (void)randomPickShowImpressiveAnimation;
- (void)randomPickResetRandomPickCardStatus;
- (id)randomPickFetchRandomPickCardComponent;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentWillResumeState:(_Bool)arg1;
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

