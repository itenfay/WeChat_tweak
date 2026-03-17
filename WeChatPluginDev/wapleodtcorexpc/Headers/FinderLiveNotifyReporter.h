//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FinderLiveNotifyReporter : NSObject
{
}

+ (id)getReportExtInfoFromMsg:(id)arg1;
+ (void)reportReplaceMsgTipsID:(id)arg1 unReadAndLiveEndCount:(unsigned int)arg2 deleteTipsID:(id)arg3;
+ (void)reportMainFrameClickWithMsg:(id)arg1 rowIndex:(unsigned long long)arg2 firstClick:(_Bool)arg3 unreadCount:(unsigned int)arg4;
+ (void)reportMainFrameExposeWithMsg:(id)arg1 rowIndex:(unsigned long long)arg2 firstExpose:(_Bool)arg3 unreadCount:(unsigned int)arg4;
+ (void)reportNoticeOperation:(long long)arg1 commentScene:(id)arg2 notifyMsgItem:(id)arg3 msgExt:(id)arg4 chnlExtraDict:(id)arg5;
+ (void)reportNoticeOperation:(long long)arg1 commentScene:(id)arg2 notifyMsgItem:(id)arg3 msgExt:(id)arg4;

@end

