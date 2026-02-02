//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMetricsStackInfo;

@interface MMGPURenderSample : NSObject
{
    _Bool isAutoIncrement;
    unsigned int _sampleCount;
    unsigned long long _sampleID;
    double _time;
    MMMetricsStackInfo *_stack;
    unsigned long long _stackHash;
    double _vertexTimeMs;
    double _fragmentTimeMs;
    double _gpuCostTimeMs;
    double _encodeTimeMs;
}

+ (id)generateStackReportItems:(id)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_stackHash;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)stackHash;
+ (id)swift_encodeTimeMs;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)encodeTimeMs;
+ (id)swift_gpuCostTimeMs;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)gpuCostTimeMs;
+ (id)swift_fragmentTimeMs;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)fragmentTimeMs;
+ (id)swift_vertexTimeMs;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)vertexTimeMs;
+ (id)swift_time;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)time;
+ (id)swift_sampleCount;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)sampleCount;
+ (id)swift_sampleID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sampleID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) double encodeTimeMs; // @synthesize encodeTimeMs=_encodeTimeMs;
@property(nonatomic) double gpuCostTimeMs; // @synthesize gpuCostTimeMs=_gpuCostTimeMs;
@property(nonatomic) double fragmentTimeMs; // @synthesize fragmentTimeMs=_fragmentTimeMs;
@property(nonatomic) double vertexTimeMs; // @synthesize vertexTimeMs=_vertexTimeMs;
@property(nonatomic) unsigned long long stackHash; // @synthesize stackHash=_stackHash;
@property(retain, nonatomic) MMMetricsStackInfo *stack; // @synthesize stack=_stack;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long sampleID; // @synthesize sampleID=_sampleID;
- (void)setIsAutoIncrement:(_Bool)arg1;
- (_Bool)isAutoIncrement;
- (void)merge:(id)arg1;
- (id)init;

@end

