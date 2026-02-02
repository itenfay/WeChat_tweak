//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBMessageExt : NSObject
{
    unsigned int _msgLocalId;
    unsigned int _msgFlag;
    unsigned int _ConIntRes1;
    unsigned int _ConIntRes2;
    unsigned int _ConIntRes3;
    NSString *_msgSource;
    NSString *_msgIdentify;
    NSString *_ConStrRes1;
    NSString *_ConStrRes2;
    NSString *_ConStrRes3;
}

+ (void)__wcdb_column_constraint_87:(void *)arg1;
+ (void)__wcdb_column_constraint_86:(void *)arg1;
+ (void)__wcdb_column_constraint_85:(void *)arg1;
+ (void)__wcdb_column_constraint_84:(void *)arg1;
+ (void)__wcdb_index_83:(void *)arg1;
+ (void)__wcdb_column_constraint_82:(void *)arg1;
+ (id)swift_ConIntRes1;
+ (const void *)__wcdb_synthesize_81:(void *)arg1;
+ (const void *)ConIntRes1;
+ (id)swift_ConStrRes3;
+ (const void *)__wcdb_synthesize_80:(void *)arg1;
+ (const void *)ConStrRes3;
+ (id)swift_ConStrRes2;
+ (const void *)__wcdb_synthesize_79:(void *)arg1;
+ (const void *)ConStrRes2;
+ (id)swift_ConStrRes1;
+ (const void *)__wcdb_synthesize_78:(void *)arg1;
+ (const void *)ConStrRes1;
+ (id)swift_msgIdentify;
+ (const void *)__wcdb_synthesize_77:(void *)arg1;
+ (const void *)msgIdentify;
+ (id)swift_msgSource;
+ (const void *)__wcdb_synthesize_76:(void *)arg1;
+ (const void *)msgSource;
+ (id)swift_ConIntRes3;
+ (const void *)__wcdb_synthesize_75:(void *)arg1;
+ (const void *)ConIntRes3;
+ (id)swift_ConIntRes2;
+ (const void *)__wcdb_synthesize_74:(void *)arg1;
+ (const void *)ConIntRes2;
+ (id)swift_msgFlag;
+ (const void *)__wcdb_synthesize_73:(void *)arg1;
+ (const void *)msgFlag;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_72:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3=_ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2=_ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1=_ConStrRes1;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3=_ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2=_ConIntRes2;
@property(nonatomic) unsigned int ConIntRes1; // @synthesize ConIntRes1=_ConIntRes1;
@property(retain, nonatomic) NSString *msgIdentify; // @synthesize msgIdentify=_msgIdentify;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(nonatomic) unsigned int msgFlag; // @synthesize msgFlag=_msgFlag;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;

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

