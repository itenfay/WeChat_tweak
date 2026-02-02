//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAContact, WAThreadSafeMutableDictionary;

@interface WAColdLaunchPreFetchCGILogic : NSObject
{
    WAContact *_contact;
    WAThreadSafeMutableDictionary *_cache;
    WAThreadSafeMutableDictionary *_fetchType2Observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAThreadSafeMutableDictionary *fetchType2Observers; // @synthesize fetchType2Observers=_fetchType2Observers;
@property(retain, nonatomic) WAThreadSafeMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (id)generateGetSettingAuthInfoFetchItem;
- (id)generateGetUserPrivacyAuthInfoFetchItem;
- (void)notifyDidFetchResult:(id)arg1 forFetchType:(unsigned int)arg2;
- (void)observeFetchType:(unsigned int)arg1 byCompletion:(CDUnknownBlockType)arg2;
- (void)getColdLaunchPreFetchCGIDataWithFetchType:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearAllCacheData;
- (void)clearCacheDataForFetchType:(unsigned int)arg1;
- (void)onGetRemoteDataRet:(_Bool)arg1 fetchType:(unsigned int)arg2 respData:(id)arg3;
- (void)markFetchingWithFetchType:(unsigned int)arg1;
- (void)onColdStartPreFetchRequestFailed:(id)arg1;
- (void)handleColdStartPreFetchDataResponse:(id)arg1;
- (void)sendColdStartFetchDataRequest:(id)arg1;
- (void)processBatchPrefetch:(unsigned int)arg1;
- (void)processSinglePrefetch:(id)arg1;
- (void)asyncDoPreFetchPrivateData;
- (id)initWithContact:(id)arg1;

@end

