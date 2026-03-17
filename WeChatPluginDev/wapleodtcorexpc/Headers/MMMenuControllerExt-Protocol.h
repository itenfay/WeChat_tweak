//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMenuItem;

@protocol MMMenuControllerExt <NSObject>

@optional
- (void)onMenuItemSelected:(MMMenuItem *)arg1 index:(long long)arg2;
- (void)onMenuControllerDidShowFailedWithExtraInfo:(id)arg1;
- (void)onMenuControllerDidShowFailed;
- (void)onMenuControllerMenuFrameDidChange;
- (void)onMenuControllerDidShowWithExtraInfo:(id)arg1;
- (void)onMenuControllerDidShow;
- (void)onMenuControllerWillShowWithExtraInfo:(id)arg1;
- (void)onMenuControllerWillShow;
- (void)onMenuControllerDidHideWithExtraInfo:(id)arg1;
- (void)onMenuControllerDidHide;
- (void)onMenuControllerWillHideWithExtraInfo:(id)arg1;
- (void)onMenuControllerWillHide;
- (void)onMenuControllerTouchAtNoneMenuArea;
@end

