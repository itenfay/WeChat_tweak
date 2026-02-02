//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VoIPFirstMessageStatisticsService
{
    _Bool _isReceivedNewsSyncMessagesOnce;
    _Bool _isHandledOnce;
    int _statisticsRoomId;
    double _launchTimestamp;
}

@property(nonatomic) _Bool isHandledOnce; // @synthesize isHandledOnce=_isHandledOnce;
@property(nonatomic) _Bool isReceivedNewsSyncMessagesOnce; // @synthesize isReceivedNewsSyncMessagesOnce=_isReceivedNewsSyncMessagesOnce;
@property(nonatomic) double launchTimestamp; // @synthesize launchTimestamp=_launchTimestamp;
@property(nonatomic) int statisticsRoomId; // @synthesize statisticsRoomId=_statisticsRoomId;
- (void)dealloc;
- (id)init;
- (void)applicationWillSuspend;
- (void)handleInviteMessage:(id)arg1;
- (void)receiveIfIsInviteMessage:(_Bool)arg1;
- (void)didLaunchWhenApplicaionEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

