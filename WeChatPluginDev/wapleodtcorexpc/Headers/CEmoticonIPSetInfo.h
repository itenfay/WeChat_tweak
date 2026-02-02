//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CEmoticonIPSetInfo : NSObject
{
    NSString *setKey;
    NSString *title;
    NSString *desc;
    NSString *iconUrl;
    NSString *panelUrl;
    NSMutableArray *_pageWarpList;
}

+ (void)additionalObjectRelationalMapping:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_panelUrl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)panelUrl;
+ (id)swift_iconUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)iconUrl;
+ (id)swift_desc;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)desc;
+ (id)swift_title;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)title;
+ (id)swift_setKey;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)setKey;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pageWarpList; // @synthesize pageWarpList=_pageWarpList;
@property(retain, nonatomic) NSString *panelUrl; // @synthesize panelUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *setKey; // @synthesize setKey;
- (id)init;
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

