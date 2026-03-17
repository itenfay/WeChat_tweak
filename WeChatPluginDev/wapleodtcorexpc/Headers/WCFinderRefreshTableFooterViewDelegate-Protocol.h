//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderRefreshTableFooterView;

@protocol WCFinderRefreshTableFooterViewDelegate <NSObject>

@optional
- (_Bool)finderFooterStatrLoadingWithoutDragging;
- (void)finderFooterViewDidStopLoading:(WCFinderRefreshTableFooterView *)arg1;
- (void)finderFooterViewWillStartLoading:(WCFinderRefreshTableFooterView *)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(WCFinderRefreshTableFooterView *)arg1;
- (void)finderFooterDidTriggerRefresh:(WCFinderRefreshTableFooterView *)arg1;
- (void)didClickFooterRefreshRetry:(WCFinderRefreshTableFooterView *)arg1;
@end

