//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderTopPullStatusView;

@protocol WCFinderTopPullStatusViewDelegate <NSObject>
- (void)onTopPullViewTriggePull:(WCFinderTopPullStatusView *)arg1;
- (_Bool)shouldTopPullViewTrigger:(WCFinderTopPullStatusView *)arg1;

@optional
- (void)onTopPullView:(WCFinderTopPullStatusView *)arg1 stateChangeFrom:(unsigned long long)arg2;
@end

