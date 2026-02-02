//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol TingPlayerStateClient;

@protocol TingPlayerStateService <NSObject, UnitRCBaseProtocol>
- (void)removePlayerStateClient:(id <TingPlayerStateClient>)arg1;
- (void)addPlayerStateClient:(id <TingPlayerStateClient>)arg1;
- (float)getPlayRate;
- (long long)getPlayerDownloadPercent;
- (long long)getPlayerDuration;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerPosition;
- (int)getPlayerState;
@end

