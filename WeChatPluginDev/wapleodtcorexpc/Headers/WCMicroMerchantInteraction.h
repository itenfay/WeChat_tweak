//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMicroMerchantInteraction : NSObject
{
    _Bool _isFoldInteraction;
    NSString *_tid;
    NSString *_username;
    unsigned long long _interactionTime;
    unsigned long long _interactionType;
    unsigned long long _scene;
}

+ (void)__wcdb_index_124:(void *)arg1;
+ (void)__wcdb_index_123:(void *)arg1;
+ (void)__wcdb_index_122:(void *)arg1;
+ (void)__wcdb_index_121:(void *)arg1;
+ (void)__wcdb_index_120:(void *)arg1;
+ (void)__wcdb_column_constraint_119:(void *)arg1;
+ (void)__wcdb_column_constraint_118:(void *)arg1;
+ (void)__wcdb_column_constraint_117:(void *)arg1;
+ (void)__wcdb_column_constraint_116:(void *)arg1;
+ (void)__wcdb_column_constraint_115:(void *)arg1;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_114:(void *)arg1;
+ (const void *)scene;
+ (id)swift_interactionType;
+ (const void *)__wcdb_synthesize_113:(void *)arg1;
+ (const void *)interactionType;
+ (id)swift_isFoldInteraction;
+ (const void *)__wcdb_synthesize_112:(void *)arg1;
+ (const void *)isFoldInteraction;
+ (id)swift_interactionTime;
+ (const void *)__wcdb_synthesize_111:(void *)arg1;
+ (const void *)interactionTime;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_110:(void *)arg1;
+ (const void *)username;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_109:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long interactionType; // @synthesize interactionType=_interactionType;
@property(nonatomic) _Bool isFoldInteraction; // @synthesize isFoldInteraction=_isFoldInteraction;
@property(nonatomic) unsigned long long interactionTime; // @synthesize interactionTime=_interactionTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;

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

