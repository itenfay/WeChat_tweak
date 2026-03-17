//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData, NSString;

@protocol TingPlayerStateClient <NSObject, UnitRCBaseProtocol>
- (void)onInactivated:(NSString *)arg1 update:(_Bool)arg2;
- (void)onActivated:(NSString *)arg1 taskId:(NSString *)arg2 update:(_Bool)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onPlayInfoEvent:(NSData *)arg1 event:(int)arg2 msg:(NSData *)arg3;
- (void)onPlayEvent:(NSData *)arg1 event:(int)arg2 msg:(NSData *)arg3;
@end

