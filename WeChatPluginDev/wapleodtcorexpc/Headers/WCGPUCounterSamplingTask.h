//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCGPUCounterSamplingTask : NSObject
{
    _Bool _reportSuccess;
    _Bool _isReportDirectly;
    unsigned int _reportTime;
    int _reportRetryCount;
    unsigned long long _reportID;
    NSString *_reportData;
}

+ (void)initialize;
+ (void)PBArrayAdd_reportData;
+ (void)PBArrayAdd_reportRetryCount;
+ (void)PBArrayAdd_reportSuccess;
+ (void)PBArrayAdd_reportTime;
+ (void)PBArrayAdd_reportID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportData; // @synthesize reportData=_reportData;
@property(nonatomic) int reportRetryCount; // @synthesize reportRetryCount=_reportRetryCount;
@property(nonatomic) _Bool isReportDirectly; // @synthesize isReportDirectly=_isReportDirectly;
@property(nonatomic) _Bool reportSuccess; // @synthesize reportSuccess=_reportSuccess;
@property(nonatomic) unsigned int reportTime; // @synthesize reportTime=_reportTime;
@property(nonatomic) unsigned long long reportID; // @synthesize reportID=_reportID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

