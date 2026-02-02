//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCImageCache
{
    NSMutableDictionary *m_WCImagesOfType;
}

+ (_Bool)couldCacheImage:(id)arg1;
- (void).cxx_destruct;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (unsigned long long)onServiceCleanCache;
- (void)onServiceMemoryWarning;
- (void)clearAllCaches;
- (void)setImage:(id)arg1 forMedia:(id)arg2 ofType:(long long)arg3;
- (id)getImage:(id)arg1 ofType:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

