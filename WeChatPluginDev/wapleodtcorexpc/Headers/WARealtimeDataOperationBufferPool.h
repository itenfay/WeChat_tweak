//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WARealtimeDataOperationBufferPool
{
    NSMutableArray *_immediatePriorityBuffer;
    NSMutableArray *_highPriorityBuffer;
    NSMutableArray *_normalPriorityBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *normalPriorityBuffer; // @synthesize normalPriorityBuffer=_normalPriorityBuffer;
@property(retain, nonatomic) NSMutableArray *highPriorityBuffer; // @synthesize highPriorityBuffer=_highPriorityBuffer;
@property(retain, nonatomic) NSMutableArray *immediatePriorityBuffer; // @synthesize immediatePriorityBuffer=_immediatePriorityBuffer;
- (unsigned long long)totalBufferSize;
- (id)dequeueProperBatchOperationsUnderTotalBytesSize:(unsigned long long)arg1 actualBytesSize:(unsigned long long *)arg2 despiteRetryInterval:(unsigned int)arg3;
- (void)addOperation:(id)arg1;
- (id)init;

@end

