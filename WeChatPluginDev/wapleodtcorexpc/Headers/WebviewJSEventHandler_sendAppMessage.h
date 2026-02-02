//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SendAppMessageBaseImpl;

@interface WebviewJSEventHandler_sendAppMessage
{
    SendAppMessageBaseImpl *_sendMessageImpl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SendAppMessageBaseImpl *sendMessageImpl; // @synthesize sendMessageImpl=_sendMessageImpl;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

