//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterJsEventInfo, MMScrollActionSheet, NSMutableDictionary, NSString;

@interface MMWebViewPlugin_GameShare
{
    _Bool _needUploadFirst;
    GameCenterJsEventInfo *_currentEventInfo;
    NSMutableDictionary *_dictShareDataForSendAppMessage;
    NSMutableDictionary *_dictShareDataForShareTimeline;
    MMScrollActionSheet *_pluginShareActionSheet;
}

+ (id)shareDataParamsFromShareData:(id)arg1;
+ (_Bool)needForceToPortraitWithShareType:(id)arg1;
+ (id)shareDataFromShareDataParams:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needUploadFirst; // @synthesize needUploadFirst=_needUploadFirst;
@property(retain, nonatomic) MMScrollActionSheet *pluginShareActionSheet; // @synthesize pluginShareActionSheet=_pluginShareActionSheet;
@property(retain, nonatomic) NSMutableDictionary *dictShareDataForShareTimeline; // @synthesize dictShareDataForShareTimeline=_dictShareDataForShareTimeline;
@property(retain, nonatomic) NSMutableDictionary *dictShareDataForSendAppMessage; // @synthesize dictShareDataForSendAppMessage=_dictShareDataForSendAppMessage;
@property(retain, nonatomic) GameCenterJsEventInfo *currentEventInfo; // @synthesize currentEventInfo=_currentEventInfo;
- (void)shareImageToContactWithShareData:(id)arg1 withContact:(id)arg2;
- (void)shareImageToContact:(id)arg1 withContact:(id)arg2;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)endWithErrormsg:(id)arg1;
- (void)endWithMessage:(id)arg1;
- (void)shareImageToTimeLineWithImage:(id)arg1;
- (void)shareImageToFriendWithShareData:(id)arg1;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)reportGameCenterData:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)shareToTimeLineWithShareData:(id)arg1;
- (void)shareToFriendWithShareData:(id)arg1;
- (void)doShareWithActionSheetItem:(id)arg1 andShareData:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (_Bool)shareCustomShareData2Friend:(id)arg1 andCustomShareData2Timeline:(id)arg2 andCustomShareButtonData:(id)arg3 andCustomOpButtonData:(id)arg4 needUpdateFirst:(_Bool)arg5 enableQuickSend:(_Bool)arg6 errorMsg:(id *)arg7;
- (_Bool)shareCustomShareData2Friend:(id)arg1 andCustomShareData2Timeline:(id)arg2 andCustomShareButtonData:(id)arg3 needUpdateFirst:(_Bool)arg4 enableQuickSend:(_Bool)arg5 errorMsg:(id *)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

