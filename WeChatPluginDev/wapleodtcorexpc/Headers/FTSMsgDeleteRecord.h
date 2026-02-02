//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSMsgDeleteRecord : NSObject
{
    unsigned int _userNameId;
    unsigned int _localId;
}

+ (void)__wcdb_table_constraint_53:(void *)arg1;
+ (void)__wcdb_table_constraint_52:(void *)arg1;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (const void *)localId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (const void *)userNameId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId=_userNameId;

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

