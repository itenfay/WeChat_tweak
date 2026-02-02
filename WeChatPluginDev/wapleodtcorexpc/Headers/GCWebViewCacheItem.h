//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebViewController, NSString;

@interface GCWebViewCacheItem : NSObject
{
    _Bool _isPreload;
    _Bool _reCreateAfterUsed;
    NSString *_reuseIdentifier;
    NSString *_url;
    double _preloadTime;
    MMWebViewController *_webviewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool reCreateAfterUsed; // @synthesize reCreateAfterUsed=_reCreateAfterUsed;
@property(retain, nonatomic) MMWebViewController *webviewController; // @synthesize webviewController=_webviewController;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) double preloadTime; // @synthesize preloadTime=_preloadTime;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (_Bool)isExpired;
- (void)configureWithUrl:(id)arg1;

@end

