//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactChatRoomToolWeApp : NSObject
{
    NSString *_userName;
    NSString *_appUserName;
    NSString *_appPagePath;
}

+ (void)__wcdb_table_constraint_36:(void *)arg1;
+ (void)__wcdb_table_constraint_35:(void *)arg1;
+ (void)__wcdb_column_constraint_34:(void *)arg1;
+ (void)__wcdb_column_constraint_33:(void *)arg1;
+ (id)swift_appPagePath;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)appPagePath;
+ (id)swift_appUserName;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (const void *)appUserName;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appPagePath; // @synthesize appPagePath=_appPagePath;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

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

