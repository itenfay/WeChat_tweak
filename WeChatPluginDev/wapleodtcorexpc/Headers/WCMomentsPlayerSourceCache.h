//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCMomentsPlayerSourceCache
{
    NSMutableDictionary *_sourceStatusCache;
}

- (void).cxx_destruct;
- (void)onCacheMgrCleanCacheWarning;
- (long long)getSourceStatusForMediaItem:(id)arg1;
- (void)updateSourceStatus:(long long)arg1 forMediaItem:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *sourceStatusCache; // @synthesize sourceStatusCache=_sourceStatusCache;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

