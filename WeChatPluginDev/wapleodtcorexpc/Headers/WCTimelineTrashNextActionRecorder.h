//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCTimelineTrashNextActionRecorder : NSObject
{
    NSMutableDictionary *_records;
}

+ (void)clearAll;
+ (void)tryReportNextLocalId:(id)arg1 nextPublishId:(id)arg2;
+ (void)recordNextLocalId:(id)arg1 previousReportData:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_records;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *records; // @synthesize records=_records;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

