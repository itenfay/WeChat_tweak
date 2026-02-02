//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEnhanceTypeList, FinderSeeLaterInfo, NSString;

@interface WCFinderSceneRelatedInfo : NSObject
{
    NSString *_tid;
    unsigned long long _scene;
    FinderEnhanceTypeList *_enhanceConfiguration;
    FinderSeeLaterInfo *_seeLaterInfo;
}

+ (id)sceneRelatedInfoFromDataItem:(id)arg1 commentScene:(int)arg2;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (id)swift_seeLaterInfo;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)seeLaterInfo;
+ (id)swift_enhanceConfiguration;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)enhanceConfiguration;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)scene;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderSeeLaterInfo *seeLaterInfo; // @synthesize seeLaterInfo=_seeLaterInfo;
@property(retain, nonatomic) FinderEnhanceTypeList *enhanceConfiguration; // @synthesize enhanceConfiguration=_enhanceConfiguration;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(readonly, copy) NSString *description;
- (void)mergeIntoDataItem:(id)arg1;

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

