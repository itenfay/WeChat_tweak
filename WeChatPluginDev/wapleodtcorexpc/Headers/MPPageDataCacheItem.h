//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPPageDataCacheItemTemplateVersionInfoList, NSArray, NSString;

@interface MPPageDataCacheItem : NSObject
{
    _Bool _nativePageNeedFullScreenForceUrl;
    _Bool _hasItemShowType;
    unsigned int _expireTime;
    unsigned int _lastModifyTime;
    unsigned int _updateTime;
    unsigned int _itemShowType;
    NSString *_forceUrl;
    MPPageDataCacheItemTemplateVersionInfoList *_templateVersionInfoList;
    NSString *_pageKeyUrl;
    NSArray *_itemPictureUrls;
    NSString *_url;
}

+ (void)__wcdb_index_12:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (id)swift_itemPictureUrls;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)itemPictureUrls;
+ (id)swift_pageKeyUrl;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)pageKeyUrl;
+ (id)swift_templateVersionInfoList;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)templateVersionInfoList;
+ (id)swift_nativePageNeedFullScreenForceUrl;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)nativePageNeedFullScreenForceUrl;
+ (id)swift_itemShowType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)itemShowType;
+ (id)swift_hasItemShowType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)hasItemShowType;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_lastModifyTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)lastModifyTime;
+ (id)swift_expireTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)expireTime;
+ (id)swift_forceUrl;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)forceUrl;
+ (id)swift_url;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)url;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSArray *itemPictureUrls; // @synthesize itemPictureUrls=_itemPictureUrls;
@property(copy, nonatomic) NSString *pageKeyUrl; // @synthesize pageKeyUrl=_pageKeyUrl;
@property(retain, nonatomic) MPPageDataCacheItemTemplateVersionInfoList *templateVersionInfoList; // @synthesize templateVersionInfoList=_templateVersionInfoList;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) _Bool nativePageNeedFullScreenForceUrl; // @synthesize nativePageNeedFullScreenForceUrl=_nativePageNeedFullScreenForceUrl;
@property(copy, nonatomic) NSString *forceUrl; // @synthesize forceUrl=_forceUrl;
- (id)copy;
- (_Bool)isDataValidWithTemplateType:(unsigned int)arg1 templateVersion:(unsigned int)arg2 templateVersionGroup:(id)arg3;
@property(copy, nonatomic) NSString *identity; // @dynamic identity;
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

