//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLiveGetMsgBaseCGI
{
    _Bool _asyncTransferData;
    _Bool _needExtraDirectDisplayMsgs;
}

+ (_Bool)needUpdateClientConfig:(id)arg1;
+ (_Bool)isAppMsgToMySelf:(id)arg1;
+ (_Bool)isAppMsgReplyToMySelfFromAnchorOrAssistant:(id)arg1;
+ (id)filterDirectDisplayMsgsFromSrc:(id)arg1 liveTask:(id)arg2;
+ (id)filterUnSupportAsyncCreateMsgsFromSrc:(id)arg1;
+ (id)filterUnSupportAsyncCreateAppMsgsFromSrc:(id)arg1;
+ (void)sortCommentArray:(id)arg1;
+ (id)mergeFromInitCommentArr1:(id)arg1 initCommentArr2:(id)arg2;
+ (id)tranferToLiveCommentDataItemsFromFinderLiveAppMsgList:(id)arg1 forTaskId:(id)arg2;
+ (id)transferToLiveOnlineContacts:(id)arg1;
+ (id)tranferToLiveCommentDataItems:(id)arg1;
@property(nonatomic) _Bool needExtraDirectDisplayMsgs; // @synthesize needExtraDirectDisplayMsgs=_needExtraDirectDisplayMsgs;
@property(nonatomic) _Bool asyncTransferData; // @synthesize asyncTransferData=_asyncTransferData;
- (void)transferDataFromResp:(id)arg1 msgList:(id)arg2 appMsgList:(id)arg3 withCreatedCommentArr:(id)arg4 taskId:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)transferDataFromResp:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

