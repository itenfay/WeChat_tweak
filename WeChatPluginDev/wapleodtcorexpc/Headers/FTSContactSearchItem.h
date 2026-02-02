//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSContactSearchItem : NSObject
{
    unsigned long long _contactType;
    NSString *_userName;
    NSString *_mainSearchContent;
    NSString *_groupMembers;
    NSString *_associatedGroups;
    NSString *_reservedText1;
    NSString *_reservedText2;
}

+ (void)__wcdb_column_constraint_94:(void *)arg1;
+ (void)__wcdb_column_constraint_93:(void *)arg1;
+ (void)__wcdb_column_constraint_92:(void *)arg1;
+ (void)__wcdb_virtual_table_91:(void *)arg1;
+ (void)__wcdb_virtual_table_90:(void *)arg1;
+ (id)swift_reservedText2;
+ (const void *)__wcdb_synthesize_89:(void *)arg1;
+ (const void *)reservedText2;
+ (id)swift_reservedText1;
+ (const void *)__wcdb_synthesize_88:(void *)arg1;
+ (const void *)reservedText1;
+ (id)swift_associatedGroups;
+ (const void *)__wcdb_synthesize_87:(void *)arg1;
+ (const void *)associatedGroups;
+ (id)swift_contactType;
+ (const void *)__wcdb_synthesize_86:(void *)arg1;
+ (const void *)contactType;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_85:(void *)arg1;
+ (const void *)userName;
+ (id)swift_groupMembers;
+ (const void *)__wcdb_synthesize_84:(void *)arg1;
+ (const void *)groupMembers;
+ (id)swift_mainSearchContent;
+ (const void *)__wcdb_synthesize_83:(void *)arg1;
+ (const void *)mainSearchContent;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reservedText2; // @synthesize reservedText2=_reservedText2;
@property(retain, nonatomic) NSString *reservedText1; // @synthesize reservedText1=_reservedText1;
@property(retain, nonatomic) NSString *associatedGroups; // @synthesize associatedGroups=_associatedGroups;
@property(retain, nonatomic) NSString *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(retain, nonatomic) NSString *mainSearchContent; // @synthesize mainSearchContent=_mainSearchContent;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned long long contactType; // @synthesize contactType=_contactType;

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

