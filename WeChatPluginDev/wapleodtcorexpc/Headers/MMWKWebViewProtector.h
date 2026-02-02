//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface MMWKWebViewProtector : NSObject
{
    NSMutableArray *_webViewRecrodList;
    long long _websiteDataStoreOperatingCount;
    NSMutableSet *_websiteDataStoreHoldWebViewSet;
}

+ (_Bool)isProtectIOS13CrashIfWebViewDeallocOnWKWebsiteDataStoreOperateData;
+ (_Bool)isOpenProtection;
+ (id)sharedInstance;
+ (void)websiteDataStore:(id)arg1 safeFromMainThreadFetchDataRecordsOfTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 forDataRecords:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 modifiedSince:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)addEachWebViewOnInitedFromMainThread:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *websiteDataStoreHoldWebViewSet; // @synthesize websiteDataStoreHoldWebViewSet=_websiteDataStoreHoldWebViewSet;
@property(nonatomic) long long websiteDataStoreOperatingCount; // @synthesize websiteDataStoreOperatingCount=_websiteDataStoreOperatingCount;
@property(retain, nonatomic) NSMutableArray *webViewRecrodList; // @synthesize webViewRecrodList=_webViewRecrodList;
- (void)removeHeldWebViewForWebsiteDataStoreOperating;
- (void)holdWebViewsOnWebsiteDataStoreOperating:(id)arg1;
- (_Bool)isWebsiteDataStoreOperating;
- (void)onWebsiteDataStoreOperateEnd;
- (void)onWebsiteDataStoreOperateBegin;
- (void)__websiteDataStore:(id)arg1 safeFromMainThreadFetchDataRecordsOfTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 forDataRecords:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)__websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 modifiedSince:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)omitDeallocedWebViewInRecordList:(id)arg1;
- (id)webViewListFromWebViewRecordList:(id)arg1;
- (void)onWebViewDealloc;
- (void)__addEachWebViewOnInitedFromMainThread:(id)arg1;

@end

