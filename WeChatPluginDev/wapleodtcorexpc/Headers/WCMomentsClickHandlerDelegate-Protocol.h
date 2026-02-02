//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCMomentsClickContext, WCMomentsClickHandler;

@protocol WCMomentsClickHandlerDelegate <NSObject>

@optional
- (void)momentsClickHandler:(WCMomentsClickHandler *)arg1 didClickUrlWithContext:(WCMomentsClickContext *)arg2;
- (void)momentsClickHandler:(WCMomentsClickHandler *)arg1 willClickUrlWithContext:(WCMomentsClickContext *)arg2;
- (void)momentsClickHandler:(WCMomentsClickHandler *)arg1 didClickTigerSourceWithContext:(WCMomentsClickContext *)arg2;
- (void)momentsClickHandler:(WCMomentsClickHandler *)arg1 willClickTigerSourceWithContext:(WCMomentsClickContext *)arg2;
- (void)momentsClickHandler:(WCMomentsClickHandler *)arg1 didClickBrandProfileWithContext:(WCMomentsClickContext *)arg2;
- (void)momentsClickHandler:(WCMomentsClickHandler *)arg1 willClickBrandProfileWithContext:(WCMomentsClickContext *)arg2;
- (void)momentsClickHandler:(WCMomentsClickHandler *)arg1 didClickUserProfileWithContext:(WCMomentsClickContext *)arg2;
- (void)momentsClickHandler:(WCMomentsClickHandler *)arg1 willClickUserProfileWithContext:(WCMomentsClickContext *)arg2;
@end

