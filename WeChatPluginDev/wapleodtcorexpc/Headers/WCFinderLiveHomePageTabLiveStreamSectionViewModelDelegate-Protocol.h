//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderLiveHomePageSectionViewModelDelegate-Protocol.h"

@class WCFinderLiveTabInfo;

@protocol WCFinderLiveHomePageTabLiveStreamSectionViewModelDelegate <WCFinderLiveHomePageSectionViewModelDelegate>

@optional
- (void)onLocationAuthorizationStatusUpdated;
- (WCFinderLiveTabInfo *)currentSelectTabInfo;
@end

