//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGPUSamplingTraceInfo, NSRecursiveLock, WCSamplingStatData;

@interface WCSamplingReportEvent : NSObject
{
    WCSamplingStatData *_stackReportData;
    WCSamplingStatData *_kvReportData;
    MMGPUSamplingTraceInfo *_samplingTraceInfo;
    NSRecursiveLock *_lock;
}

+ (id)GenerateReportItemWithEventList:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) MMGPUSamplingTraceInfo *samplingTraceInfo; // @synthesize samplingTraceInfo=_samplingTraceInfo;
@property(retain, nonatomic) WCSamplingStatData *kvReportData; // @synthesize kvReportData=_kvReportData;
@property(retain, nonatomic) WCSamplingStatData *stackReportData; // @synthesize stackReportData=_stackReportData;
- (id)generateStackReportItem;
- (_Bool)shouldReportStack;
- (void)reportToMMData;
- (void)updateWithSamplingTraceInfo:(id)arg1;
- (id)initWithSamplingTraceInfo:(id)arg1;

@end

