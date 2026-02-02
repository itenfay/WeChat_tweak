//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SendAppMessageBaseImpl;

@interface WebviewJSEventHandler_sendAppMessagePrivate
{
    SendAppMessageBaseImpl *_sendMessageImpl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SendAppMessageBaseImpl *sendMessageImpl; // @synthesize sendMessageImpl=_sendMessageImpl;
- (void)setupMessageWrap:(id)arg1 forEvent:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

