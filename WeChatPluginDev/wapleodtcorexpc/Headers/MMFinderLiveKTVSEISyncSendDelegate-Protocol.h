//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LiveKTVInfo;

@protocol MMFinderLiveKTVSEISyncSendDelegate <NSObject>

@optional
- (void)onRequestRecentKTVSEISyncSendInfo:(LiveKTVInfo *)arg1;
- (_Bool)onCollectKTVSEISyncSendInfo:(LiveKTVInfo *)arg1;
@end

