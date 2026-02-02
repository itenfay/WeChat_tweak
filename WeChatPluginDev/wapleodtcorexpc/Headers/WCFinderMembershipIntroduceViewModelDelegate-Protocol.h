//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController, WCFinderMembershipIntroduceViewModel;

@protocol WCFinderMembershipIntroduceViewModelDelegate <NSObject>
- (UIViewController *)getCurrentViewController;
- (void)onMembershipIntroduceViewModelDetailFetched:(WCFinderMembershipIntroduceViewModel *)arg1 remote:(_Bool)arg2;
- (void)onMembershipIntroduceViewModelRequestDetailFailed:(WCFinderMembershipIntroduceViewModel *)arg1;
@end

