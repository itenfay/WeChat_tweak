//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCShareCardDB;
@protocol WCShareCardSyncMgrDelegate;

@interface WCShareCardSyncMgr
{
    unsigned long long _syncMaxSeq;
    WCShareCardDB *_wcShareCardDB;
    unsigned int _defaultIntervalSeconds;
    unsigned int _lastSyncTime;
    id <WCShareCardSyncMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCShareCardSyncMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)saveSyncMaxSeq:(unsigned long long)arg1;
- (id)getWCShareCardSyncInfoPath;
- (void)loadSyncSeq;
- (void)handleShareCardSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doSync;
- (void)doSyncInternal;
- (void)makeSyncCgi;
- (void)clearSyncKey;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (id)init;

@end

