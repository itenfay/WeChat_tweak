//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBSessionTimeIntervalObject : NSObject
{
    NSString *m_sessionName;
    unsigned int m_msgBeginTime;
    unsigned int m_msgEndTime;
}

+ (id)swift_m_msgEndTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)m_msgEndTime;
+ (id)swift_m_msgBeginTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)m_msgBeginTime;
+ (id)swift_m_sessionName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)m_sessionName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_msgEndTime; // @synthesize m_msgEndTime;
@property(nonatomic) unsigned int m_msgBeginTime; // @synthesize m_msgBeginTime;
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

