//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderChooseFeedTabController, WCFinderChooseFeedTabViewModel;

@protocol WCFinderChooseFeedTabControllerDelegate <NSObject>

@optional
- (void)finderChooseFeedTabController:(WCFinderChooseFeedTabController *)arg1 willDisplayItemAtIndex:(long long)arg2 withTabModel:(WCFinderChooseFeedTabViewModel *)arg3;
- (void)finderChooseFeedTabController:(WCFinderChooseFeedTabController *)arg1 didSelectItemAtIndex:(long long)arg2 withTabModel:(WCFinderChooseFeedTabViewModel *)arg3;
@end

