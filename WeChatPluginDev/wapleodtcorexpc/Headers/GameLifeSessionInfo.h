//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameLifeSessionInfo : NSObject
{
    unsigned int _sessionType;
    NSString *_sessionId;
    NSString *_talker;
    NSString *_selfUsername;
    unsigned long long _disabledStaticPanelIdFlag;
    unsigned long long _disabledAppPanelIdFlag;
}

+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (id)swift_sessionType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)sessionType;
+ (id)swift_disabledAppPanelIdFlag;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)disabledAppPanelIdFlag;
+ (id)swift_disabledStaticPanelIdFlag;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)disabledStaticPanelIdFlag;
+ (id)swift_selfUsername;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)selfUsername;
+ (id)swift_talker;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)talker;
+ (id)swift_sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sessionId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) unsigned long long disabledAppPanelIdFlag; // @synthesize disabledAppPanelIdFlag=_disabledAppPanelIdFlag;
@property(nonatomic) unsigned long long disabledStaticPanelIdFlag; // @synthesize disabledStaticPanelIdFlag=_disabledStaticPanelIdFlag;
@property(retain, nonatomic) NSString *selfUsername; // @synthesize selfUsername=_selfUsername;
@property(retain, nonatomic) NSString *talker; // @synthesize talker=_talker;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

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

