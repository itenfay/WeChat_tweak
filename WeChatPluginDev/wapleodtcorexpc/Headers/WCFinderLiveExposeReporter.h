//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLiveExposeReporter : NSObject
{
}

+ (void)reportClickCompleteLiveVcAnchorNoticeCreate:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)reportClickCompleteLiveVcAnchorNotice:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)reportCompleteLiveVcAnchorLiveDatasWithType:(unsigned long long)arg1 eid:(id)arg2 finderUsername:(id)arg3 eidUdfDic:(id)arg4;
+ (void)reportClickCompleteLiveVcAnchorLiveDiagnosis:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)reportClickCompleteLiveVcAnchorPlayback:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)reportClickCompleteLiveVcAnchorDataDetailButton:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)reportClickCompleteLiveVcAnchorDataContianer:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)reportExposeCompleteLiveVcAnchorNoticeCreate:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)reportExposeCompleteLiveVcAnchorNotice:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)reportExposeCompleteLiveVcAnchorLiveDiagnosis:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)reportExposeCompleteLiveVcAnchorPlayback:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)reportCompleteExtCardClick:(id)arg1 liveId:(unsigned long long)arg2 putCard:(id)arg3;
+ (void)reportCompleteExtCardExpose:(id)arg1 liveId:(unsigned long long)arg2 putCard:(id)arg3;
+ (void)reportExposeCompleteLiveVcAnchorDataContianer:(id)arg1 liveId:(unsigned long long)arg2;
+ (id)replaceCommaToSemicolon:(id)arg1;
+ (id)getLastEnterFromScene;
+ (id)getLastEnterChannelExtra;
+ (long long)getLastEnterIconType;
+ (id)getLastEnterRoomCommentScene;
+ (id)getLastEnterRoomScenenote;
+ (void)reportFinderLiveGenericPageLeave:(id)arg1 commentScene:(id)arg2 stayTimeInMillisecond:(long long)arg3 pageUdfKv:(id)arg4;
+ (void)reportFinderLiveGenericPageEnter:(id)arg1 commentScene:(id)arg2 pageUdfKv:(id)arg3;
+ (void)reportFinderLiveElementWithActionType:(unsigned long long)arg1 commentScene:(id)arg2 elementId:(id)arg3 username:(id)arg4 sessionBuffer:(id)arg5 eidUdfKv:(id)arg6;
+ (void)reportFinderLiveElementWithActionType:(unsigned long long)arg1 commentScene:(id)arg2 elementId:(id)arg3 eidUdfKv:(id)arg4;
+ (void)reportFinderLiveElementWithDataItem:(id)arg1 actionType:(unsigned long long)arg2 commentScene:(id)arg3 elementId:(id)arg4 eidUdfKv:(id)arg5;
+ (void)reportOuterExposed:(id)arg1 withCommentScene:(id)arg2 withShareType:(long long)arg3 withShareUserName:(id)arg4 sourceChatContact:(id)arg5 withLiveStatus:(unsigned long long)arg6 withTimelineFeedID:(id)arg7 entranceGMsgID:(id)arg8;
+ (void)reportOuterClick:(id)arg1 withCommentScene:(id)arg2 withShareType:(long long)arg3 withShareUserName:(id)arg4 sourceChatContact:(id)arg5 withLiveStatus:(unsigned long long)arg6 withTimelineFeedID:(id)arg7 refEnterSessionId:(unsigned long long)arg8 shareChatUserName:(id)arg9 entranceGMsgID:(id)arg10 shareScene:(long long)arg11 channelExtra:(id)arg12;
+ (void)reportEnterLiveContact:(id)arg1 withFromVC:(id)arg2 withCommentScene:(id)arg3 withIndex:(unsigned long long)arg4;
+ (void)reportEnterLiveDataItem:(id)arg1 withFromVC:(id)arg2 withCommentScene:(id)arg3 withIndex:(unsigned long long)arg4;
+ (void)reportClickAvatarDataItem:(id)arg1 withCommentScene:(id)arg2 withIndex:(unsigned long long)arg3 sessionExtraKey:(id)arg4 withLiveEffect:(_Bool)arg5;
+ (void)reportExposedDataItem:(id)arg1 withCommentScene:(id)arg2 withIndex:(unsigned long long)arg3 sessionExtraKey:(id)arg4;
+ (void)reportContact:(id)arg1 withAction:(long long)arg2 withCommentScene:(id)arg3 withIndex:(unsigned long long)arg4 channelExtra:(id)arg5 feedID:(id)arg6;
+ (void)reportContact:(id)arg1 withAction:(long long)arg2 withCommentScene:(id)arg3 withIndex:(unsigned long long)arg4;
+ (void)reportAction:(long long)arg1 withCommentScene:(id)arg2 withIndex:(unsigned long long)arg3;
+ (void)reportFeedContentVM:(id)arg1 withAction:(long long)arg2 withCommentScene:(id)arg3 withIndex:(unsigned long long)arg4 channelExtra:(id)arg5 livingObjectLiveId:(unsigned long long)arg6;
+ (void)reportFeedContentVM:(id)arg1 withAction:(long long)arg2 withCommentScene:(id)arg3 withIndex:(unsigned long long)arg4 channelExtra:(id)arg5;
+ (void)reportDataItem:(id)arg1 withAction:(long long)arg2 withCommentScene:(id)arg3 withIndex:(unsigned long long)arg4 sessionExtraKey:(id)arg5 channelExtra:(id)arg6 livingObjectLiveId:(unsigned long long)arg7 actionTS:(unsigned long long)arg8;
+ (void)reportDataItem:(id)arg1 withAction:(long long)arg2 withCommentScene:(id)arg3 withIndex:(unsigned long long)arg4 sessionExtraKey:(id)arg5 channelExtra:(id)arg6 livingObjectLiveId:(unsigned long long)arg7;
+ (void)reportDataItem:(id)arg1 withAction:(long long)arg2 withCommentScene:(id)arg3 withIndex:(unsigned long long)arg4 sessionExtraKey:(id)arg5 channelExtra:(id)arg6;
+ (void)reportDataItem:(id)arg1 withAction:(long long)arg2 withCommentScene:(id)arg3 withIndex:(unsigned long long)arg4 sessionExtraKey:(id)arg5;

@end

