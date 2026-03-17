//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderStreamProfileFeedViewModel;

@protocol WCFinderStreamProfileFeedViewModelDelegate <NSObject>
- (void)onCollectionListDataChangedForViewModel:(WCFinderStreamProfileFeedViewModel *)arg1;
- (void)onTopicListChangedForViewModel:(WCFinderStreamProfileFeedViewModel *)arg1;
@end

