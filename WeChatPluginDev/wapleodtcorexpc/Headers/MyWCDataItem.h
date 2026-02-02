//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MyWCDataItem : NSObject
{
    int _m_codingType;
    NSString *_m_maID;
    NSData *_m_maBuffer;
}

+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_m_codingType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_codingType;
+ (id)swift_m_maBuffer;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_maBuffer;
+ (id)swift_m_maID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_maID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int m_codingType; // @synthesize m_codingType=_m_codingType;
@property(retain, nonatomic) NSData *m_maBuffer; // @synthesize m_maBuffer=_m_maBuffer;
@property(retain, nonatomic) NSString *m_maID; // @synthesize m_maID=_m_maID;

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

