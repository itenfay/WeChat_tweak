//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol WCAccountLoginByQRCodeViewControllerDelegate <NSObject>
- (void)onPlayLiveWithoutLogin;
- (void)onCancelLogin;
- (void)onCancel;
- (void)onRefreshBtnClicked;

@optional
- (_Bool)shouldShowBackButton;
- (void)onLoginByOtherWay:(UIView *)arg1;
@end

