//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMetricsThreadInfo : NSObject
{
    unsigned int _threadID;
    unsigned int _priority;
    float _cpuUsage;
    double _time;
    NSString *_name;
}

+ (id)generateStackReportItems:(id)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (id)swift_name;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)name;
+ (id)swift_cpuUsage;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)cpuUsage;
+ (id)swift_priority;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)priority;
+ (id)swift_time;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)time;
+ (id)swift_threadID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)threadID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) float cpuUsage; // @synthesize cpuUsage=_cpuUsage;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned int threadID; // @synthesize threadID=_threadID;

@end

