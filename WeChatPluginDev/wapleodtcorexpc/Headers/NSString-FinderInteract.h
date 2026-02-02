//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (FinderInteract)
+ (id)genSeeLaterReasonTimeStringByUInt:(unsigned long long)arg1;
+ (id)genVideoDurationAccessibilityFrom:(unsigned long long)arg1;
+ (id)genFormatVideoDuraionTimeStringFrom:(unsigned long long)arg1;
+ (id)genFinderMembershipJoinedTimeByJoinedSeconds:(unsigned int)arg1;
+ (id)genFinderMembershipExpireTimeByTimestamp:(unsigned int)arg1;
+ (id)genFinderMemberTabTotalCountByUInt:(unsigned long long)arg1;
+ (id)genFinderMemberRedDotCountByUInt:(unsigned long long)arg1;
+ (id)genFinderPrivateUnreadMsgByUInt:(unsigned long long)arg1;
+ (id)genFinderEventExpiredTimeStringByUInt:(unsigned int)arg1;
+ (id)calDisplayNameWithCommentDidsplayName:(id)arg1 maxCommentCount:(unsigned long long)arg2;
+ (id)ellipseContent;
+ (id)finderLocationDisplayStrWithCountryCode:(id)arg1 provinceCode:(id)arg2 cityCode:(id)arg3;
+ (id)finderLiveInteractCountAtProfile:(unsigned long long)arg1;
+ (id)finderLiveCardInteractCount:(unsigned long long)arg1;
+ (id)finderHeatOfTopicInteractCount:(unsigned long long)arg1;
+ (id)getCommentDetailFailErrorMSGWithErrorCode:(int)arg1 errorMSG:(id)arg2;
+ (id)commentFailTipsWithCommentErrorCode:(int)arg1;
+ (id)genFinderLiveQuickNoticeTimeStringByTimestamp:(unsigned int)arg1;
+ (id)genFinderLiveNoticeQRCodeTimeStringByTimestamp:(unsigned int)arg1 paid:(_Bool)arg2 memberLive:(_Bool)arg3;
+ (id)genFinderLiveNoticeTimeShortStringByUInt:(unsigned int)arg1;
+ (id)genFinderLiveNoticeTimeStringByUIntOnlyDayAndMonth:(unsigned int)arg1 isQuickNotice:(_Bool)arg2 needLivingSuffix:(_Bool)arg3;
+ (id)genFinderLiveFeedNoticeTimeStringWithoutDayOfWeekByUInt:(unsigned int)arg1 isMemberLive:(_Bool)arg2;
+ (_Bool)isSameYearWithTime:(unsigned int)arg1;
+ (id)genFinderLiveNoticeTimeStringWithoutDayOfWeekByUInt:(unsigned int)arg1 isMemberLive:(_Bool)arg2;
+ (id)genFinderLivingTimeStringByUInt:(unsigned int)arg1;
+ (id)genFinderLiveNoticeTimeStringByUInt:(unsigned int)arg1 isMemberLive:(_Bool)arg2;
+ (id)genFinderDetailTimeStringForCard:(unsigned long long)arg1;
+ (id)genLiveReplayDetailTimeStringFrom:(unsigned long long)arg1;
+ (id)genFinderVideoDisplayTimeFromTimeInterval:(double)arg1;
+ (id)genFinderSimpleDateTimeStringByTimestamp:(long long)arg1;
+ (id)genFinderDateTimeStringByTimestamp:(long long)arg1;
+ (id)genFinderWechatMentionTimeStringByUInt:(unsigned int)arg1;
+ (id)genFinderDetailTimeStringWithTime:(unsigned long long)arg1 config:(id)arg2;
+ (id)genFinderDetailTimeStringByUInt:(unsigned long long)arg1 dateStyle:(unsigned long long)arg2 flag:(unsigned long long)arg3;
+ (id)genFinderDetailTimeStringByUInt:(unsigned long long)arg1;
+ (id)finderOtherInteractCount:(unsigned long long)arg1;
+ (id)finderMillionCount:(unsigned long long)arg1;
+ (id)finderSelfProfileInteractCount:(unsigned long long)arg1;
+ (id)legalFormatWithOriginalValue:(unsigned long long)arg1 divider:(unsigned long long)arg2 decimalPlaces:(unsigned long long)arg3;
+ (id)legalFormatWithOriginalValue:(unsigned long long)arg1 divider:(unsigned long long)arg2;
- (id)getDisplayName;
- (id)stringByCutLineWrapWithMaxCount:(unsigned long long)arg1 haveCutted:(_Bool *)arg2;
- (unsigned long long)lineWrapCount;
- (id)stringByTruncatingToTheFirstLineAndAddEllipses:(_Bool)arg1;
- (id)displayContentWithCountLimited:(unsigned long long)arg1;
@end

