//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EntranceReportSwitch, MMLRUCache, NSMutableSet, WCFinderTipsShowEntranceExtInfo;

@interface WCFinderCachedMgr : NSObject
{
    _Bool _ignoreFaceVerifyCheck;
    unsigned long long _discoverySyncTimestamp;
    unsigned long long _foregroundSyncTimestamp;
    unsigned long long _lbsLifeForegroundSyncTimestamp;
    unsigned long long _enterSnsSyncTimestamp;
    unsigned long long _exitSnsSyncTimestamp;
    unsigned long long _exposeLastSnsFeedSyncTimestamp;
    unsigned long long _exposeNSnsFeedSyncTimestamp;
    unsigned long long _fetchRedDotSnsDelivery;
    unsigned long long _fetchRedDotAppPush;
    WCFinderTipsShowEntranceExtInfo *_lbsLifeEntranceShowInfoExtInfo;
    MMLRUCache *_notifyUUIDCache;
    MMLRUCache *_lbsLifeSyncNotifyUUIDCache;
    MMLRUCache *_feedPlayInfoCache;
    MMLRUCache *_feedClientReportInfoCache;
    MMLRUCache *_profilePreFetchCache;
    MMLRUCache *_encryptedDataItemChache;
    MMLRUCache *_autoPlayNextFeedSwitchCache;
    NSMutableSet *_redPacketBubbleShowSet;
    EntranceReportSwitch *_syncReport;
    EntranceReportSwitch *_lbsLifeSyncReport;
    MMLRUCache *_fansProfileUsernameCache;
    MMLRUCache *_subTabCache;
    unsigned long long _hasEnterTabRecord;
    unsigned long long _hasJumpToTabFromLeadToCardRecord;
}

