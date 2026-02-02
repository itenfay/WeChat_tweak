//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCWebViewCacheConfig, GameLiteAppParam, JumpInfo, MMUIViewController, MMWebViewController, NSString, UIViewController;

@interface GCJumpInfo : NSObject
{
    _Bool _popCurrentVc;
    _Bool _disableLiteAppMatch;
    JumpInfo *_jumpInfo;
    UIViewController *_fromViewController;
    GCWebViewCacheConfig *_cacheConfig;
    NSString *_fromName;
    MMWebViewController *_jumpCreatedWebVc;
    MMUIViewController *_jumpCreatedVc;
    GameLiteAppParam *_liteAppparam;
    NSString *_preinjectData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *preinjectData; // @synthesize preinjectData=_preinjectData;
@property(retain, nonatomic) GameLiteAppParam *liteAppparam; // @synthesize liteAppparam=_liteAppparam;
@property(nonatomic) _Bool disableLiteAppMatch; // @synthesize disableLiteAppMatch=_disableLiteAppMatch;
@property(nonatomic) __weak MMUIViewController *jumpCreatedVc; // @synthesize jumpCreatedVc=_jumpCreatedVc;
@property(nonatomic) __weak MMWebViewController *jumpCreatedWebVc; // @synthesize jumpCreatedWebVc=_jumpCreatedWebVc;
@property(retain, nonatomic) NSString *fromName; // @synthesize fromName=_fromName;
@property(nonatomic) _Bool popCurrentVc; // @synthesize popCurrentVc=_popCurrentVc;
@property(retain, nonatomic) GCWebViewCacheConfig *cacheConfig; // @synthesize cacheConfig=_cacheConfig;
@property(retain, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
- (id)description;

@end

