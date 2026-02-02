//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSData, NSString, OpenBufferUploadMgr;

@interface AppMsgSendProcessor
{
    unsigned int _sendRetryCount;
    CMessageWrap *_msgWrap;
    NSString *_appMsgContent;
    NSData *_appMsgContentData;
    OpenBufferUploadMgr *_openBufferUploadMgr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sendRetryCount; // @synthesize sendRetryCount=_sendRetryCount;
@property(retain, nonatomic) OpenBufferUploadMgr *openBufferUploadMgr; // @synthesize openBufferUploadMgr=_openBufferUploadMgr;
@property(retain, nonatomic) NSData *appMsgContentData; // @synthesize appMsgContentData=_appMsgContentData;
@property(retain, nonatomic) NSString *appMsgContent; // @synthesize appMsgContent=_appMsgContent;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)OnBufferUploadOK:(id)arg1 ClientAppDataId:(id)arg2 MediaId:(id)arg3;
- (void)OnBufferUploadFail:(id)arg1 ClientAppDataId:(id)arg2;
- (void)SendMsgOK:(id)arg1;
- (void)sendCurAppMsg;
- (id)getSendAppMsgRequest;
- (void)startUploadMsgXmlData;
- (id)getStateName;
- (void)stop;
- (void)start;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

