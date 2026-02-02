//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WAPluginStatePermissionBytes;

@interface WAPluginPermissionInfo : NSObject
{
    NSString *_appID;
    NSData *_control_bytes;
    WAPluginStatePermissionBytes *_state_bytes;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_state_bytes;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)state_bytes;
+ (id)swift_control_bytes;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)control_bytes;
+ (id)swift_appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WAPluginStatePermissionBytes *state_bytes; // @synthesize state_bytes=_state_bytes;
@property(retain, nonatomic) NSData *control_bytes; // @synthesize control_bytes=_control_bytes;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;

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

