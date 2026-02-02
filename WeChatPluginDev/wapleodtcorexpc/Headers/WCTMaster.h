//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTMaster : NSObject
{
    int _rootpage;
    NSString *_type;
    NSString *_name;
    NSString *_tblName;
    NSString *_sql;
}

+ (id)tableName;
+ (id)swift_sql;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)sql;
+ (id)swift_rootpage;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)rootpage;
+ (id)swift_tblName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)tblName;
+ (id)swift_name;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)name;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)type;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sql; // @synthesize sql=_sql;
@property(nonatomic) int rootpage; // @synthesize rootpage=_rootpage;
@property(retain, nonatomic) NSString *tblName; // @synthesize tblName=_tblName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;

@end

