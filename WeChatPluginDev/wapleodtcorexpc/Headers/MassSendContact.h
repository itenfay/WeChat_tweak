//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MassSendContact : NSObject
{
    NSString *m_nsUsrName;
    NSString *m_nsDetail;
    unsigned int m_uiToListCount;
    unsigned int ConIntRes2;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
}

+ (void)additionalObjectRelationalMapping:(void *)arg1;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (id)swift_ConStrRes2;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)ConStrRes2;
+ (id)swift_ConStrRes1;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)ConStrRes1;
+ (id)swift_ConIntRes2;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)ConIntRes2;
+ (id)swift_m_uiToListCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_uiToListCount;
+ (id)swift_m_nsDetail;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_nsDetail;
+ (id)swift_m_nsUsrName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_nsUsrName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned int m_uiToListCount; // @synthesize m_uiToListCount;
@property(retain, nonatomic) NSString *m_nsDetail; // @synthesize m_nsDetail;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

