//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderStreamDivider, NSIndexPath, NSString, WCFinderFeedContentVM;
@protocol WCFinderLifeHomePageViewModelDelegate;

@protocol WCFinderLifeHomeFeedFlowViewDatas <NSObject>
- (unsigned long long)prefetchRemainCount;
- (unsigned long long)refreshTime;
- (NSString *)reportTagInfo;
- (unsigned long long)loadingState;
- (void)setDelegate:(id <WCFinderLifeHomePageViewModelDelegate>)arg1;
- (void)loadingFromTop;
- (void)requestNextPage;
- (void)requestFirstPage;
- (FinderStreamDivider *)dividerForSection:(long long)arg1;
- (_Bool)deleteContentVM:(WCFinderFeedContentVM *)arg1;
- (NSIndexPath *)indexPathWidthTid:(NSString *)arg1;
- (WCFinderFeedContentVM *)contentVMAtSection:(long long)arg1 index:(long long)arg2;
- (long long)feedItemCountForSection:(long long)arg1;
- (long long)feedSectionCount;
@end

