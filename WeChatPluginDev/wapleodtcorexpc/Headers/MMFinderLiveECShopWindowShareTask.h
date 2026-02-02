//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLiveShopWindowShareItem;

@interface MMFinderLiveECShopWindowShareTask
{
    _Bool _useShopWindowCardV2;
    NSString *_liteAppID;
    NSString *_liteAppPath;
    NSString *_liteAppQuery;
    NSString *_query;
    WCFinderLiveShopWindowShareItem *_shopWindowShareItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveShopWindowShareItem *shopWindowShareItem; // @synthesize shopWindowShareItem=_shopWindowShareItem;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *liteAppQuery; // @synthesize liteAppQuery=_liteAppQuery;
@property(copy, nonatomic) NSString *liteAppPath; // @synthesize liteAppPath=_liteAppPath;
@property(copy, nonatomic) NSString *liteAppID; // @synthesize liteAppID=_liteAppID;
@property(nonatomic) _Bool useShopWindowCardV2; // @synthesize useShopWindowCardV2=_useShopWindowCardV2;
- (id)init;

@end

