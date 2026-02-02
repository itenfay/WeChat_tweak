//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderRedDotUltraHighPriorityInstance : NSObject
{
    NSString *_instanceId;
    double _updateTime;
    double _startTime;
    double _expireTime;
}

+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)expireTime;
+ (id)swift_startTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)startTime;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_instanceId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)instanceId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;

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

