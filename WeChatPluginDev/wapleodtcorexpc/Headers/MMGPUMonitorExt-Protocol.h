//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMGPUMonitor, MMGPUSamplingTraceInfo;

@protocol MMGPUMonitorExt <NSObject>

@optional
- (void)gpuMonitor:(MMGPUMonitor *)arg1 didCollectSamplingTraceInfo:(MMGPUSamplingTraceInfo *)arg2;
@end

