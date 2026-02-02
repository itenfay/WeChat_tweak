//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMetricsStackInfo;

@interface MMAudioTask : NSObject
{
    _Bool isAutoIncrement;
    long long lastInsertedRowID;
    unsigned long long _taskID;
    unsigned long long _target;
    unsigned long long _taskType;
    double _beginTime;
    double _endTime;
    MMMetricsStackInfo *_stack;
    unsigned long long _stackHash;
}

+ (id)generateStackReportItems:(id)arg1;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_stackHash;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)stackHash;
+ (id)swift_endTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)endTime;
+ (id)swift_beginTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)beginTime;
+ (id)swift_taskID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)taskID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long stackHash; // @synthesize stackHash=_stackHash;
@property(retain, nonatomic) MMMetricsStackInfo *stack; // @synthesize stack=_stack;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) unsigned long long taskType; // @synthesize taskType=_taskType;
@property(nonatomic) unsigned long long target; // @synthesize target=_target;
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
- (void)setLastInsertedRowID:(long long)arg1;
- (long long)lastInsertedRowID;
- (void)setIsAutoIncrement:(_Bool)arg1;
- (_Bool)isAutoIncrement;
- (_Bool)isPlaying;
- (void)onTaskEnd;
- (void)onTaskBegin;
- (id)init;

@end

