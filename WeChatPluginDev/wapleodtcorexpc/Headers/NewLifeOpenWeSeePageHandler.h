//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, WSWeSeeRouter;

@interface NewLifeOpenWeSeePageHandler
{
    MMUIViewController *_vc;
    WSWeSeeRouter *_router;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) WSWeSeeRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) MMUIViewController *vc; // @synthesize vc=_vc;
- (id)settingUrl;
- (void)report14791WithType:(long long)arg1 content:(id)arg2 sessionId:(id)arg3;
- (id)openWatchedVideosPramas;
- (id)openWatchedArticlesPramas;
- (id)openSeeItLatePramas;
- (id)openGoodLookPagePramas;
- (void)openH5MessagePageWith:(id)arg1;
- (void)handleRequest:(id)arg1;

@end

