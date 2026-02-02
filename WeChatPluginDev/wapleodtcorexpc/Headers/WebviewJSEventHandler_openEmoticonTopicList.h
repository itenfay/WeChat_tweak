//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, StoreEmoticonTopicProxyLogic;

@interface WebviewJSEventHandler_openEmoticonTopicList
{
    JSEvent *m_event;
    StoreEmoticonTopicProxyLogic *_proxyLogic;
}

+ (id)dictionForBannerSet:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmoticonTopicProxyLogic *proxyLogic; // @synthesize proxyLogic=_proxyLogic;
- (void)endWithFail;
- (void)endWithOk;
- (id)genBannerSetFromParam:(id)arg1;
- (id)viewControllerWithParams:(id)arg1 extrance:(long long)arg2;
- (_Bool)handleWithParams:(id)arg1 AndFromViewController:(id)arg2 AndFallBackNavigationController:(id)arg3 extrance:(long long)arg4;
- (_Bool)handleWithParams:(id)arg1 AndNavigationController:(id)arg2 extrance:(long long)arg3;
- (_Bool)handleWithParams:(id)arg1 AndFromViewController:(id)arg2 extrance:(long long)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

