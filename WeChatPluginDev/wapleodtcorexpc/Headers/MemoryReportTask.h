//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MemoryReportTask : NSObject
{
    _Bool _generateFail;
    _Bool _reportSuccess;
    int _retryCount;
    unsigned long long _launchTime;
    NSDictionary *_customInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_reportSuccess;
+ (void)PBArrayAdd_generateFail;
+ (void)PBArrayAdd_launchTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool reportSuccess; // @synthesize reportSuccess=_reportSuccess;
@property(nonatomic) _Bool generateFail; // @synthesize generateFail=_generateFail;
@property(nonatomic) unsigned long long launchTime; // @synthesize launchTime=_launchTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

