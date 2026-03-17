//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCUIUtil : NSObject
{
}

+ (id)navigationBarRightTitleLabelWithTitle:(id)arg1;
+ (id)confirmTipsForDeleteDataItem:(id)arg1;
+ (id)distanceStringWithSource:(struct CLLocationCoordinate2D)arg1 target:(struct CLLocationCoordinate2D)arg2;
+ (id)typeDescriptionForContentType:(int)arg1;
+ (id)unMarkedStringWithTextView:(id)arg1;
+ (unsigned long long)textLengthWithText:(id)arg1;
+ (unsigned long long)textLengthWithTextView:(id)arg1;
+ (long long)currentOrientation;
+ (void)performFeedBackWithStyle:(long long)arg1;
+ (void)performHeavyFeedBack;
+ (void)performMediumFeedBack;
+ (void)performLightFeedBack;
+ (id)genLastStatusSelectDisplayStringWithSetting:(id)arg1;
+ (id)genLastSelectDisplayStringWithSetting:(id)arg1;
+ (id)genContactTagDisplayStringWithTagPrefix:(id)arg1;
+ (id)genContactTagWithCountDisplayString:(id)arg1 prefix:(id)arg2;
+ (id)genContactTagWithCountDisplayString:(id)arg1;
+ (id)genContactsDisplayStringWithFriendsPrefix:(id)arg1;
+ (id)genContactsDisplayString:(id)arg1 prefix:(id)arg2;
+ (id)genContactsDisplayString:(id)arg1;
+ (id)genPrivacyContentDictionary:(id)arg1;
+ (id)genAllContactsDisplayText:(id)arg1 color:(id)arg2;
+ (id)genMemberLabelDisplayText:(id)arg1 color:(id)arg2 backupString:(id)arg3 backupColor:(id)arg4;
+ (id)genContactTagDisplayString:(id)arg1 color:(id)arg2 backupString:(id)arg3 backupColor:(id)arg4;
+ (void)safeShowUniqueAlertWithMessage:(id)arg1;
+ (double)getTimelineImageCompressRate;
+ (_Bool)showCellSource:(id)arg1;
+ (_Bool)shouldHideSourceWithURL:(id)arg1;
+ (_Bool)isBrandArticleUrl:(id)arg1;
+ (_Bool)showCellSummary;
+ (void)updateTimelineSortLabelName:(id)arg1 arrSortLabelName:(id)arg2;
+ (id)getTimelineSortLabelName;
+ (id)getDefaultProductImage:(long long)arg1;
+ (id)getErrTipForCommentItem:(id)arg1;
+ (id)getErrTipForDataItem:(id)arg1;
+ (id)genErrTip:(id)arg1 btnUrl:(id)arg2 btnTips:(id)arg3;
+ (id)getLocalizedArrayGroupName:(id)arg1;
+ (id)getLocalizedGroupName:(id)arg1;
+ (id)getWCGroupDemoPrivacyContent:(id)arg1;
+ (id)intersectArrayFrom:(id)arg1 array2:(id)arg2;
+ (id)getWCGroupPrivacyContent;
+ (id)getContactsTagDisplayString:(id)arg1;
+ (id)getAllContactNamesIncludeChatroom:(id)arg1;
+ (id)getLastSelectTagCellContent:(id)arg1;
+ (id)importTagFromGroupDisplayString:(id)arg1;
+ (_Bool)isVaildLatestSettingContact:(id)arg1;
+ (void)Deletion_stopLoadingInViewController:(id)arg1 withResult:(long long)arg2 delay:(double)arg3;
+ (void)Deletion_stopLoadingInViewController:(id)arg1 withResult:(long long)arg2;
+ (void)Deletion_startLoadingInViewController:(id)arg1;
+ (_Bool)canShowLivePhotoIconOnScrollView:(id)arg1 isDraggingToClose:(_Bool)arg2 isAnimating:(_Bool)arg3 isPlayingLivePhoto:(_Bool)arg4;

@end

