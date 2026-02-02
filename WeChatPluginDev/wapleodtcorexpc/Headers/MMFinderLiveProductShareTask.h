//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderDataItem, WCFinderLiveProductShareItem;

@interface MMFinderLiveProductShareTask
{
    _Bool _tryCurrentLiveIfSameAnchor;
    _Bool _ignoreClickShareCommodityReport;
    unsigned int _scene;
    WCFinderDataItem *_finderDataItem;
    unsigned long long _productID;
    unsigned long long _realProductId;
    NSString *_ecSource;
    NSString *_promoterKey;
    WCFinderLiveProductShareItem *_productShareItem;
    CDUnknownBlockType _onGetData;
}

+ (id)task;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onGetData; // @synthesize onGetData=_onGetData;
@property(nonatomic) _Bool ignoreClickShareCommodityReport; // @synthesize ignoreClickShareCommodityReport=_ignoreClickShareCommodityReport;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderLiveProductShareItem *productShareItem; // @synthesize productShareItem=_productShareItem;
@property(copy, nonatomic) NSString *promoterKey; // @synthesize promoterKey=_promoterKey;
@property(nonatomic) _Bool tryCurrentLiveIfSameAnchor; // @synthesize tryCurrentLiveIfSameAnchor=_tryCurrentLiveIfSameAnchor;
@property(copy, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(nonatomic) unsigned long long realProductId; // @synthesize realProductId=_realProductId;
@property(nonatomic) unsigned long long productID; // @synthesize productID=_productID;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
- (unsigned long long)getCurrentProductId;
- (id)init;

@end

