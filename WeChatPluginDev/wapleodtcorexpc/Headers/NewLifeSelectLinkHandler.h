//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NewLifeSelectLinkReq;

@interface NewLifeSelectLinkHandler
{
    _Bool _preventEndForDismissingActionSheet;
    NewLifeSelectLinkReq *_requset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool preventEndForDismissingActionSheet; // @synthesize preventEndForDismissingActionSheet=_preventEndForDismissingActionSheet;
@property(retain, nonatomic) NewLifeSelectLinkReq *requset; // @synthesize requset=_requset;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)onTapEmoticonPackWithPid:(id)arg1 andPackName:(id)arg2;
- (void)onClickPreviewStickerAction;
- (void)onClickChooseStickerAction;
- (_Bool)checkCanSelectStickerInfo;
- (unsigned int)emoticonDesignerUin;
- (_Bool)checkCanSelectShopInfo;
- (void)reportEvent:(id)arg1 view:(id)arg2;
- (void)reportLinkActionExpose:(unsigned long long)arg1;
- (void)onClickAddRedEnvelope;
- (void)onClickAddShopAction;
- (void)postLinkActionSheetClickItem:(unsigned long long)arg1;
- (void)clickItem:(id)arg1;
- (long long)getCanSetLinkOptionFlag;
- (void)handleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

