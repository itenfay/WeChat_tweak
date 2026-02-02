//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebCoreConfig, NSString;

@interface MMWebViewPreloadPageDataParameter : NSObject
{
    _Bool _isUsePreloadWebView;
    _Bool _useOfflineCache;
    unsigned int _scene;
    unsigned int _enterType;
    NSString *_url;
    NSString *_pageDataKeyUrl;
    MMWebCoreConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebCoreConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool useOfflineCache; // @synthesize useOfflineCache=_useOfflineCache;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isUsePreloadWebView; // @synthesize isUsePreloadWebView=_isUsePreloadWebView;
@property(copy, nonatomic) NSString *pageDataKeyUrl; // @synthesize pageDataKeyUrl=_pageDataKeyUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)description;

@end

