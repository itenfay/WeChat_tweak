//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, WAShareAppMessageInnerPermanentModel, WAShareAppMessageInnerTemporaryModel;
@protocol WeAppMsgHandleDelegate;

@interface WAWebViewPlugin_WeAppMsg
{
    WAShareAppMessageInnerPermanentModel *_permanentModel;
    WAShareAppMessageInnerTemporaryModel *_temporaryModel;
    id <WeAppMsgHandleDelegate> _msgDelegate;
    NSDictionary *_customParams;
}

+ (unsigned long long)_generateShareTypeWithIsNativeMessage:(_Bool)arg1 isWeiShiMessage:(_Bool)arg2 isRecordVideoMessage:(_Bool)arg3 isURLMessage:(_Bool)arg4;
+ (int)convertStringToCardType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *customParams; // @synthesize customParams=_customParams;
@property(nonatomic) __weak id <WeAppMsgHandleDelegate> msgDelegate; // @synthesize msgDelegate=_msgDelegate;
@property(retain, nonatomic) WAShareAppMessageInnerTemporaryModel *temporaryModel; // @synthesize temporaryModel=_temporaryModel;
@property(retain, nonatomic) WAShareAppMessageInnerPermanentModel *permanentModel; // @synthesize permanentModel=_permanentModel;
- (unsigned int)getSecFlag;
- (void)thumbImagePool:(id)arg1 didDownloadWebImageDataFinished:(id)arg2;
- (void)thumbImagePool:(id)arg1 shouldTakeSnapShotWithFromTop:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getRemoteUrlFromPathOrUrl:(id)arg1 appId:(id)arg2;
- (id)_currentURLToReport;
- (void)shareDidError:(id)arg1;
- (void)shareDidConfirmCancel;
- (void)shareDidSuccess:(id)arg1;
- (void)onCustomWeAppMessage:(id)arg1;
- (void)notifyToSharePage:(int)arg1 shouldUseDynamicShare:(_Bool)arg2 customParams:(id)arg3 toSpecificContacts:(id)arg4 shareCallType:(unsigned long long)arg5;
- (void)notifyToSharePage:(int)arg1 shouldUseDynamicShare:(_Bool)arg2 customParams:(id)arg3 toSpecificContacts:(id)arg4;
- (void)openWeAppForwardMessage:(id)arg1 type:(int)arg2 forNativeApp:(_Bool)arg3 toContacts:(id)arg4 shouldUseDynamicShare:(_Bool)arg5;
- (void)cancelSnapshot;
- (void)snapshotWebView:(CDUnknownBlockType)arg1;
- (void)registerSnapImage;
- (void)takeSnapShotWithFromTop:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)takeSnapShotIfNeeded;
- (void)restoreScrollOffsets:(id)arg1;
- (void)saveScrollOffsets:(id)arg1;
- (id)pluginReportPageEvent;
- (void)shareToFriend:(int)arg1 paramsModel:(id)arg2;
- (void)shareToSelector:(int)arg1 paramsModel:(id)arg2;
- (void)willStartShare;
- (void)clearAll;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

