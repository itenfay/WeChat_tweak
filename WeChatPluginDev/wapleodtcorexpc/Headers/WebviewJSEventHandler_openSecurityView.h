//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface WebviewJSEventHandler_openSecurityView
{
    NSDictionary *_m_handlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *m_handlers; // @synthesize m_handlers=_m_handlers;
- (void)registerHandler;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

