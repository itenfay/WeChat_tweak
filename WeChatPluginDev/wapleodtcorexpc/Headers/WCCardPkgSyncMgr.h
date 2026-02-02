//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, WCCardPkgDB;
@protocol WCCardSyncMgrDelegate;

@interface WCCardPkgSyncMgr
{
    NSData *_syncKeyBuffer;
    WCCardPkgDB *_wcCardPkgDB;
    id <WCCardSyncMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardSyncMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleWCCardSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)syncByNotify:(unsigned int)arg1 Scene:(unsigned int)arg2;
- (void)clearSyncKey;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)loadSyncKeyBuffer;
- (_Bool)saveSyncKeyBuffer:(id)arg1;
- (id)getSyncKeyBufferFilePath;

@end

