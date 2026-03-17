//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCFinderShowcasePagingView;

@protocol WCFinderShowcasePagingViewDatasource <NSObject>
- (void)showcaseView:(WCFinderShowcasePagingView *)arg1 updateCell:(UIView *)arg2 atIdx:(long long)arg3;
- (long long)numberOfShowcaseView:(WCFinderShowcasePagingView *)arg1;
@end

