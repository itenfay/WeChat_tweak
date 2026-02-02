//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WABusinessProxy : NSObject
{
    NSMutableArray *_uploadingInfos;
}

+ (void)showUserGuideDialog:(id)arg1;
+ (void)updateAppServiceConfigRes;
+ (void)onMPShortLinkGlobalHightLightSwitchDidChanged;
+ (id)getLoginUsrInfo;
+ (_Bool)isLogin;
+ (id)genAppAuthSettingWithWeAppContact:(id)arg1;
+ (id)genProfileWithParameter:(id)arg1;
+ (id)getMMHeadImageViewWithUsername:(id)arg1 imageSize:(struct CGSize)arg2;
+ (void)didUserSelectCopyMPShortLinkSuccess:(id)arg1 inWebViewController:(id)arg2 processCompletion:(CDUnknownBlockType)arg3;
+ (void)clearExposeSnapShot:(id)arg1;
+ (id)saveExposeSnapShot:(id)arg1;
+ (id)genWebViewController:(id)arg1;
+ (void)onWeAppDidPresentWithPresentingViewController:(id)arg1;
+ (void)onWeAppNavigateToMiniProgramCancelledFromAppId:(id)arg1 toAppId:(id)arg2;
+ (void)onWeAppNavigateToMiniProgramFailFromAppId:(id)arg1 toAppId:(id)arg2;
+ (void)onWeAppNavigateToMiniProgramSuccessFromAppId:(id)arg1 toAppId:(id)arg2;
+ (void)onWeAppNavigateToMiniProgramFromAppId:(id)arg1 toAppId:(id)arg2 pagePath:(id)arg3 fromScene:(unsigned long long)arg4 fromSceneNote:(id)arg5 adInfo:(id)arg6;
+ (void)showUserGuide;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadingInfos; // @synthesize uploadingInfos=_uploadingInfos;
- (void)OnCdnUpload:(id)arg1;
- (void)uploadMPShortLink:(id)arg1 snapShotForWebVC:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

