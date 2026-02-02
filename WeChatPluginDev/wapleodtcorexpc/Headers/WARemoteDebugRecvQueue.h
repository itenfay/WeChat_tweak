//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WARemoteDebugRecvQueueDelegate;

@interface WARemoteDebugRecvQueue : NSObject
{
    NSMutableArray *_recvIntervalList;
    unsigned int _currRecvSeq;
    unsigned int _prevRecvSeq;
    unsigned int _accumulateCount;
    id <WARemoteDebugRecvQueueDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WARemoteDebugRecvQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAccumulateCount;
- (unsigned int)getIntervalRecvCount;
- (unsigned int)getCurrRecvSeq;
- (void)logRecvIntervalList;
- (void)handleFirstRecvInterval;
- (void)mergeMessages:(id)arg1 cmdID:(unsigned int)arg2;
- (id)init;

@end

