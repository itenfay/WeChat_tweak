//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderOpenAPI : NSObject
{
}

+ (void)getFinderContactWithUsername:(id)arg1 commentScene:(int)arg2 successfulBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
+ (void)pushFinderFeedWithEncrytedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 requestScene:(int)arg6 functionalParams:(id)arg7 reportExtraInfo:(id)arg8;
+ (void)pushFinderFeedWithEncrytedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 functionalParams:(id)arg6 reportExtraInfo:(id)arg7;
+ (void)pushFinderFeedWithFeedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 functionalParams:(id)arg6 reportExtraInfo:(id)arg7;
+ (void)pushFinderProfileWithUserName:(id)arg1 currentNavController:(id)arg2 cardType:(unsigned long long)arg3 enterScene:(unsigned long long)arg4 functionalParams:(id)arg5 reportExtraInfo:(id)arg6;
+ (void)pushFinderProfileWithExportUserName:(id)arg1 currentNavController:(id)arg2 cardType:(unsigned long long)arg3 enterScene:(unsigned long long)arg4 functionalParams:(id)arg5 reportExtraInfo:(id)arg6;
+ (_Bool)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2 extraParams:(id)arg3;
+ (void)getFinderLiveMicInfoWithEncryptedId:(id)arg1 nonceId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)getTemplateLiveUrlWithEncryptedID:(id)arg1 nonceID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)showLiveRoomWithUserName:(id)arg1 feedExportIdArray:(id)arg2 selectedIdIndex:(int)arg3 feedNonceId:(id)arg4 fromVC:(id)arg5 verifyInfo:(id)arg6 scenenote:(id)arg7 timeout:(double)arg8 customParam:(id)arg9 replayEntryType:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;
+ (void)invokeToOpenLive:(CDUnknownBlockType)arg1 dataItem:(id)arg2;
+ (void)realShowLiveRoomWithUserName:(id)arg1 feedExportId:(id)arg2 feedNonceId:(id)arg3 fromVC:(id)arg4 verifyInfo:(id)arg5 scenenote:(id)arg6 timeout:(double)arg7 showRecommend:(_Bool)arg8 customParam:(id)arg9 replayEntryType:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;
+ (void)showLiveRoomWithUserName:(id)arg1 feedExportIdArray:(id)arg2 selectedIdIndex:(int)arg3 feedNonceId:(id)arg4 fromVC:(id)arg5 timeout:(double)arg6 customParam:(id)arg7 replayEntryType:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failBlock:(CDUnknownBlockType)arg10;
+ (void)showLiveRoomWithUserName:(id)arg1 feedExportId:(id)arg2 feedNonceId:(id)arg3 fromVC:(id)arg4 timeout:(double)arg5 customParam:(id)arg6 replayEntryType:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;
+ (void)showLiveRoomWithUserName:(id)arg1 fromVC:(id)arg2 customParam:(id)arg3 completation:(CDUnknownBlockType)arg4;
+ (void)showLiveRoomWithExportObject:(id)arg1 fromVC:(id)arg2 customParam:(id)arg3 completation:(CDUnknownBlockType)arg4;
+ (void)getLiveStatusWithUserName:(id)arg1 liveID:(id)arg2 scene:(unsigned int)arg3 disableLocalCache:(_Bool)arg4 successfulBlock:(CDUnknownBlockType)arg5 failedBlock:(CDUnknownBlockType)arg6;
+ (void)getLiveStatusWithUserName:(id)arg1 liveID:(id)arg2 successfulBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
+ (void)handleGenericLiveReservationWithLiveNoticeResponse:(id)arg1 commentScene:(id)arg2 entryScene:(unsigned long long)arg3 cardType:(unsigned long long)arg4 sceneNote:(id)arg5 fromVC:(id)arg6 noticeBussinessDic:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
+ (void)reportConcertLiveReservationWithLiveNoticeResponse:(id)arg1 commentScene:(id)arg2 entryScene:(unsigned long long)arg3 cardType:(unsigned long long)arg4 sceneNote:(id)arg5 fromVC:(id)arg6 noticeBussinessDic:(id)arg7;
+ (void)handleConcertLiveReservationWithLiveNoticeResponse:(id)arg1 commentScene:(id)arg2 entryScene:(unsigned long long)arg3 cardType:(unsigned long long)arg4 sceneNote:(id)arg5 fromVC:(id)arg6 noticeBussinessDic:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
+ (void)handleStartedLiveReservationWithLiveNoticeResponse:(id)arg1 commentScene:(id)arg2 entryScene:(unsigned long long)arg3 cardType:(unsigned long long)arg4 sceneNote:(id)arg5 fromVC:(id)arg6 noticeBussinessDic:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
+ (void)handleReservationWithLiveNoticeResponse:(id)arg1 preferEnterLive:(_Bool)arg2 commentScene:(id)arg3 entryScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 sceneNote:(id)arg6 fromVC:(id)arg7 noticeBussinessDic:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
+ (void)getLiveNoticeInfoWithNoticeId:(id)arg1 verifyInfo:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)reserveLiveNoticeWithAnchorUsername:(id)arg1 noticeId:(id)arg2 reserveOperation:(_Bool)arg3 timeout:(double)arg4 scene:(unsigned int)arg5 noticeBussinessDic:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;
+ (void)getLiveNoticeStateWithAnchorUserName:(id)arg1 noticeId:(id)arg2 successfulBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;

@end

