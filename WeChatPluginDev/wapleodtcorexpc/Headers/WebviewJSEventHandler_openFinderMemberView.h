//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent;

@interface WebviewJSEventHandler_openFinderMemberView
{
    JSEvent *_event;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *event; // @synthesize event=_event;
- (void)returnResult:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

