//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderLiveTabInfo, WCFinderMoreLiveTagListHeaderView;

@protocol WCFinderMoreLiveTagListHeaderViewDelegate <NSObject>

@optional
- (void)onTagListHeaderView:(WCFinderMoreLiveTagListHeaderView *)arg1 didSelectedTabInfo:(WCFinderLiveTabInfo *)arg2 isToggle:(_Bool)arg3;
@end

