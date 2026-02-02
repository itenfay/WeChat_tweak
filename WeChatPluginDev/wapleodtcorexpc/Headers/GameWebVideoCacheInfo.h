//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameWebVideoCacheInfo : NSObject
{
    _Bool _isRedDotPreload;
    _Bool _isCdnPreload;
    _Bool _isCdnPreloadSuccess;
    unsigned int _updateTime;
    unsigned int _failedCount;
    NSString *_cacheIdentify;
    NSString *_url;
    NSString *_contentType;
    unsigned long long _contentTotalLength;
    NSString *_acceptRanges;
    NSString *_resourceUrl;
}

+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (id)swift_isCdnPreloadSuccess;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)isCdnPreloadSuccess;
+ (id)swift_isCdnPreload;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)isCdnPreload;
+ (id)swift_resourceUrl;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)resourceUrl;
+ (id)swift_failedCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)failedCount;
+ (id)swift_isRedDotPreload;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)isRedDotPreload;
+ (id)swift_acceptRanges;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)acceptRanges;
+ (id)swift_contentTotalLength;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)contentTotalLength;
+ (id)swift_contentType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)contentType;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_url;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)url;
+ (id)swift_cacheIdentify;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)cacheIdentify;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCdnPreloadSuccess; // @synthesize isCdnPreloadSuccess=_isCdnPreloadSuccess;
@property(nonatomic) _Bool isCdnPreload; // @synthesize isCdnPreload=_isCdnPreload;
@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(nonatomic) unsigned int failedCount; // @synthesize failedCount=_failedCount;
@property(nonatomic) _Bool isRedDotPreload; // @synthesize isRedDotPreload=_isRedDotPreload;
@property(retain, nonatomic) NSString *acceptRanges; // @synthesize acceptRanges=_acceptRanges;
@property(nonatomic) unsigned long long contentTotalLength; // @synthesize contentTotalLength=_contentTotalLength;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *cacheIdentify; // @synthesize cacheIdentify=_cacheIdentify;

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

