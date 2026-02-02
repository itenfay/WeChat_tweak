//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSArray, TingItem;

@protocol TingPlayPrefetchService <NSObject, UnitRCBaseProtocol>
- (void)doPrefetchPlayUrlAndCheckSpamForTingItem:(TingItem *)arg1 scene:(int)arg2;
- (void)onExposedWithItem:(TingItem *)arg1 scene:(int)arg2 index:(int)arg3;
- (void)onExposedWithItemList:(NSArray *)arg1 scene:(int)arg2;
- (_Bool)isEnablePrefetch;
@end

