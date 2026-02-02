//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent;

@interface WebviewJSEventHandler_getWechatVerifyTicket
{
    JSEvent *_jsEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

@end

