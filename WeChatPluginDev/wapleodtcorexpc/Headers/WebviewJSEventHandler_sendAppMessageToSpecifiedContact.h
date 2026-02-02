//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, JSEvent, NSDictionary, NSMutableData, NSString, NSURLConnection, ShareMessageConfirmLogicHelper;

@interface WebviewJSEventHandler_sendAppMessageToSpecifiedContact
{
    ShareMessageConfirmLogicHelper *m_jsSendAppMsgHelper;
    CMessageWrap *m_wrapMsg;
    NSString *m_nsThumbUrl;
    NSDictionary *m_dicExtraData;
    NSString *m_nsUserName;
    NSURLConnection *_m_connecttion;
    JSEvent *_m_curEvent;
    NSDictionary *_m_curExtraData;
    NSMutableData *_m_recData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *m_recData; // @synthesize m_recData=_m_recData;
@property(retain, nonatomic) NSDictionary *m_curExtraData; // @synthesize m_curExtraData=_m_curExtraData;
@property(retain, nonatomic) JSEvent *m_curEvent; // @synthesize m_curEvent=_m_curEvent;
@property(retain, nonatomic) NSURLConnection *m_connecttion; // @synthesize m_connecttion=_m_connecttion;
@property(copy, nonatomic) NSString *m_nsThumbUrl; // @synthesize m_nsThumbUrl;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(unsigned long long)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)sendAppMessage:(id)arg1 extraData:(id)arg2 imageData:(id)arg3;
- (void)getTransIdRequest:(id)arg1 WithAppID:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)clearCurData;
- (void)startSendMessage;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

