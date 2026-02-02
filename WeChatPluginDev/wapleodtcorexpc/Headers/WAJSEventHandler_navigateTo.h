//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface WAJSEventHandler_navigateTo
{
    NSDictionary *_singlePageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *singlePageData; // @synthesize singlePageData=_singlePageData;
- (_Bool)isNavigateToTabWithURL:(id)arg1;
- (void)navigateToURL:(id)arg1 withAppID:(id)arg2 webView:(id)arg3;
- (void)innerHandleJSEvent:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

