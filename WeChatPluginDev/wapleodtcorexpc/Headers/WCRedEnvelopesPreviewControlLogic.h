//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, NSString, UIView, WCRedEnvelopesAtmospherePagView, WCRedEnvelopesReceiveHomeView;

@interface WCRedEnvelopesPreviewControlLogic
{
    WCRedEnvelopesReceiveHomeView *introView;
    _Bool _bHasStartDownloadEmoticon;
    EmojiInfoObj *_emojiInfoObj;
    WCRedEnvelopesAtmospherePagView *_atmospherePagView;
    UIView *_redEnvelopesDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *redEnvelopesDetailView; // @synthesize redEnvelopesDetailView=_redEnvelopesDetailView;
@property(retain, nonatomic) WCRedEnvelopesAtmospherePagView *atmospherePagView; // @synthesize atmospherePagView=_atmospherePagView;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(nonatomic) _Bool bHasStartDownloadEmoticon; // @synthesize bHasStartDownloadEmoticon=_bHasStartDownloadEmoticon;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerViewWillBePop;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBeginDragging;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (_Bool)HasMoreDetailList;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)playDetailPag;
- (void)onOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)closeIntroView;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)startDownloadEmoticonFromMsgData;
- (_Bool)shouldShowAtmospherePagView;
- (void)startLogic;
- (id)redEnvelopesBaseInfoDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

