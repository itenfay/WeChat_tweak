//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData;
@protocol MegaVideoMinimizeListener, MegaVideoPlayerDetailModel;

@protocol MegaVideoMinimizeService <NSObject, UnitRCBaseProtocol>
- (void)removeListener:(id <MegaVideoMinimizeListener>)arg1;
- (void)addListener:(id <MegaVideoMinimizeListener>)arg1;
- (id <MegaVideoPlayerDetailModel>)playerDetailModel;
- (void)setPlayerDetailModel:(id <MegaVideoPlayerDetailModel>)arg1;
- (long long)currentPlayerId;
- (void)updateCurrentPlayerId:(long long)arg1;
- (NSData *)minimizeContext;
- (void)onMinimizeDeactive;
- (void)onMinimizeActive:(NSData *)arg1;
- (_Bool)hasMinimize;
@end

