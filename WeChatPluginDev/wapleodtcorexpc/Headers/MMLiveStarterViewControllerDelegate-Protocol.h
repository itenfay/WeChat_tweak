//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveCreateParamsModel;

@protocol MMLiveStarterViewControllerDelegate <NSObject>

@optional
- (void)onMMLiveStarterViewControllerShowCreateWishPanel;
- (void)onMMLiveStarterViewControllerUserCancelLive;
- (void)onMMLiveStarterViewControllerSwitchCamera;
- (void)onMMLiveStarterViewControllerClose;
- (void)onMMLiveStarterViewControllerStartLive;
- (void)onMMLiveStarterViewControllerCreateLive:(MMLiveCreateParamsModel *)arg1;
@end

