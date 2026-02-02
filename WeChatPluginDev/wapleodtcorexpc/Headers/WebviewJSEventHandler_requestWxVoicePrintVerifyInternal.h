//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, VoicePrintVerifyLogic;

@interface WebviewJSEventHandler_requestWxVoicePrintVerifyInternal
{
    JSEvent *_cbEvent;
    VoicePrintVerifyLogic *_voicePrintVerifyLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoicePrintVerifyLogic *voicePrintVerifyLogic; // @synthesize voicePrintVerifyLogic=_voicePrintVerifyLogic;
@property(retain, nonatomic) JSEvent *cbEvent; // @synthesize cbEvent=_cbEvent;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

