//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer;
@protocol ChatMigrationHeartBeatMonitorDelegate;

@interface ChatMigrationHeartBeatMonitor : NSObject
{
    unsigned long long nextAckID;
    MMTimer *m_heartBeatTimer;
    _Bool m_bMonitorEnable;
    _Bool m_bHeartBeatTransfer;
    id <ChatMigrationHeartBeatMonitorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ChatMigrationHeartBeatMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkHeartBeat;
- (void)disableHeartBeatMonitor;
- (void)enableHeartBeatMonitor;
- (void)checkHeartBeatResponse;
- (void)sendHeartBeatRequest;
- (void)getHeartBeatPacketWithAckID:(unsigned long long)arg1;
- (void)p_sendHeartBeatToRemote;
- (id)init;

@end

