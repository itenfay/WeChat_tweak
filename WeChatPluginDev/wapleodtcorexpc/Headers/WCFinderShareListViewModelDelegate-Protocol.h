//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexSet, NSString, WCFinderShareListViewModel;

@protocol WCFinderShareListViewModelDelegate <NSObject>

@optional
- (unsigned long long)finderShareListGetFirstUnExposeFeedIndex:(WCFinderShareListViewModel *)arg1;
- (void)finderShareListDataItemDeleteBySpamList:(NSArray *)arg1;
- (NSString *)finderShareListCurrentPlayFeedID;
- (void)finderShareListPlaceHolderDataChange;
- (void)findershareListSharedItemUpdated;
- (void)finderShareListDataFetchStateChanged:(WCFinderShareListViewModel *)arg1;
- (void)finderShareList:(WCFinderShareListViewModel *)arg1 contentVMUpdate:(NSIndexSet *)arg2;
- (void)finderShareListFirstPageFetchSuccess:(WCFinderShareListViewModel *)arg1;
- (void)finderShareList:(WCFinderShareListViewModel *)arg1 firstFeedDidLoadIsFromServer:(_Bool)arg2 withRelativeCGI:(_Bool)arg3;
@end

