//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGetLiveMessageRespContext, MMFinderLiveTaskId, NSArray, NSError, WCFinderContact, WCFinderLiveInfo;

@protocol MMFinderLiveMessageExt <NSObject>

@optional
- (void)onNotifyGlobalLevelUpdated:(unsigned int)arg1 forContact:(WCFinderContact *)arg2;
- (void)onGetHandledFinderLiveMessage:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 onlineContacts:(NSArray *)arg3 msgList:(NSArray *)arg4 finderLiveInfo:(WCFinderLiveInfo *)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 onlineViewCount:(unsigned int)arg9 ktvPlayerCount:(unsigned int)arg10 respContext:(MMFinderLiveGetLiveMessageRespContext *)arg11;
@end

