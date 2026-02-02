//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FavLocationDBRecord : NSObject
{
    int _m_latitude;
    int _m_longitude;
    unsigned int _m_updatetime;
    NSString *_m_language;
    NSString *_m_address;
}

+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (id)swift_m_updatetime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)m_updatetime;
+ (id)swift_m_address;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_address;
+ (id)swift_m_language;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_language;
+ (id)swift_m_longitude;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_longitude;
+ (id)swift_m_latitude;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_latitude;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_updatetime; // @synthesize m_updatetime=_m_updatetime;
@property(retain, nonatomic) NSString *m_address; // @synthesize m_address=_m_address;
@property(retain, nonatomic) NSString *m_language; // @synthesize m_language=_m_language;
@property(nonatomic) int m_longitude; // @synthesize m_longitude=_m_longitude;
@property(nonatomic) int m_latitude; // @synthesize m_latitude=_m_latitude;

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

