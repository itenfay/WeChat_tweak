//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAContactGetter;

@interface WebviewJSEventHandler_openWeAppPage : NSObject
{
    WAContactGetter *_contactGetter;
    _Bool _useEmbedMode;
}

@property(nonatomic) _Bool useEmbedMode; // @synthesize useEmbedMode=_useEmbedMode;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

