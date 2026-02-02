//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderLiveHomePageFooterView;

@protocol WCFinderLiveHomePageFooterViewActionDelegate <NSObject>

@optional
- (_Bool)isEnableFooterTrigerLoading:(WCFinderLiveHomePageFooterView *)arg1;
- (void)didClickFooterRefresh:(WCFinderLiveHomePageFooterView *)arg1;
@end

