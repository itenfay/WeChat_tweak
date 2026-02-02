//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderHotSpotHistorySectionModel, WCFinderHotSpotTableViewSectionModel;
@protocol WCFinderSearchHotSpotViewModelDelegate;

@interface WCFinderSearchHotSpotViewModel : NSObject
{
    _Bool _hasClickShowMore;
    id <WCFinderSearchHotSpotViewModelDelegate> _delegate;
    WCFinderHotSpotHistorySectionModel *_historySectionModel;
    WCFinderHotSpotTableViewSectionModel *_hotSpotSectionModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasClickShowMore; // @synthesize hasClickShowMore=_hasClickShowMore;
@property(retain, nonatomic) WCFinderHotSpotTableViewSectionModel *hotSpotSectionModel; // @synthesize hotSpotSectionModel=_hotSpotSectionModel;
@property(retain, nonatomic) WCFinderHotSpotHistorySectionModel *historySectionModel; // @synthesize historySectionModel=_historySectionModel;
@property(nonatomic) __weak id <WCFinderSearchHotSpotViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickShowMore;
- (_Bool)hasMoreHistoryData;
- (unsigned long long)historySectionDataCount;
- (void)reloadHistoryData;
- (void)loadData;
- (id)init;

@end

