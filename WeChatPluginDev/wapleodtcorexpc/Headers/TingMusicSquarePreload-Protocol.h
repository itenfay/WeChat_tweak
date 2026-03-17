//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class MMListenDiscoverResponse, NSString, TingMusicSquareClientInsertionInfo, TingMusicSquarePreloadInfo, TingMusicSquarePreloadResponse;

@protocol TingMusicSquarePreload <NSObject, UnitRCBaseProtocol>
- (void)applyClientInsertionPatchIfNeeded:(NSString *)arg1 discoverResponse:(MMListenDiscoverResponse *)arg2 callback:(void (^)(TingMusicSquareClientInsertionPatch *))arg3;
- (void)clearClientInsertionPatch;
- (void)readClientInsertionPatch:(NSString *)arg1 callback:(void (^)(TingMusicSquareClientInsertionPatch *))arg2;
- (void)onClientInsertionReceived:(TingMusicSquareClientInsertionInfo *)arg1;
- (TingMusicSquarePreloadResponse *)readPreloadResponse;
- (TingMusicSquarePreloadResponse *)getAndClearPreloadResponse;
- (void)discard:(TingMusicSquarePreloadInfo *)arg1;
- (void)preload:(TingMusicSquarePreloadInfo *)arg1;
@end

