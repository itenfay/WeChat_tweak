//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, WCFinderGlobalPushInfo;

@protocol WCFinderAppPushExt <NSObject>

@optional
- (void)onTabBarItemSelectedIndexFromNewMainFrameToOthers;
- (void)onWCPayMainViewControllerV2ViewDidBePoped;
- (void)onBaseMsgContentViewControllerViewDidDisappear;
- (void)onVoIPOrMultiTalkViewDisappear;
- (void)onHandlerFinderLocalPush:(CMessageWrap *)arg1 globalPushInfo:(WCFinderGlobalPushInfo *)arg2;
- (void)onFinderAPNsPushBeClicked;
@end

