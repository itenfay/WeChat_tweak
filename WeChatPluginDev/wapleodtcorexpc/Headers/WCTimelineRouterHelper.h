//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCTimelineRouterHelper : NSObject
{
}

+ (void)openMiaoJianApp:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)navigateToCommentDetailViewController:(id)arg1 tipType:(long long)arg2 currentViewController:(id)arg3 pageContext:(id)arg4;
+ (void)navigateToCommentDetailViewController:(id)arg1 failedComment:(id)arg2 currentViewController:(id)arg3 pageContext:(id)arg4;
+ (_Bool)navigateToTextDetailViewController:(id)arg1 fromDataItem:(id)arg2 isAdComment:(_Bool)arg3 currentViewController:(id)arg4;
+ (_Bool)navigateToTextDetailViewController:(id)arg1 currentViewController:(id)arg2;
+ (_Bool)presentSetPermissionViewController:(id)arg1 tid:(id)arg2 currentViewController:(id)arg3;
+ (_Bool)presentSetPermissionViewController:(id)arg1 scene:(long long)arg2 currentViewController:(id)arg3;
+ (_Bool)navigateToContactInfoViewController:(id)arg1 scene:(unsigned int)arg2 userData:(id)arg3 currentViewController:(id)arg4;
+ (_Bool)navigateToContactInfoViewController:(id)arg1 scene:(unsigned int)arg2 opInfo:(id)arg3 currentViewController:(id)arg4;
+ (void)popAndPresentReEditViewControllerWithDraftController:(id)arg1 forwardItem:(id)arg2 postReportSession:(id)arg3 trashReportData:(id)arg4 currentNavigationViewController:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)popAndPresentReEditViewControllerWithDataItem:(id)arg1 postReportSession:(id)arg2 currentNavigationViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)searchViewControllerForPresentingReEditViewControllerFromNavigationController:(id)arg1;
+ (_Bool)presentReEditViewControllerWithDraftController:(id)arg1 forwardItem:(id)arg2 postReportSession:(id)arg3 trashReportData:(id)arg4 currentViewController:(id)arg5 withExtBean:(id)arg6;
+ (_Bool)presentReEditViewControllerWithDataItem:(id)arg1 postReportSession:(id)arg2 currentViewController:(id)arg3;
+ (_Bool)presentForwardViewController:(id)arg1 postReportSession:(id)arg2 trashReportData:(id)arg3 currentViewController:(id)arg4;
+ (_Bool)presentSpringCommitViewControllerWithPostReportSession:(id)arg1 springPostScene:(long long)arg2 currentViewController:(id)arg3;
+ (_Bool)presentCommitViewController:(_Bool)arg1 sightDraft:(id)arg2 postReportSession:(id)arg3 trashReportData:(id)arg4 currentViewController:(id)arg5 withExtBean:(id)arg6;
+ (_Bool)presentCommitViewController:(_Bool)arg1 arrImage:(id)arg2 postReportSession:(id)arg3 trashReportData:(id)arg4 currentViewController:(id)arg5 withExtBean:(id)arg6;
+ (_Bool)presentTextCommitViewController:(id)arg1 postReportSession:(id)arg2 trashReportData:(id)arg3 withExtBean:(id)arg4;
+ (_Bool)navigateToMusicPlayer:(id)arg1 currentViewController:(id)arg2;
+ (_Bool)navigateToOriginPOI:(id)arg1 currentViewController:(id)arg2;
+ (_Bool)navigateToPOI:(id)arg1 currentViewController:(id)arg2;
+ (_Bool)navigateToMicroMerchantSubTimeline:(id)arg1 ofFoldPlaceHolder:(id)arg2 currentViewController:(id)arg3;
+ (_Bool)navigateToPostFinderViewController:(id)arg1 currentViewController:(id)arg2 finderPostDelegate:(id)arg3;
+ (_Bool)navigateToInnerFeatureProfile:(id)arg1 currentViewController:(id)arg2 sourceFeed:(id)arg3 isSnSAd:(_Bool)arg4 adParamInofStr:(id)arg5;
+ (_Bool)navigateToInnerFeatureProfile:(id)arg1 currentViewController:(id)arg2 sourceFeed:(id)arg3;
+ (void)showImagePickerWithPickerScene:(int)arg1 sourceType:(long long)arg2 showsCameraButtonInPicker:(_Bool)arg3 showsCameraButtonAtBottom:(_Bool)arg4 customOptionsBlock:(CDUnknownBlockType)arg5 delegate:(id)arg6 fromViewController:(id)arg7;

@end

