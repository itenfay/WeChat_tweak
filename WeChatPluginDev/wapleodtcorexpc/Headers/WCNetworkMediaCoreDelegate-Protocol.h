//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCNetworkMediaCore;

@protocol WCNetworkMediaCoreDelegate <NSObject>

@optional
- (void)onMediaCore:(WCNetworkMediaCore *)arg1 VideoSizeUpdate:(struct CGSize)arg2;
- (void)onMediaCore:(WCNetworkMediaCore *)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(WCNetworkMediaCore *)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(WCNetworkMediaCore *)arg1 StateChange:(int)arg2;
@end

