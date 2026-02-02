//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameCenterJumpLogic : NSObject
{
}

+ (void)jumpWithGameJumpInfo:(id)arg1;
+ (_Bool)openNewMessageViewController;
+ (id)getGameChatVcWithConfig:(id)arg1;
+ (id)getGameChatVcWithReportParam:(id)arg1 sourceScene:(unsigned int)arg2;
+ (id)currentNavi;
+ (_Bool)openCreateGroup:(id)arg1;
+ (_Bool)quitChatRoomFromWebVc:(id)arg1 chatRoomName:(id)arg2;
+ (void)jumpToMiniProgram:(id)arg1 path:(id)arg2 viewController:(id)arg3;
+ (id)getTransparentWebViewController:(id)arg1 isPreload:(_Bool)arg2 preinjectData:(id)arg3;
+ (id)getChildWebVcWithUrl:(id)arg1 isPreload:(_Bool)arg2 preinjectData:(id)arg3;
+ (id)urlWithPath:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)nameCardCreateUrl;
+ (id)personalProfileUrlWithUserName:(id)arg1;
+ (void)openAllMemberView:(id)arg1;
+ (void)openGroupInfoView:(id)arg1;
+ (void)openChatRoomAnimationWithChatRoomConfig:(id)arg1;
+ (id)getImageViewCopyFromCoverImgView:(id)arg1;
+ (void)openChatRoomWithChatRoomConfig:(id)arg1;
+ (_Bool)enableOldAnimation;
+ (void)openChatRoomFromImageView:(id)arg1 config:(id)arg2;
+ (void)openChatRoomViewController:(id)arg1;
+ (void)openMoreRecommendGroupViewController:(id)arg1;
+ (void)openCreateGroupViewController;
+ (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
+ (void)pushViewController:(id)arg1;
+ (id)openWebviewControllerWithUrl:(id)arg1 popCurrentVc:(_Bool)arg2 disableLiteMatch:(_Bool)arg3 extraInfo:(id)arg4;
+ (id)openWebviewControllerWithUrl:(id)arg1;
+ (id)handleHalfScreenWebVcJump:(id)arg1;
+ (void)handleGcJumpInfo:(id)arg1;
+ (_Bool)isJumpInfoHalfScreen:(id)arg1;
+ (id)jumpWithJumpInfo:(id)arg1 reuseIdentifier:(id)arg2 additionalInfo:(id)arg3 fromVc:(id)arg4 onCloseBlock:(CDUnknownBlockType)arg5;
+ (id)gcJumpWithJumpInfo:(id)arg1 reuseIdentifier:(id)arg2 additionalInfo:(id)arg3 fromVc:(id)arg4 onCloseBlock:(CDUnknownBlockType)arg5;
+ (void)preloadWebViewWithJumpInfo:(id)arg1 reuseIdentifier:(id)arg2 reCreateAfterUsed:(_Bool)arg3;
+ (void)preloadWebViewWithJumpInfo:(id)arg1 reuseIdentifier:(id)arg2;
+ (void)handleNativeJumpInfo:(id)arg1;
+ (void)jumpWithJumpInfo:(id)arg1;
+ (unsigned long long)opWithJumpInfo:(id)arg1;

@end

