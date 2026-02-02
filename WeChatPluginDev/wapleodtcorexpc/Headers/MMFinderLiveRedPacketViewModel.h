//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRedPacketItem, MMFinderLiveRedPacketLogic, MMFinderLiveRedPacketQueue, MMFinderLiveTaskId, NSString;

@interface MMFinderLiveRedPacketViewModel : NSObject
{
    _Bool _remainingTimeHidden;
    _Bool _hidden;
    NSString *_observedKey;
    MMFinderLiveTaskId *_taskId;
    NSString *_senderMicId;
    NSString *_remainingTimeString;
    unsigned long long _count;
    MMFinderLiveRedPacketLogic *_logic;
    MMFinderLiveRedPacketQueue *_queue;
    MMFinderLiveRedPacketItem *_targetRedPacket;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRedPacketItem *targetRedPacket; // @synthesize targetRedPacket=_targetRedPacket;
@property(retain, nonatomic) MMFinderLiveRedPacketQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak MMFinderLiveRedPacketLogic *logic; // @synthesize logic=_logic;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *remainingTimeString; // @synthesize remainingTimeString=_remainingTimeString;
@property(nonatomic) _Bool remainingTimeHidden; // @synthesize remainingTimeHidden=_remainingTimeHidden;
@property(copy, nonatomic) NSString *senderMicId; // @synthesize senderMicId=_senderMicId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, copy, nonatomic) NSString *observedKey; // @synthesize observedKey=_observedKey;
- (void)redPacketItem:(id)arg1 remainingTimeDidChange:(unsigned int)arg2;
- (void)redPacketQueueDidChange:(id)arg1;
- (void)openTargetRedPacket;
- (void)refreshHiddenWithRedPacketCount:(unsigned long long)arg1;
- (void)refreshRedPacketCount:(unsigned long long)arg1;
- (void)refreshRemainingTimeStringWithTimeInterval:(unsigned int)arg1;
- (void)refreshRemainingTimeHidden:(_Bool)arg1;
- (id)initWithTaskId:(id)arg1 senderMicId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

