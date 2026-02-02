//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFlowTopTipsView;

@protocol WCFinderFlowTopTipsViewDelegate <NSObject>

@optional
- (_Bool)finderFlowTopTipsViewDataSourceIsLoading:(WCFinderFlowTopTipsView *)arg1;
- (void)finderFlowTopTipsViewDidTriggerRefresh:(WCFinderFlowTopTipsView *)arg1;
@end

