//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderFeedFavListViewModelDelegate <NSObject>

@optional
- (void)feedFavListDataFavCountChange;
- (void)feedFavListDataError:(int)arg1;
- (void)feedFavListDataNoMore;
- (void)feedFavListDataChange;
@end

