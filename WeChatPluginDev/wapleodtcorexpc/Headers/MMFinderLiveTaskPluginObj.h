//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveAdvertisementVideoPlugin, MMFinderLiveCommentPlugin, MMFinderLiveConnectMicPlugin, MMFinderLiveNoticeLogicPlugin, MMFinderLiveRealNameFriendLikeLogicPlugin, MMFinderLiveTaskFPSMonitorPlugin, MMLiveBaseTask;
@protocol MMFinderLiveTaskFunctionPlugin;

@interface MMFinderLiveTaskPluginObj : NSObject
{
    MMFinderLiveAdvertisementVideoPlugin *_adVideo;
    MMFinderLiveCommentPlugin *_comment;
    MMFinderLiveConnectMicPlugin *_connectMic;
    MMFinderLiveRealNameFriendLikeLogicPlugin *_friendLike;
    MMFinderLiveTaskFPSMonitorPlugin *_fpsMonitor;
    MMFinderLiveNoticeLogicPlugin *_notice;
    MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *_liveTask;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) MMFinderLiveNoticeLogicPlugin *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) MMFinderLiveTaskFPSMonitorPlugin *fpsMonitor; // @synthesize fpsMonitor=_fpsMonitor;
@property(retain, nonatomic) MMFinderLiveRealNameFriendLikeLogicPlugin *friendLike; // @synthesize friendLike=_friendLike;
@property(retain, nonatomic) MMFinderLiveConnectMicPlugin *connectMic; // @synthesize connectMic=_connectMic;
@property(retain, nonatomic) MMFinderLiveCommentPlugin *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) MMFinderLiveAdvertisementVideoPlugin *adVideo; // @synthesize adVideo=_adVideo;
- (void)registerPlugin:(unsigned long long)arg1;
- (id)initWithLiveTask:(id)arg1;

@end

