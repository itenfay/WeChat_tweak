//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveShopWindowShareModel
{
    NSString *_finderUsername;
    NSString *_commodityInStockCount;
    NSString *_shareItemXML;
    unsigned long long _date;
}

+ (id)swift_date;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)date;
+ (id)swift_shareItemXML;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)shareItemXML;
+ (id)swift_commodityInStockCount;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)commodityInStockCount;
+ (id)swift_finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)finderUsername;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *shareItemXML; // @synthesize shareItemXML=_shareItemXML;
@property(copy, nonatomic) NSString *commodityInStockCount; // @synthesize commodityInStockCount=_commodityInStockCount;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;

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

