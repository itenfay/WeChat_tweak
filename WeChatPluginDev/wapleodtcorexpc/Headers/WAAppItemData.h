//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAppItemData
{
    _Bool beStared;
    _Bool _isFromOuter;
    _Bool _isCommonUseItem;
    unsigned int appType;
    unsigned int updateTime;
    unsigned int _commuseInfoReferId;
    unsigned int _commuseRecallQueueType;
    NSString *userName;
    double sortFactor;
    NSString *_appid;
    NSString *_appDesc;
    NSString *_commuseExtraData;
    NSString *_pagePath;
}

+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (id)swift_pagePath;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)pagePath;
+ (id)swift_commuseExtraData;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)commuseExtraData;
+ (id)swift_commuseRecallQueueType;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)commuseRecallQueueType;
+ (id)swift_commuseInfoReferId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)commuseInfoReferId;
+ (id)swift_appDesc;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)appDesc;
+ (id)swift_isFromOuter;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)isFromOuter;
+ (id)swift_sortFactor;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)sortFactor;
+ (id)swift_beStared;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)beStared;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_appType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)appType;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCommonUseItem; // @synthesize isCommonUseItem=_isCommonUseItem;
@property(retain, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(retain, nonatomic) NSString *commuseExtraData; // @synthesize commuseExtraData=_commuseExtraData;
@property(nonatomic) unsigned int commuseRecallQueueType; // @synthesize commuseRecallQueueType=_commuseRecallQueueType;
@property(nonatomic) unsigned int commuseInfoReferId; // @synthesize commuseInfoReferId=_commuseInfoReferId;
@property(retain, nonatomic) NSString *appDesc; // @synthesize appDesc=_appDesc;
@property(nonatomic) _Bool isFromOuter; // @synthesize isFromOuter=_isFromOuter;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) double sortFactor; // @synthesize sortFactor;
@property(nonatomic) _Bool beStared; // @synthesize beStared;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int appType; // @synthesize appType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)uniqueKey;
- (id)appItemKey;

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

