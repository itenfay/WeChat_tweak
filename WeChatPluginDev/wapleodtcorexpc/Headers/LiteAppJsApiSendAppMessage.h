//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, ForwardMessageLogicController, NSDictionary, NSMutableData, NSString, NSURLConnection;

@interface LiteAppJsApiSendAppMessage
{
    CMessageWrap *m_wrapMsg;
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSURLConnection *_m_connecttion;
    NSDictionary *_m_curExtraData;
    NSMutableData *_m_recData;
    long long _orientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSMutableData *m_recData; // @synthesize m_recData=_m_recData;
@property(retain, nonatomic) NSDictionary *m_curExtraData; // @synthesize m_curExtraData=_m_curExtraData;
@property(retain, nonatomic) NSURLConnection *m_connecttion; // @synthesize m_connecttion=_m_connecttion;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (void)stopForcedRotationToPortrait;
- (void)dealloc;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)sendMessage:(id)arg1 extraData:(id)arg2;
- (void)sendAppMessage:(id)arg1 imageData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)clearCurData;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

