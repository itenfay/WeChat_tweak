//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRedPacketItem, MMFinderLiveTaskId, NSMutableArray, NSString;

@interface MMFinderLiveRedPacketQueue : NSObject
{
    NSString *_observedKey;
    MMFinderLiveTaskId *_taskId;
    NSString *_senderMicId;
    NSMutableArray *_redPackets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *redPackets; // @synthesize redPackets=_redPackets;
@property(copy, nonatomic) NSString *senderMicId; // @synthesize senderMicId=_senderMicId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, copy, nonatomic) NSString *observedKey; // @synthesize observedKey=_observedKey;
- (void)redPacketItem:(id)arg1 statusDidChange:(long long)arg2;
- (void)didRemoveRedPacket:(id)arg1;
- (void)didAddRedPacket:(id)arg1;
- (void)willRemoveRedPacket:(id)arg1;
- (void)willAddRedPacket:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveRedPacketItem *lastRedPacket;
@property(readonly, nonatomic) MMFinderLiveRedPacketItem *firstRedPacket;
- (void)removeRedPacket:(id)arg1;
- (void)addRedPacket:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithTaskId:(id)arg1 senderMicId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

