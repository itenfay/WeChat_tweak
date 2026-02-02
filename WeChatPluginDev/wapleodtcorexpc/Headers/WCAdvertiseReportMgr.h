//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdvertiseReportMgr
{
}

+ (void)reportCustomerServiceConfirmClick:(id)arg1 snsId:(id)arg2 scene:(int)arg3 isHalfScreen:(_Bool)arg4;
+ (void)reportSocialLikePatClick:(id)arg1 snsId:(id)arg2 scene:(int)arg3 clickType:(int)arg4;
+ (void)logAdReportFailToKV:(id)arg1 isConnectFail:(_Bool)arg2 responseRet:(int)arg3;
+ (void)reportFireworkCheerInviteFriendClick:(id)arg1 scene:(int)arg2;
+ (void)reportFireworkCheer:(id)arg1 snsId:(id)arg2 scene:(int)arg3 totalLikeCount:(unsigned int)arg4;
+ (void)reportContinuousLike:(id)arg1 snsId:(id)arg2 scene:(int)arg3 totalLikeCount:(unsigned int)arg4 continuousLikeCount:(unsigned int)arg5 bannerPlayCount:(unsigned int)arg6;
+ (void)reportConventionalHalfScreenInfo:(id)arg1 adData:(id)arg2 snsId:(id)arg3 scene:(int)arg4 configTag:(id)arg5;
+ (void)reportHalfScreenConversionOpenWeGame:(id)arg1 snsId:(id)arg2 scene:(int)arg3 isConfirm:(_Bool)arg4;
+ (void)reportDynamicCanvasPackageUpdate:(unsigned long long)arg1 currentVersion:(id)arg2;
+ (void)reportFinderLiveStream:(id)arg1 adData:(id)arg2 snsId:(id)arg3 scene:(int)arg4;
+ (void)reportStatePublishUserConfirm:(id)arg1 snsId:(id)arg2 scene:(int)arg3;
+ (void)reportSnsPullAdSelect:(int)arg1 timelinePullDataItem:(id)arg2 adPullDataItem:(id)arg3 sessionKeyAd:(id)arg4 selectedSnsId:(id)arg5;
+ (void)reportCombineFollow:(id)arg1 snsId:(id)arg2 source:(int)arg3 brandUsername:(id)arg4 brandOpenType:(int)arg5 brandResult:(int)arg6 finderUsername:(id)arg7 finderResult:(int)arg8 canvasDynamicInfo:(id)arg9;
+ (void)reportCanvasShare:(id)arg1 isClick:(_Bool)arg2 shareScene:(int)arg3 canvasType:(int)arg4;
+ (void)reportInteractionBreakFrameUserAction:(id)arg1 snsId:(id)arg2 scene:(int)arg3 actionType:(int)arg4;
+ (void)reportInteractionBreakFrameTagClick:(id)arg1 snsId:(id)arg2 scene:(int)arg3;
+ (void)fillBaseBreakFrameReportInfo:(id)arg1 breakFrameInfo:(id)arg2 playTotalTime:(double)arg3;
+ (void)reportInteractionBreakFrame:(id)arg1 snsId:(id)arg2 scene:(int)arg3 playTotalTime:(double)arg4 videoSeekCount:(unsigned int)arg5;
+ (void)reportNormalBreakFrame:(id)arg1 snsId:(id)arg2 scene:(int)arg3 playTotalTime:(double)arg4 playCount:(unsigned int)arg5;
+ (void)reportConversionOnlineForDynamicCanvas:(int)arg1 pageInfo:(id)arg2 costTime:(unsigned long long)arg3;
+ (void)tryToReportAdLaunchAppForJsApi:(int)arg1 sourceInfo:(id)arg2 bizInfo:(id)arg3;
+ (void)reportConversionOnline:(int)arg1 ext:(id)arg2 biz:(id)arg3 isDynamicCanvas:(_Bool)arg4;
+ (void)reportConversionOnlineForLaunchApp:(int)arg1 uxInfo:(id)arg2 deepLinkScene:(int)arg3;
+ (void)reportConversionOnlineForLaunchApp:(int)arg1 advertiseInfo:(id)arg2 canvasId:(id)arg3 canvasScene:(int)arg4 useHalfScreen:(_Bool)arg5;
+ (void)reportConversionOnlineForClick:(int)arg1 advertiseInfo:(id)arg2 costTime:(unsigned long long)arg3;
+ (void)reportHalfScreenLiteApp:(id)arg1 pid:(id)arg2;
+ (void)reportOpenSDKJumpCanvas:(id)arg1 canvasId:(id)arg2 uxInfo:(id)arg3 step:(unsigned long long)arg4;
+ (void)reportRemoveConsecutiveAd:(id)arg1;
+ (id)createAdChannelReportModel:(id)arg1 extInfo:(id)arg2;
+ (void)reportAdFeedbackOrOperationBtnClick:(id)arg1 videoPlayBackTime:(long long)arg2 adOffSetTop:(double)arg3 clickPoint:(struct CGPoint)arg4 clickType:(int)arg5;
+ (void)doChannelReportInner:(id)arg1 withKey:(id)arg2 configTag:(id)arg3;
+ (void)doChannelReportInner:(id)arg1 withKey:(id)arg2;
+ (void)reportCanvasControlFloatComponentWithSnsId:(id)arg1 scene:(int)arg2 uxInfo:(id)arg3 action:(id)arg4 result:(id)arg5;
+ (void)reportCanvasLocationAuthUIActionWithSnsId:(id)arg1 scene:(int)arg2 uxInfo:(id)arg3 action:(id)arg4 name:(id)arg5;
+ (void)reportCanvasLocationAuthStatusWithSnsId:(id)arg1 scene:(int)arg2 uxInfo:(id)arg3 name:(id)arg4 status:(id)arg5;
+ (void)reportCanvasHbCardBtnClickWithSnsId:(id)arg1 scene:(int)arg2 uxInfo:(id)arg3 btnType:(int)arg4 canvasId:(id)arg5 twistCardId:(id)arg6 subType:(int)arg7 isDoubleCard:(int)arg8 giveCardId:(id)arg9;
+ (void)reportGeneralServiceMsgClickWithUxInfo:(id)arg1 scene:(int)arg2 type:(int)arg3 appointmentId:(unsigned long long)arg4;
+ (void)reportAppointmentCancelActionWithAdInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 appointmentId:(unsigned long long)arg4;
+ (void)reportAppointmentSubmitActionWithAdInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 appointmentId:(unsigned long long)arg4 opType:(int)arg5;
+ (void)reportFinderFollowResult:(id)arg1 snsId:(id)arg2 finderUsername:(id)arg3 result:(long long)arg4 source:(int)arg5;
+ (void)reportImageDownloadResult:(id)arg1 isSuccess:(_Bool)arg2 isCancel:(_Bool)arg3 isTimeline:(_Bool)arg4 isCdnDownload:(_Bool)arg5;
+ (void)reportCommonInteractionInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 reportInfo:(id)arg4;
+ (void)reportLookbookCardInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 reportInfo:(id)arg4;
+ (void)reportTimelineDynamicFeedExposedWithInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 feedWidth:(double)arg4 feedHeight:(double)arg5;
+ (void)reportCardLikeAttractingAnimationPlayedWithInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 playCount:(unsigned int)arg4 errorCode:(int)arg5;
+ (void)reportFullCardDragImageStatusWithInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 dragDuration:(unsigned long long)arg4 dragCount:(unsigned int)arg5 jumpCount:(unsigned int)arg6 firstPlaybackTime:(unsigned long long)arg7;
+ (void)reportSliderCardTouchStatusWithInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 touchDuraion:(unsigned long long)arg4 touchCount:(unsigned int)arg5 hasParticleAnim:(_Bool)arg6;
+ (void)reportSliderCardInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 reportInfo:(id)arg4;
+ (void)reportFinderTopicInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 reportInfo:(id)arg4;
+ (void)reportFinderLiveNoticeReserveResult:(id)arg1 snsId:(id)arg2 finderUsername:(id)arg3 finderLiveNoticeId:(id)arg4 result:(long long)arg5 source:(int)arg6;
+ (void)reportSellingPointWithAdInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 switchCount:(unsigned long long)arg4;
+ (void)reportHalfRandomCardShowRedEnvelopeWithAdInfo:(id)arg1 scene:(int)arg2 canvasId:(id)arg3 pageId:(id)arg4 cardId:(id)arg5 isLastCard:(_Bool)arg6;
+ (void)reportHalfRandomCardGetCardIdResultWithAdInfo:(id)arg1 scene:(int)arg2 canvasId:(id)arg3 pageId:(id)arg4 result:(_Bool)arg5 cardId:(id)arg6;
+ (void)reportShakeADEncoreShakeResultWithAdInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 result:(int)arg4 maxAcceleration:(double)arg5 twistCardId:(id)arg6 hbCard:(id)arg7;
+ (void)reportShakeADShakeActionResultWithAdInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 result:(int)arg4 maxAcceleration:(double)arg5;
+ (void)reportShakeADGetCardIdResultWithAdInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 result:(int)arg4 encoreShake:(int)arg5;
+ (void)reportTwistADTwistActionResultWithAdInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 result:(int)arg4 triggerByAcceleration:(_Bool)arg5 failedMaxDegree:(double)arg6;
+ (void)reportTwistADGetTwistCardIdResultWithAdInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 result:(int)arg4;
+ (void)reportGetCouponResult:(id)arg1 snsId:(id)arg2 appId:(id)arg3 stockId:(id)arg4 result:(long long)arg5 msg:(id)arg6 actionType:(int)arg7 clickOnCanvas:(_Bool)arg8;
+ (void)reportDelAd:(long long)arg1 andResult:(long long)arg2 andUxinfo:(id)arg3 andSnsid:(id)arg4;
+ (void)reportDelAd:(id)arg1;
+ (void)reportQuicklyAddBrandResult:(id)arg1 snsid:(id)arg2 enterType:(int)arg3 result:(int)arg4 brandUsername:(id)arg5 canvasDynamicInfo:(id)arg6;
+ (void)reportCanvasButtonClick:(id)arg1;
+ (id)fetchUserAgent;
+ (id)fetchIDFV;
+ (id)fetchDeviceInfo;
+ (id)fetchIDFA;
+ (void)reportAdPreloadConfigInfo:(id)arg1;
+ (void)reportSnsDynamicUpdateStateForType:(unsigned int)arg1 adInfo:(id)arg2;
+ (void)doSKAdItemStatusReportWithAdvertiseInfo:(id)arg1 appUrl:(id)arg2;
+ (void)doSearchTagClickReportWithDataItem:(id)arg1 clickPos:(long long)arg2 clickAction:(long long)arg3 scene:(unsigned int)arg4;
+ (int)fetchRemindFriendInfoCheckKeyWithScene:(long long)arg1 isInfoValid:(_Bool)arg2 infoIsNil:(_Bool)arg3 aidIsZero:(_Bool)arg4 extInfoIsNil:(_Bool)arg5;
+ (void)checkAndReportRemindFriendInfo:(id)arg1 reportScene:(long long)arg2;
+ (void)doAppStoreColorReportWithUrl:(id)arg1 andAdUid:(id)arg2;
+ (void)reportCommentViewTopicTagClicked:(id)arg1 ofDataItem:(id)arg2 scene:(unsigned int)arg3;
+ (void)reportSearchTopicTagClicked:(id)arg1 scene:(unsigned int)arg2;
+ (void)reportKV28131:(id)arg1;
+ (void)reportAdClickToKV:(id)arg1;
+ (void)reportAdExposureToKV:(id)arg1;
+ (void)reportAdChannelToKV:(id)arg1 header:(id)arg2 content:(id)arg3;
+ (void)reportDialogClick:(id)arg1 snsid:(id)arg2 sdkAppId:(id)arg3 isForShowDialog:(_Bool)arg4 reportScene:(int)arg5 reportOrigin:(int)arg6 useHalfScreen:(_Bool)arg7;
+ (void)reportAdVideoPlayInfo:(id)arg1 videoTotalTime:(unsigned long long)arg2 playTotalTime:(unsigned long long)arg3 mediaId:(id)arg4 playCount:(int)arg5 isDetail:(_Bool)arg6;
+ (void)reportAdDynamicFeedMonitorWithType:(id)arg1 extInfo:(id)arg2;
+ (void)reportAdDynamicFeedExpWithType:(id)arg1 extInfo:(id)arg2;
+ (void)reportAdExposeCost:(id)arg1 snsId:(id)arg2 position:(long long)arg3;
+ (void)reportGestureRecognizeFailed:(int)arg1 snsid:(id)arg2;
+ (void)reportAdMonitor:(id)arg1;
+ (void)reportAdFeature:(id)arg1;
+ (void)reportAdLifeCycle:(id)arg1 snsid:(id)arg2 reportType:(int)arg3 extraInfo:(id)arg4;
+ (void)reportAdLifeCycle:(id)arg1 snsid:(id)arg2 reportType:(int)arg3;
+ (void)reportEndCoverExposure:(id)arg1 exposureStartTime:(unsigned long long)arg2 duration:(unsigned long long)arg3;
+ (void)reportEndCoverClick:(id)arg1;
+ (void)reportPositiveFeedbackBtnClick:(id)arg1;
+ (void)reportAdFeedbackOrOperationBtnClick:(id)arg1 snsid:(id)arg2 sender:(id)arg3 adView:(id)arg4 convertToView:(id)arg5 scene:(int)arg6 clickType:(int)arg7;

@end

