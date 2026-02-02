//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCStackTracePool;
@protocol WCPowerConsumeStackCollectorDelegate;

@interface WCPowerConsumeStackCollector : NSObject
{
    id <WCPowerConsumeStackCollectorDelegate> _delegate;
    WCStackTracePool *_stackTracePool;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStackTracePool *stackTracePool; // @synthesize stackTracePool=_stackTracePool;
@property(nonatomic) __weak id <WCPowerConsumeStackCollectorDelegate> delegate; // @synthesize delegate=_delegate;
- (struct StackInfo)getStackInfoWithThreadCount:(unsigned int)arg1 costCpuThreadList:(unsigned int *)arg2 costCpuValueList:(float *)arg3;
- (float)getTotCpuWithCostCpuThreadArray:(id)arg1 andThreadCount:(unsigned int *)arg2;
- (float *)getCpuHighThreadValueArray;
- (struct KSStackCursor **)getCPUStackCursor;
- (int)getCurrentCpuHighStackNumber;
- (float)getCPUUsageAndCPUBlockStack;
- (_Bool)isCPUHighBlock;
- (float)getCPUUsageAndPowerConsumeStack;
- (void)makeConclusion;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)dealloc;
- (id)initWithCPULimit:(float)arg1;

@end

