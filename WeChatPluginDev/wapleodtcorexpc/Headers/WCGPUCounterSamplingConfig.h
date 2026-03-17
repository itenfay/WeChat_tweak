//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCGPUCounterSamplingConfig : NSObject
{
    unsigned int _lastReportTime;
    unsigned int _reportCount;
}

+ (void)initialize;
+ (void)PBArrayAdd_reportCount;
+ (void)PBArrayAdd_lastReportTime;
@property(nonatomic) unsigned int reportCount; // @synthesize reportCount=_reportCount;
@property(nonatomic) unsigned int lastReportTime; // @synthesize lastReportTime=_lastReportTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

