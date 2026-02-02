//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDeviceAirKissReccord : NSObject
{
    unsigned int IntRes1;
    unsigned int IntRes2;
    NSString *m_key;
    NSString *m_data;
    NSString *StrRes1;
    NSString *StrRes2;
}

+ (id)swift_StrRes2;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)StrRes2;
+ (id)swift_StrRes1;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)StrRes1;
+ (id)swift_IntRes2;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)IntRes2;
+ (id)swift_IntRes1;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)IntRes1;
+ (id)swift_m_data;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)m_data;
+ (id)swift_m_key;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)m_key;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *m_data; // @synthesize m_data;
@property(retain, nonatomic) NSString *m_key; // @synthesize m_key;

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

