//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage, WCFinderLiveGenericFeedVM, WCFinderLiveHomePageFollowSectionView;

@protocol WCFinderLiveHomePageFollowSectionViewDelegate <NSObject>

@optional
- (void)onFollowSectionViewFetchMoreLiveList:(WCFinderLiveHomePageFollowSectionView *)arg1;
- (void)onFollowSectionView:(WCFinderLiveHomePageFollowSectionView *)arg1 selectElementVM:(WCFinderLiveGenericFeedVM *)arg2 thumbImage:(UIImage *)arg3;
@end

