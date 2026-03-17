//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController, WCFinderTransitionUserInfo;

@protocol WCFinderFeedListTransitionHelperDelegate <NSObject>

@optional
- (void)onTransitionTriggerMininize:(UIViewController *)arg1 userInfo:(WCFinderTransitionUserInfo *)arg2 giveUpClose:(_Bool *)arg3;
@end

