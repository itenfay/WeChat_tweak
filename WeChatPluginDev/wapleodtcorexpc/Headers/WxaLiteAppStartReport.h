//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WxaLiteAppStartReport : NSObject
{
    _Bool _isEnable;
    _Bool _isInitialized;
    _Bool _isSyncStart;
    _Bool _checkResult;
    _Bool _isPreloadPrecess;
    _Bool _isPreloadEngine;
    _Bool _isPreloadBaseLib;
    _Bool _isPreloadPage;
    int _showPageResult;
    NSString *_appId;
    NSString *_query;
    NSString *_page;
    long long _startTime;
    long long _checkStartTime;
    long long _checkCost;
    long long _preloadPrecessStartTime;
    long long _preloadPrecessCost;
    long long _preloadEngineStartTime;
    long long _preloadEngineCost;
    long long _preloadBaseLibStartTime;
    long long _preloadBaseLibCost;
    long long _preloadPageStartTime;
    long long _preloadPageCost;
    long long _showPageStartTime;
    long long _showPageCost;
    long long _appCost;
    long long _renderPageCost;
}

- (void).cxx_destruct;
@property(nonatomic) long long renderPageCost; // @synthesize renderPageCost=_renderPageCost;
@property(nonatomic) long long appCost; // @synthesize appCost=_appCost;
@property(nonatomic) int showPageResult; // @synthesize showPageResult=_showPageResult;
@property(nonatomic) long long showPageCost; // @synthesize showPageCost=_showPageCost;
@property(nonatomic) long long showPageStartTime; // @synthesize showPageStartTime=_showPageStartTime;
@property(nonatomic) long long preloadPageCost; // @synthesize preloadPageCost=_preloadPageCost;
@property(nonatomic) long long preloadPageStartTime; // @synthesize preloadPageStartTime=_preloadPageStartTime;
@property(nonatomic) _Bool isPreloadPage; // @synthesize isPreloadPage=_isPreloadPage;
@property(nonatomic) long long preloadBaseLibCost; // @synthesize preloadBaseLibCost=_preloadBaseLibCost;
@property(nonatomic) long long preloadBaseLibStartTime; // @synthesize preloadBaseLibStartTime=_preloadBaseLibStartTime;
@property(nonatomic) _Bool isPreloadBaseLib; // @synthesize isPreloadBaseLib=_isPreloadBaseLib;
@property(nonatomic) long long preloadEngineCost; // @synthesize preloadEngineCost=_preloadEngineCost;
@property(nonatomic) long long preloadEngineStartTime; // @synthesize preloadEngineStartTime=_preloadEngineStartTime;
@property(nonatomic) _Bool isPreloadEngine; // @synthesize isPreloadEngine=_isPreloadEngine;
@property(nonatomic) long long preloadPrecessCost; // @synthesize preloadPrecessCost=_preloadPrecessCost;
@property(nonatomic) long long preloadPrecessStartTime; // @synthesize preloadPrecessStartTime=_preloadPrecessStartTime;
@property(nonatomic) _Bool isPreloadPrecess; // @synthesize isPreloadPrecess=_isPreloadPrecess;
@property(nonatomic) _Bool checkResult; // @synthesize checkResult=_checkResult;
@property(nonatomic) long long checkCost; // @synthesize checkCost=_checkCost;
@property(nonatomic) long long checkStartTime; // @synthesize checkStartTime=_checkStartTime;
@property(nonatomic) _Bool isSyncStart; // @synthesize isSyncStart=_isSyncStart;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toJsonString;
- (id)init;

@end

