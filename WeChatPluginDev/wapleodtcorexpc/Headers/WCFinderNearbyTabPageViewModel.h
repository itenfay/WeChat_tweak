//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveLbsInfo, NSArray;
@protocol WCFinderNearbyTabPageViewModelDelegate;

@interface WCFinderNearbyTabPageViewModel
{
    FinderLiveLbsInfo *_nearbyVideoTabInfo;
    id <WCFinderNearbyTabPageViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderNearbyTabPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FinderLiveLbsInfo *nearbyVideoTabInfo; // @synthesize nearbyVideoTabInfo=_nearbyVideoTabInfo;
- (id)queryCityTabInfoFromList;
- (void)requestLiveTabList:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSArray *liveTabList;

@end

