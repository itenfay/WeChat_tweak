//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface WCBusyThreadHandler : NSObject
{
    int _size;
    int _tailIndex;
    NSMutableArray *_cycleArray;
    NSLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *cycleArray; // @synthesize cycleArray=_cycleArray;
@property(nonatomic) int tailIndex; // @synthesize tailIndex=_tailIndex;
@property(nonatomic) int size; // @synthesize size=_size;
- (id)makeCallTrees;
- (void)recordBusyThreads;
- (id)initWithCycleArraySize:(int)arg1;

@end

