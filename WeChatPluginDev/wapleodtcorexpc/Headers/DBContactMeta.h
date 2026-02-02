//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactMeta : NSObject
{
    unsigned int _lastUpdate;
    unsigned int _flag;
    unsigned int _intCon2;
    unsigned int _intCon3;
    NSString *_username;
    NSString *_strCon1;
    NSString *_strCon2;
    NSString *_strCon3;
}

+ (void)__wcdb_column_constraint_48:(void *)arg1;
+ (id)swift_strCon3;
+ (const void *)__wcdb_synthesize_47:(void *)arg1;
+ (const void *)strCon3;
+ (id)swift_strCon2;
+ (const void *)__wcdb_synthesize_46:(void *)arg1;
+ (const void *)strCon2;
+ (id)swift_strCon1;
+ (const void *)__wcdb_synthesize_45:(void *)arg1;
+ (const void *)strCon1;
+ (id)swift_intCon3;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (const void *)intCon3;
+ (id)swift_intCon2;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (const void *)intCon2;
+ (id)swift_flag;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (const void *)flag;
+ (id)swift_lastUpdate;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (const void *)lastUpdate;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *strCon3; // @synthesize strCon3=_strCon3;
@property(retain, nonatomic) NSString *strCon2; // @synthesize strCon2=_strCon2;
@property(retain, nonatomic) NSString *strCon1; // @synthesize strCon1=_strCon1;
@property(nonatomic) unsigned int intCon3; // @synthesize intCon3=_intCon3;
@property(nonatomic) unsigned int intCon2; // @synthesize intCon2=_intCon2;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned int lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

