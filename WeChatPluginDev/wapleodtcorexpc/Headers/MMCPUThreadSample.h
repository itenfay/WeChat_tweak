//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMetricsStackInfo;

@interface MMCPUThreadSample : NSObject
{
    _Bool isAutoIncrement;
    unsigned int _threadID;
    float _cpuUsage;
    long long lastInsertedRowID;
    unsigned long long _sampleID;
    double _time;
    MMMetricsStackInfo *_stack;
    unsigned long long _stackHash;
    long long _userTime;
    long long _systemTime;
}

+ (id)generateStackReportItems:(id)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_systemTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)systemTime;
+ (id)swift_userTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)userTime;
+ (id)swift_cpuUsage;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)cpuUsage;
+ (id)swift_threadID;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)threadID;
+ (id)swift_stackHash;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)stackHash;
+ (id)swift_time;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)time;
+ (id)swift_sampleID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sampleID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long systemTime; // @synthesize systemTime=_systemTime;
@property(nonatomic) long long userTime; // @synthesize userTime=_userTime;
@property(nonatomic) float cpuUsage; // @synthesize cpuUsage=_cpuUsage;
@property(nonatomic) unsigned int threadID; // @synthesize threadID=_threadID;
@property(nonatomic) unsigned long long stackHash; // @synthesize stackHash=_stackHash;
@property(retain, nonatomic) MMMetricsStackInfo *stack; // @synthesize stack=_stack;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long sampleID; // @synthesize sampleID=_sampleID;
- (void)setLastInsertedRowID:(long long)arg1;
- (long long)lastInsertedRowID;
- (void)setIsAutoIncrement:(_Bool)arg1;
- (_Bool)isAutoIncrement;
- (void)merge:(id)arg1;
@property(readonly, nonatomic) unsigned long long hash;
- (id)init;

@end

