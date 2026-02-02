//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMetricsStackInfo : NSObject
{
    struct MatrixStackInfo *m_info;
    NSString *m_symbolNames;
}

+ (id)generateOfflineStackReportItems:(id)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_symbolNames;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)symbolNames;
+ (id)swift_stackFrames;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)stackFrames;
+ (id)swift_stackHash;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)stackHash;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
- (id)generateOfflineStackReportItem;
- (id)generateStackReportItem;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setSymbolNames:(id)arg1;
- (id)symbolNames;
- (void)setStackFrames:(id)arg1;
- (id)stackFrames;
- (void)setStackHash:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long stackHash;
- (void)dealloc;
- (id)initWithStackInfo:(struct MatrixStackInfo *)arg1;
- (id)init;

@end

