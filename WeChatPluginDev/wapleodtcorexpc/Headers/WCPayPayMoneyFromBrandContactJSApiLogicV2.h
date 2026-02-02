//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, KindaJSEvent, NSString, WAJSEventHandler_BaseEvent;
@protocol WCPayPayJSApiLogicParamDelegate;

@interface WCPayPayMoneyFromBrandContactJSApiLogicV2
{
    JSEvent *m_jsEvent;
    NSString *m_stepInURL;
    NSString *m_stepAppUserName;
    int _chatType;
    int _chatSenderType;
    int _qrcodeSessionType;
    int _codeScene;
    id <WCPayPayJSApiLogicParamDelegate> _paramDelegate;
    WAJSEventHandler_BaseEvent *_tinyAppEvent;
    KindaJSEvent *_kindaJSEvent;
    NSString *_qrcodeSessionName;
    NSString *_qrcodeTimelineObjId;
    NSString *_qrcodeSenderMsgId;
    NSString *_qrcodeSenderName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *qrcodeSenderName; // @synthesize qrcodeSenderName=_qrcodeSenderName;
@property(retain, nonatomic) NSString *qrcodeSenderMsgId; // @synthesize qrcodeSenderMsgId=_qrcodeSenderMsgId;
@property(nonatomic) int codeScene; // @synthesize codeScene=_codeScene;
@property(retain, nonatomic) NSString *qrcodeTimelineObjId; // @synthesize qrcodeTimelineObjId=_qrcodeTimelineObjId;
@property(retain, nonatomic) NSString *qrcodeSessionName; // @synthesize qrcodeSessionName=_qrcodeSessionName;
@property(nonatomic) int qrcodeSessionType; // @synthesize qrcodeSessionType=_qrcodeSessionType;
@property(nonatomic) int chatSenderType; // @synthesize chatSenderType=_chatSenderType;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) KindaJSEvent *kindaJSEvent; // @synthesize kindaJSEvent=_kindaJSEvent;
@property(retain, nonatomic) WAJSEventHandler_BaseEvent *tinyAppEvent; // @synthesize tinyAppEvent=_tinyAppEvent;
@property(nonatomic) __weak id <WCPayPayJSApiLogicParamDelegate> paramDelegate; // @synthesize paramDelegate=_paramDelegate;
- (void)call:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)stopForceRotationToPortrait;
- (void)startForceRotationToPortrait;
- (void)setExtraInfo:(id)arg1;
- (id)initWithJSEvent:(id)arg1 tinyAppEvent:(id)arg2 URL:(id)arg3 BrandUserName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

