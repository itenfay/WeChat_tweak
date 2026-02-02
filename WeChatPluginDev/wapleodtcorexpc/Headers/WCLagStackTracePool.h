//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCLagStackTracePool : NSObject
{
    unsigned long long **m_stackCyclePool;
    unsigned long long *m_stackCount;
    unsigned long long m_maxStackCount;
    NSMutableArray *_parentAddressFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *parentAddressFrame; // @synthesize parentAddressFrame=_parentAddressFrame;
- (id)description;
- (void)p_mergedAddressFrameArray:(id)arg1 with:(id)arg2;
- (void)p_mergeAddressFrame:(id)arg1 with:(id)arg2;
- (void)p_addAddressFrame:(id)arg1;
- (id)p_getAddressFrameWithStackTraces:(unsigned long long *)arg1 length:(unsigned long long)arg2;
- (id)p_getInfoDictFromAddressFrame:(id)arg1;
- (id)makeCallTree;
- (id)initWithStackCyclePool:(unsigned long long **)arg1 stackCount:(unsigned long long *)arg2 maxStackTraceCount:(unsigned long long)arg3;

@end

