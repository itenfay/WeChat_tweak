//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface QBBeaconNetRequestQueue : NSObject
{
    NSLock *_queueLock;
    NSMutableArray *_runningQueue;
    NSMutableArray *_waitingQueue;
    long long _maxConcurrentRequest;
}

- (void).cxx_destruct;
- (void)requestFinish:(id)arg1;
- (void)addOneRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

