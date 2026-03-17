//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class AudioMixReqInfo, MMListenFeedMixedListResponse, NSString;
@protocol TingAudioPageMixLoadListener;

@protocol TingAudioPageMixLoadMgr <NSObject, UnitRCBaseProtocol>
- (void)setFirstScreenNetCache:(NSString *)arg1 response:(MMListenFeedMixedListResponse *)arg2;
- (MMListenFeedMixedListResponse *)getFirstScreenNetCache:(NSString *)arg1;
- (unsigned long long)getLastReqTimeSec;
- (void)loadData:(NSString *)arg1 reqInfo:(AudioMixReqInfo *)arg2;
- (_Bool)removeListener:(NSString *)arg1 listener:(id <TingAudioPageMixLoadListener>)arg2;
- (_Bool)addListener:(NSString *)arg1 listener:(id <TingAudioPageMixLoadListener>)arg2;
@end

