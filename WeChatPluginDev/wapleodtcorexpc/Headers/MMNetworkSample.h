//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMetricsStackInfo;

@interface MMNetworkSample : NSObject
{
    _Bool isAutoIncrement;
    unsigned long long _sampleID;
    double _time;
    unsigned long long _connectionID;
    MMMetricsStackInfo *_stack;
    unsigned long long _stackHash;
    unsigned long long _wifiSent;
    unsigned long long _wifiReceived;
    unsigned long long _wwanSent;
    unsigned long long _wwanReceived;
}

+ (id)generateStackReportItems:(id)arg1;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_wwanReceived;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)wwanReceived;
+ (id)swift_wwanSent;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)wwanSent;
+ (id)swift_wifiReceived;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)wifiReceived;
+ (id)swift_wifiSent;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)wifiSent;
+ (id)swift_stackHash;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)stackHash;
+ (id)swift_connectionID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)connectionID;
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
@property(nonatomic) unsigned long long wwanReceived; // @synthesize wwanReceived=_wwanReceived;
@property(nonatomic) unsigned long long wwanSent; // @synthesize wwanSent=_wwanSent;
@property(nonatomic) unsigned long long wifiReceived; // @synthesize wifiReceived=_wifiReceived;
@property(nonatomic) unsigned long long wifiSent; // @synthesize wifiSent=_wifiSent;
@property(nonatomic) unsigned long long stackHash; // @synthesize stackHash=_stackHash;
@property(retain, nonatomic) MMMetricsStackInfo *stack; // @synthesize stack=_stack;
@property(nonatomic) unsigned long long connectionID; // @synthesize connectionID=_connectionID;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long sampleID; // @synthesize sampleID=_sampleID;
- (void)setIsAutoIncrement:(_Bool)arg1;
- (_Bool)isAutoIncrement;
- (void)merge:(id)arg1;
- (unsigned long long)totalUsage;
- (unsigned long long)totalWwanUsage;
- (unsigned long long)totalWifiUsage;
- (id)init;

@end

