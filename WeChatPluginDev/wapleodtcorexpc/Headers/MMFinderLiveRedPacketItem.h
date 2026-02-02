//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveRedPacketInfo, MMFinderLiveTaskId, NSString, NSTimer;

@interface MMFinderLiveRedPacketItem : NSObject
{
    _Bool _localRemainingTimeEnabled;
    unsigned int _localRemainingTimeInterval;
    NSString *_redPacketBuffer;
    NSString *_observedKey;
    MMFinderLiveTaskId *_taskId;
    NSString *_redPacketId;
    long long _status;
    FinderLiveRedPacketInfo *_redPacketInfo;
    NSTimer *_localRemainingTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *localRemainingTimer; // @synthesize localRemainingTimer=_localRemainingTimer;
@property(retain, nonatomic) FinderLiveRedPacketInfo *redPacketInfo; // @synthesize redPacketInfo=_redPacketInfo;
@property(nonatomic) unsigned int localRemainingTimeInterval; // @synthesize localRemainingTimeInterval=_localRemainingTimeInterval;
@property(readonly, nonatomic) _Bool localRemainingTimeEnabled; // @synthesize localRemainingTimeEnabled=_localRemainingTimeEnabled;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *redPacketId; // @synthesize redPacketId=_redPacketId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, copy, nonatomic) NSString *observedKey; // @synthesize observedKey=_observedKey;
- (void)updateFromRedPacketInfo:(id)arg1;
- (void)stopLocalRemainingTimer;
- (void)startLocalRemainingTimer;
- (void)refreshStatus;
- (void)resetStatusIfOpenedInCurrentCycle;
- (void)changeStatusToOpenedInCurrentCycle;
- (_Bool)isFinishedInCurrentCycle;
- (void)changeStatusToOpened;
- (_Bool)isFinished;
- (_Bool)isAvailable;
@property(readonly, nonatomic) _Bool sentByAnchor;
@property(readonly, nonatomic) _Bool isAllReceived;
@property(readonly, copy, nonatomic) NSString *redPacketBuffer; // @synthesize redPacketBuffer=_redPacketBuffer;
@property(readonly, copy, nonatomic) NSString *referredLiveMicId;
@property(readonly, nonatomic) unsigned int remainingTimeInterval;
@property(readonly, nonatomic) unsigned long long endTimeInterval;
@property(readonly, nonatomic) unsigned long long beginTimeInterval;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 redPacketInfo:(id)arg2;

@end

