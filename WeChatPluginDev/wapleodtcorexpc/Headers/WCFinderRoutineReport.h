//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderRoutineReport : NSObject
{
}

+ (void)_fillDataItemWithDataItem:(id)arg1 reportInfo:(id)arg2;
+ (void)reportInfo:(id)arg1;
+ (void)reportFavouriteWithSence:(int)arg1 objectId:(id)arg2;
+ (void)reportVideoSeekActionWithSence:(int)arg1 objectId:(id)arg2 actionValue:(long long)arg3;
+ (void)reportExposeDurationWithSence:(int)arg1 dataItem:(id)arg2 duration:(unsigned long long)arg3 mediaType:(unsigned long long)arg4 isFullScreen:(_Bool)arg5 feedClientInfo:(id)arg6;
+ (void)reportExposeDurationWithSence:(int)arg1 dataItem:(id)arg2 duration:(unsigned long long)arg3 mediaType:(unsigned long long)arg4 isFullScreen:(_Bool)arg5;
+ (void)reportCancelShareActionWithScene:(int)arg1 objectId:(id)arg2 shareType:(unsigned long long)arg3;
+ (void)reportShareActionWithScene:(int)arg1 objectId:(id)arg2 shareType:(unsigned long long)arg3 username:(id)arg4;
+ (void)reportMaxVideoPlayTimeWithSence:(int)arg1 dataItem:(id)arg2 maxPlayTime:(long long)arg3;
+ (void)reportPhotoTurningWithSence:(int)arg1 dataItem:(id)arg2 duration:(long long)arg3 lastIndex:(unsigned long long)arg4 currentIndex:(unsigned long long)arg5 isManual:(_Bool)arg6;
+ (void)reportReplayCountWithSence:(int)arg1 objectId:(id)arg2 replayCount:(unsigned long long)arg3;
+ (void)reportBitFeatureWithSence:(int)arg1 objectId:(id)arg2 bitFeature:(unsigned long long)arg3;
+ (void)reportStayTimeWithSence:(int)arg1 contentVM:(id)arg2 duration:(unsigned long long)arg3 isFullScreen:(_Bool)arg4 firstVideoDataSource:(unsigned long long)arg5;
+ (void)clickFullTextActionWithSence:(int)arg1 objectId:(id)arg2;
+ (void)clickCommentActionWithSence:(int)arg1 objectId:(id)arg2;
+ (void)clickAvatarActionWithSence:(int)arg1 avatarType:(unsigned long long)arg2 dataItem:(id)arg3;
+ (void)clickAvatarActionWithSence:(int)arg1 dataItem:(id)arg2;
+ (void)clickShareActionWithSence:(int)arg1 objectId:(id)arg2;
+ (void)enterFinderWithSence:(unsigned long long)arg1;
+ (void)exitFinder;
+ (void)reportFavouriteWithSence:(int)arg1 megaVideo:(id)arg2;
+ (void)reportCancelShareActionWithScene:(int)arg1 shareType:(unsigned long long)arg2 megaVideo:(id)arg3;
+ (void)reportShareActionWithScene:(int)arg1 shareType:(unsigned long long)arg2 username:(id)arg3 megaVideo:(id)arg4;
+ (void)reportMaxVideoPlayTimeWithSence:(int)arg1 maxPlayTime:(long long)arg2 megaVideo:(id)arg3;
+ (void)reportExposeDurationWithSence:(int)arg1 duration:(unsigned long long)arg2 megaVideo:(id)arg3 isFullScreen:(_Bool)arg4;
+ (void)reportStayTimeWithSence:(int)arg1 duration:(unsigned long long)arg2 megaVideo:(id)arg3 isFullScreen:(_Bool)arg4;
+ (void)clickAvatarActionWithSence:(int)arg1 megaVideo:(id)arg2;
+ (void)clickShareActionWithSence:(int)arg1 megaVideo:(id)arg2;

@end

