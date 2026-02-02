//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCFinderDiscoveryLiveTabPageViewModelDelegate;

@interface WCFinderDiscoveryLiveTabPageViewModel
{
    id <WCFinderDiscoveryLiveTabPageViewModelDelegate> _delegate;
    NSString *_byPassInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) __weak id <WCFinderDiscoveryLiveTabPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestLiveTabListWithScene:(long long)arg1 title:(id)arg2 feedExportId:(id)arg3 feedNonceId:(id)arg4;
- (void)requestLiveTabList;
- (id)initWithPassInfo:(id)arg1;

@end

