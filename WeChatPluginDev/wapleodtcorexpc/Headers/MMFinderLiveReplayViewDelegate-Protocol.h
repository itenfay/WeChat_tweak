//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicUsersInfo;

@protocol MMFinderLiveReplayViewDelegate <NSObject>

@optional
- (void)onStopgapLiveInfoPollRequestedWithSuccessBlock:(void (^)(WCFinderLiveInfo *, unsigned int, unsigned int, NSArray *, WCFinderGetLiveInfoModel *))arg1 failBlock:(void (^)(int, NSString *))arg2;
- (void)onStopgapStateChanged:(unsigned long long)arg1;
- (void)onConnectMicStateUpdated:(MMFinderLiveConnectMicUsersInfo *)arg1 connectMicStateValid:(_Bool)arg2 anchorInAudioMode:(_Bool)arg3 isScreenSharing:(_Bool)arg4;
@end

