//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCStackTracePool : NSObject
{
    unsigned long long **m_stackCyclePool;
    unsigned long long *m_stackCount;
    float *m_stackCPU;
    _Bool *m_stackInBackground;
    unsigned long long m_poolTailPoint;
    unsigned long long m_maxStackCount;
    NSMutableArray *_parentAddressFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *parentAddressFrame; // @synthesize parentAddressFrame=_parentAddressFrame;
- (id)description;
- (void)p_mergedAddressFrameArray:(id)arg1 with:(id)arg2;
- (void)p_mergeAddressFrame:(id)arg1 with:(id)arg2;
- (void)p_addAddressFrame:(id)arg1;
- (id)p_getAddressFrameWithStackTraces:(unsigned long long *)arg1 length:(unsigned long long)arg2 cpu:(float)arg3 isInBackground:(_Bool)arg4;
- (id)p_getInfoDictFromAddressFrame:(id)arg1;
- (id)makeCallTree;
- (void)addThreadStack:(unsigned long long *)arg1 andLength:(unsigned long long)arg2 andCPU:(float)arg3 isInBackground:(_Bool)arg4;
- (void)dealloc;
- (id)initWithMaxStackTraceCount:(unsigned long long)arg1;
- (id)init;

@end

