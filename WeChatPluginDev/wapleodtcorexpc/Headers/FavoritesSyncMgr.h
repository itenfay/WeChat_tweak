//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItemDB, NSData, NSObject;
@protocol FavoritesSyncMgrDelegate, OS_dispatch_queue;

@interface FavoritesSyncMgr
{
    NSData *_syncKeyBuffer;
    FavoritesItemDB *_favItemDB;
    id <FavoritesSyncMgrDelegate> _delegate;
    _Bool _isSendingReq;
    int _syncSelector;
    int _needSyncSelector;
    _Bool _hasUpdateInfo;
    NSObject<OS_dispatch_queue> *m_handleCmdListQueue;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesSyncMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleFavoritesSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)aysncHandleFavoritesSyncRespCmdList:(id)arg1 Response:(id)arg2;
- (void)SyncByNotify:(unsigned int)arg1;
- (_Bool)resetSyncValue:(int)arg1;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)loadSyncKeyBuffer;
- (_Bool)saveSyncKeyBuffer;

@end

