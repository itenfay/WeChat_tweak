//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol FinderPOIPluginDelegate <NSObject>
- (int)feedViewControllerScene;
- (UIViewController *)getPluginTopViewController;
- (void)onAddressEntranceTap;
- (void)onForwardButtonTap;
- (void)onChangeFavoriteSelected:(_Bool)arg1;
- (void)onTakeCarButtonTap;
- (void)onNavigateButtonTap;
- (void)onChangeScrollState:(_Bool)arg1;
@end

