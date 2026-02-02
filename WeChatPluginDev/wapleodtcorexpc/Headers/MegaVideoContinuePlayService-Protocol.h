//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData, NSString;

@protocol MegaVideoContinuePlayService <NSObject, UnitRCBaseProtocol>
- (void)prefetchNextFeed;
- (void)updateRelatedListLastBuffer:(NSData *)arg1;
- (NSString *)nextFeedId;
- (NSData *)nextFeed;
- (int)commentScene;
- (NSString *)playingFeedId;
- (NSData *)playingFeed;
- (void)updatePlayingFeed:(NSData *)arg1 commentScene:(int)arg2 isFromContinuePlay:(_Bool)arg3;
@end

