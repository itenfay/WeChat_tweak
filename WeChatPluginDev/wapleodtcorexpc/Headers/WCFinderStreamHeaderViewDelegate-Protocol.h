//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderStreamHeaderView;

@protocol WCFinderStreamHeaderViewDelegate <NSObject>

@optional
- (_Bool)streamRefreshHeaderDataSourceIsLoading:(WCFinderStreamHeaderView *)arg1;
- (void)streamRefreshHeaderDidTriggerRefresh:(WCFinderStreamHeaderView *)arg1;
@end

