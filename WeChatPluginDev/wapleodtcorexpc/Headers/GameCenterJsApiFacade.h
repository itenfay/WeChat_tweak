//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableDictionary;
@protocol WebviewJSEventHandlerBaseDelegate;

@interface GameCenterJsApiFacade
{
    NSDictionary *_funcMap;
    NSMutableDictionary *_funcHandlerMap;
    id <WebviewJSEventHandlerBaseDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)handle:(id)arg1;
- (_Bool)canHandle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)initJsApi;
- (id)init;

@end

