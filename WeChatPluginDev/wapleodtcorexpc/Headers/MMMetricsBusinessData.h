//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMetricsBusinessDataContent;

@interface MMMetricsBusinessData : NSObject
{
    _Bool isAutoIncrement;
    unsigned long long _dataID;
    double _time;
    unsigned long long _type;
    MMMetricsBusinessDataContent *_content;
}

+ (void)__wcdb_index_5:(void *)arg1;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_content;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)content;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)type;
+ (id)swift_time;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)time;
+ (id)swift_dataID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)dataID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMetricsBusinessDataContent *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long dataID; // @synthesize dataID=_dataID;
- (void)setIsAutoIncrement:(_Bool)arg1;
- (_Bool)isAutoIncrement;
- (id)initWithType:(unsigned long long)arg1 content:(id)arg2;

@end

