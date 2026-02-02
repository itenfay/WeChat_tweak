//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebViewController, NSString;

@interface WCFinderWebViewOpener : NSObject
{
    _Bool _needPreload;
    _Bool _reReploadWhenExit;
    CDUnknownBlockType _configPresetUI;
    CDUnknownBlockType _appendQuerys;
    unsigned long long _preloadKey;
    NSString *_targetURL;
    MMWebViewController *_cacheWebView;
}

+ (id)openerWithNeedPreload:(_Bool)arg1 reReploadWhenExit:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *cacheWebView; // @synthesize cacheWebView=_cacheWebView;
@property(nonatomic) _Bool reReploadWhenExit; // @synthesize reReploadWhenExit=_reReploadWhenExit;
@property(retain, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
@property(nonatomic) _Bool needPreload; // @synthesize needPreload=_needPreload;
@property(nonatomic) unsigned long long preloadKey; // @synthesize preloadKey=_preloadKey;
@property(copy, nonatomic) CDUnknownBlockType appendQuerys; // @synthesize appendQuerys=_appendQuerys;
@property(copy, nonatomic) CDUnknownBlockType configPresetUI; // @synthesize configPresetUI=_configPresetUI;
- (id)_createWebView;
- (void)open:(id)arg1;
- (void)updateURL:(id)arg1;

@end

