//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderMinimizeTransitioning;

@protocol WCFinderMinimizeTransitioningDelegate <NSObject>

@optional
- (void)onTransitioningDidCancel:(WCFinderMinimizeTransitioning *)arg1;
- (void)onTransitioningDidFinish:(WCFinderMinimizeTransitioning *)arg1;
@end

