//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WCFinderLiveAudienceNoticeReporter : NSObject
{
    NSMutableSet *_displayedNoticeIDs;
    NSMutableSet *_displayedDetailNoticeIDs;
}

+ (id)replaceCommaToSemicolon:(id)arg1;
+ (void)reportNoticeCommonAction:(unsigned long long)arg1 commentScene:(int)arg2 elementId:(id)arg3 noticeInfo:(id)arg4 eidUdfKv:(id)arg5;
+ (void)reportNoticeOperation:(long long)arg1 withUsername:(id)arg2 noticeInfo:(id)arg3 commentScene:(id)arg4 channelExtra:(id)arg5 dataItem:(id)arg6;
+ (void)reportNoticeOperation:(long long)arg1 withUsername:(id)arg2 noticeInfo:(id)arg3 commentScene:(id)arg4 sourceScene:(id)arg5 fromSourceScene:(id)arg6 channelExtra:(id)arg7 dataItem:(id)arg8;
+ (void)reportNoticeOperation:(id)arg1 withNoticeInfo:(id)arg2 withCommentScene:(id)arg3 actionType:(unsigned long long)arg4 liveId:(unsigned long long)arg5;
+ (void)reportNoticeOperation:(id)arg1 withNoticeInfo:(id)arg2 withCommentScene:(id)arg3 actionType:(unsigned long long)arg4;
+ (void)reportNoticeOperation:(long long)arg1 withUsername:(id)arg2 withLiveId:(unsigned long long)arg3 withLiveStatus:(unsigned int)arg4 withCommentScene:(id)arg5 withForceNoticeInfo:(id)arg6 withNoticeContent:(id)arg7;
- (void).cxx_destruct;
- (void)reportNoticeOperation:(long long)arg1 username:(id)arg2 withNoticeInfo:(id)arg3 withCommentScene:(int)arg4 feedID:(id)arg5 isFromNoticeDetail:(_Bool)arg6 sourceScene:(id)arg7 fromSourceScene:(id)arg8 channelExtra:(id)arg9;
- (void)reportNoticeOperation:(long long)arg1 withUsername:(id)arg2 sceneNote:(id)arg3 noticeInfo:(id)arg4 commentScene:(id)arg5 noticeBussinessDic:(id)arg6;
- (void)reportNoticeOperation:(long long)arg1 withUsername:(id)arg2 noticeInfo:(id)arg3 actionInfo:(id)arg4 commentScene:(id)arg5;
- (void)reportNoticeOperationWithParams:(id)arg1;
- (id)init;

@end

