//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLocationDBRecord : NSObject
{
    int _m_latitude;
    int _m_longitude;
    int _m_type;
    NSString *_m_address;
}

+ (id)swift_m_type;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_type;
+ (id)swift_m_address;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_address;
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
@property(nonatomic) int m_type; // @synthesize m_type=_m_type;
@property(retain, nonatomic) NSString *m_address; // @synthesize m_address=_m_address;
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

