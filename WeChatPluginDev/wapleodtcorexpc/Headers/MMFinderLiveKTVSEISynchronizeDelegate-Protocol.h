//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveKTVSEISynchronizeLogic, NSString;

@protocol MMFinderLiveKTVSEISynchronizeDelegate <NSObject>

@optional
- (void)onFinderLiveKTVSEISynRoleChanged:(long long)arg1;
- (void)onFinderLiveKTVSEIRecvActionIdUpdate:(NSString *)arg1 lastActionId:(NSString *)arg2 syncLogic:(MMFinderLiveKTVSEISynchronizeLogic *)arg3;
- (void)onFinderLiveKTVSEIRecvSongUpdate:(NSString *)arg1 lastSong:(NSString *)arg2 syncLogic:(MMFinderLiveKTVSEISynchronizeLogic *)arg3;
- (void)onFinderLiveKTVSEINewReceiverUpdate:(NSString *)arg1 syncLogic:(MMFinderLiveKTVSEISynchronizeLogic *)arg2;
- (void)onFinderLiveKTVSEIRecvActionVersion:(unsigned int)arg1 syncLogic:(MMFinderLiveKTVSEISynchronizeLogic *)arg2;
@end