+ (unsigned long long)convertFrom:(long long)arg1;
+ (id)cachedKeyOfEncryptedFeedID:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long hasJumpToTabFromLeadToCardRecord; // @synthesize hasJumpToTabFromLeadToCardRecord=_hasJumpToTabFromLeadToCardRecord;
@property(nonatomic) unsigned long long hasEnterTabRecord; // @synthesize hasEnterTabRecord=_hasEnterTabRecord;
@property(retain, nonatomic) MMLRUCache *subTabCache; // @synthesize subTabCache=_subTabCache;
@property(retain, nonatomic) MMLRUCache *fansProfileUsernameCache; // @synthesize fansProfileUsernameCache=_fansProfileUsernameCache;
@property(retain, nonatomic) EntranceReportSwitch *lbsLifeSyncReport; // @synthesize lbsLifeSyncReport=_lbsLifeSyncReport;
@property(retain, nonatomic) EntranceReportSwitch *syncReport; // @synthesize syncReport=_syncReport;
@property(retain, nonatomic) NSMutableSet *redPacketBubbleShowSet; // @synthesize redPacketBubbleShowSet=_redPacketBubbleShowSet;
@property(retain, nonatomic) MMLRUCache *autoPlayNextFeedSwitchCache; // @synthesize autoPlayNextFeedSwitchCache=_autoPlayNextFeedSwitchCache;
@property(retain, nonatomic) MMLRUCache *encryptedDataItemChache; // @synthesize encryptedDataItemChache=_encryptedDataItemChache;
@property(retain, nonatomic) MMLRUCache *profilePreFetchCache; // @synthesize profilePreFetchCache=_profilePreFetchCache;
@property(retain, nonatomic) MMLRUCache *feedClientReportInfoCache; // @synthesize feedClientReportInfoCache=_feedClientReportInfoCache;
@property(retain, nonatomic) MMLRUCache *feedPlayInfoCache; // @synthesize feedPlayInfoCache=_feedPlayInfoCache;
@property(retain, nonatomic) MMLRUCache *lbsLifeSyncNotifyUUIDCache; // @synthesize lbsLifeSyncNotifyUUIDCache=_lbsLifeSyncNotifyUUIDCache;
@property(retain, nonatomic) MMLRUCache *notifyUUIDCache; // @synthesize notifyUUIDCache=_notifyUUIDCache;
@property(retain, nonatomic) WCFinderTipsShowEntranceExtInfo *lbsLifeEntranceShowInfoExtInfo; // @synthesize lbsLifeEntranceShowInfoExtInfo=_lbsLifeEntranceShowInfoExtInfo;
@property(nonatomic) _Bool ignoreFaceVerifyCheck; // @synthesize ignoreFaceVerifyCheck=_ignoreFaceVerifyCheck;
@property(nonatomic) unsigned long long fetchRedDotAppPush; // @synthesize fetchRedDotAppPush=_fetchRedDotAppPush;
@property(nonatomic) unsigned long long fetchRedDotSnsDelivery; // @synthesize fetchRedDotSnsDelivery=_fetchRedDotSnsDelivery;
@property(nonatomic) unsigned long long exposeNSnsFeedSyncTimestamp; // @synthesize exposeNSnsFeedSyncTimestamp=_exposeNSnsFeedSyncTimestamp;
@property(nonatomic) unsigned long long exposeLastSnsFeedSyncTimestamp; // @synthesize exposeLastSnsFeedSyncTimestamp=_exposeLastSnsFeedSyncTimestamp;
@property(nonatomic) unsigned long long exitSnsSyncTimestamp; // @synthesize exitSnsSyncTimestamp=_exitSnsSyncTimestamp;
@property(nonatomic) unsigned long long enterSnsSyncTimestamp; // @synthesize enterSnsSyncTimestamp=_enterSnsSyncTimestamp;
@property(nonatomic) unsigned long long lbsLifeForegroundSyncTimestamp; // @synthesize lbsLifeForegroundSyncTimestamp=_lbsLifeForegroundSyncTimestamp;
@property(nonatomic) unsigned long long foregroundSyncTimestamp; // @synthesize foregroundSyncTimestamp=_foregroundSyncTimestamp;
@property(nonatomic) unsigned long long discoverySyncTimestamp; // @synthesize discoverySyncTimestamp=_discoverySyncTimestamp;
- (void)clearAllEnterTimelineTabRecord;
- (void)markJumpToTimelineTabFromLeadToCard:(long long)arg1;
- (_Bool)hasJumpToTimelineTabFromLeadToCard:(long long)arg1;
- (void)markEnterTimelineTab:(long long)arg1;
- (_Bool)hasEnterTimelineTab:(long long)arg1;
- (id)getFansProfileCacheName:(id)arg1;
- (void)cacheFansProfileUsername:(id)arg1 username:(id)arg2;
- (id)lbsLifeSyncConfig;
- (void)updateLbsLifeSyncConfig:(id)arg1;
- (void)commonLogForSyncConfigUpdateWithConfig:(id)arg1 logIdentifier:(id)arg2;
- (id)syncConfig;
- (void)updateSyncConfig:(id)arg1;
- (_Bool)getAutoPlayNextFeedSwitchForKey:(id)arg1;
- (void)setAutoPlayNextFeedSwitch:(_Bool)arg1 forKey:(id)arg2;
- (void)updateFeedId:(id)arg1 withEncryptedFeedID:(id)arg2;
- (void)removeCachedFeedIDWithEncryptedFeedID:(id)arg1;
- (id)feedIdWithEncryptedFeedID:(id)arg1;
- (_Bool)canProfilePreFetchWithUsername:(id)arg1 interval:(long long)arg2;
- (void)saveProfilePreFetchTimestampWithUsername:(id)arg1;
- (id)getKeyWithTid:(id)arg1 commentScene:(unsigned long long)arg2;
- (id)getFeedClientInfoWithFeedID:(id)arg1 commentScene:(unsigned long long)arg2;
- (void)updateFeedClientInfoWithFeedID:(id)arg1 commentScene:(unsigned long long)arg2 reportInfo:(id)arg3;
- (id)getVideoPlayReportInfoWithTid:(id)arg1 commentScene:(unsigned long long)arg2;
- (void)updateVideoPlayReportInfo:(id)arg1 withFeedID:(id)arg2 commentScene:(unsigned long long)arg3;
- (void)cacheLbsLifeSyncNotifyUUID:(id)arg1;
- (_Bool)hadCacheLbsLifeSyncNotifyUUID:(id)arg1;
- (void)cacheNotifyUUID:(id)arg1;
- (_Bool)hadCacheNotifyUUID:(id)arg1;
- (void)_saveEncryTidCached:(id)arg1;
- (void)onCachedMgrTerminate;
- (void)onCachedMgrClearData;
- (_Bool)redPacketBubbleHasShow:(id)arg1;
- (void)addRedPacketBubbleShow:(id)arg1;
- (id)init;

@end

