//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBMigrationTagObject : NSObject
{
    NSString *m_sessionName;
    NSString *m_fileName;
    long long m_startTime;
    long long m_endTime;
}

+ (id)swift_m_endTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)m_endTime;
+ (id)swift_m_startTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)m_startTime;
+ (id)swift_m_fileName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_fileName;
+ (id)swift_m_sessionName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_sessionName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long m_endTime; // @synthesize m_endTime;
@property(nonatomic) long long m_startTime; // @synthesize m_startTime;
@property(retain, nonatomic) NSString *m_fileName; // @synthesize m_fileName;
@property(retain, nonatomic) NSString *m_sessionName; // @synthesize m_sessionName;
@property(readonly, copy) NSString *description;

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

