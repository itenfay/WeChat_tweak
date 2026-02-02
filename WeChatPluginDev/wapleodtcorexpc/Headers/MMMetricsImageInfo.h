//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMetricsImageInfo : NSObject
{
    NSString *_uuid;
    unsigned long long _address;
    unsigned long long _size;
}

+ (id)generateStackReportItems:(id)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_size;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)size;
+ (id)swift_address;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)address;
+ (id)swift_uuid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)uuid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)generateStackReportItem;

@end

