//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAContactGetter;

@interface OpenApiAppMsgGenerator : NSObject
{
    WAContactGetter *_contactGetter;
    NSMutableDictionary *_cdnUploadQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cdnUploadQueue; // @synthesize cdnUploadQueue=_cdnUploadQueue;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
- (void)OnCdnUpload:(id)arg1;
- (void)handleDecryptWxWorkChatRecordResp:(id)arg1;
- (void)handleGetShareInfoResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doUploadImage:(id)arg1 onSelectContact:(id)arg2 mediaMessage:(id)arg3 fromAppId:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)getShareActivityInfoStr:(id)arg1;
- (void)doFetchShareInfoWithMsg:(id)arg1 onSelectContact:(id)arg2 mediaMessage:(id)arg3 withShareTicket:(_Bool)arg4 fromAppId:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)handleWeWorkRecordObjectType:(id)arg1 internalMediaMsg:(id)arg2 toUserName:(id)arg3 fromAppId:(id)arg4 translateLinkExtraInfo:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)handleEnterpriseCardObjectType:(id)arg1 internalMediaMsg:(id)arg2 toUserName:(id)arg3 fromAppId:(id)arg4 translateLinkExtraInfo:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)handleVideoObjectType:(id)arg1 internalMediaMsg:(id)arg2 toUserName:(id)arg3 fromAppId:(id)arg4 translateLinkExtraInfo:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)handleImageObjectType:(id)arg1 internalMediaMsg:(id)arg2 toUserName:(id)arg3 fromAppId:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)handleAppBrandObjectType:(id)arg1 internalMediaMsg:(id)arg2 toUserName:(id)arg3 fromAppId:(id)arg4 translateLinkExtraInfo:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)handleMsgWrap:(id)arg1 onSelectContact:(id)arg2 appData:(id)arg3 fromAppId:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)generateAppMsgFromAppData:(id)arg1 toUserName:(id)arg2 fromAppId:(id)arg3 translateLinkExtraInfo:(id)arg4 callback:(CDUnknownBlockType)arg5;

@end

