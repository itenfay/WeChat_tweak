//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCFinderNearbyMoreLiveViewModelDelegate;

@interface WCFinderNearbyMoreLiveViewModel
{
    _Bool _hasRefreshLiveTabList;
    int _fromScene;
    id <WCFinderNearbyMoreLiveViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) _Bool hasRefreshLiveTabList; // @synthesize hasRefreshLiveTabList=_hasRefreshLiveTabList;
@property(nonatomic) __weak id <WCFinderNearbyMoreLiveViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)checkNeedRequestLocationAuth:(unsigned long long)arg1;
- (_Bool)checkNeedRefreshReddot:(unsigned long long)arg1;
- (void)requestLiveTabList;
- (id)initWithLiveTabList:(id)arg1 fromScene:(int)arg2;

@end

