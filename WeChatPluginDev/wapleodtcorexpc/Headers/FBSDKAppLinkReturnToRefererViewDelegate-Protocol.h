//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FBSDKAppLink, FBSDKAppLinkReturnToRefererView;

@protocol FBSDKAppLinkReturnToRefererViewDelegate <NSObject>
- (void)returnToRefererViewDidTapInsideLink:(FBSDKAppLinkReturnToRefererView *)arg1 link:(FBSDKAppLink *)arg2;
- (void)returnToRefererViewDidTapInsideCloseButton:(FBSDKAppLinkReturnToRefererView *)arg1;
@end

