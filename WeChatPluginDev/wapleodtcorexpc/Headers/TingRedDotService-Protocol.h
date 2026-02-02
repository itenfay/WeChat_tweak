//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData, TingRedDotItem, TingRedDotParams;
@protocol TingRedDotServiceListener;

@protocol TingRedDotService <NSObject, UnitRCBaseProtocol>
- (void)clearRedDotItemFromScene:(int)arg1 scene:(int)arg2;
- (TingRedDotItem *)getRedDotItem:(int)arg1;
- (void)clearCenterRedDotItemWithParams:(TingRedDotParams *)arg1;
- (void)clearCenterRedDotItem;
- (TingRedDotItem *)getCenterRedDotItem;
- (void)requestRedDotItem:(NSData *)arg1 version:(int)arg2;
- (void)removeListener:(id <TingRedDotServiceListener>)arg1;
- (void)addListener:(id <TingRedDotServiceListener>)arg1;
@end

