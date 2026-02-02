//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderShowcasePagingView;

@protocol WCFinderShowcasePagingViewDelegate <NSObject>

@optional
- (void)showcaseView:(WCFinderShowcasePagingView *)arg1 endDisplayCell:(long long)arg2;
- (void)showcaseView:(WCFinderShowcasePagingView *)arg1 willDisplayCell:(long long)arg2;
- (void)showcaseView:(WCFinderShowcasePagingView *)arg1 onClickCellAtIdx:(long long)arg2;
@end

