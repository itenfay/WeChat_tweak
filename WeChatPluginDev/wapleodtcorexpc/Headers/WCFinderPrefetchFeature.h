//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPrefetchFeature : NSObject
{
    unsigned long long _scene;
    unsigned long long _action;
    NSString *_redDotIdentifier;
    unsigned long long _timestamp;
    unsigned long long _shortTimestamp;
}

+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (id)swift_shortTimestamp;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)shortTimestamp;
+ (id)swift_timestamp;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)timestamp;
+ (id)swift_redDotIdentifier;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)redDotIdentifier;
+ (id)swift_action;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)action;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)scene;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_redDotIdentifier;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_shortTimestamp;
+ (void)PBArrayAdd_timestamp;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long shortTimestamp; // @synthesize shortTimestamp=_shortTimestamp;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *redDotIdentifier; // @synthesize redDotIdentifier=_redDotIdentifier;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1 scene:(unsigned long long)arg2 action:(unsigned long long)arg3 redDotIdentifier:(id)arg4;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

