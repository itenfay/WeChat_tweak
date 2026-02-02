//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, FavoritesItem, ForwardMessageLogicController, NSObject, NSString, PHObjectPlaceholder, UIButton, UIView, WCMomentsTemplateShareInfo, WCPlayerView;

@protocol WCPlayerConfigViewControllerDelegate <NSObject>
- (void)onTapAttachButton:(UIButton *)arg1;
- (void)onCloseFullScreenPlayComplete:(NSObject *)arg1;
- (void)onCloseFullScreenPlay:(NSObject *)arg1;
- (void)onForwardSuccess:(ForwardMessageLogicController *)arg1;
- (void)onForwardCancle:(ForwardMessageLogicController *)arg1;
- (NSString *)generateForwardUserInfoWithMediaWrap:(NSObject *)arg1;
- (FavoritesItem *)generateFavWithMediaWrap:(NSObject *)arg1;
- (CMessageWrap *)generateMsgWithMediaWrap:(NSObject *)arg1;
- (void)onLongPress:(UIView *)arg1;

@optional
- (WCMomentsTemplateShareInfo *)generateShareInfo;
- (void)onSaveVideoSuccess:(NSObject *)arg1 placeholder:(PHObjectPlaceholder *)arg2;
- (void)onWillResumePlay:(WCPlayerView *)arg1;
- (void)onExistPlayAnimationFinish;
@end

