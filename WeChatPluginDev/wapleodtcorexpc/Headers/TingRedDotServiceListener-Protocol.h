//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class TingRedDotItem;

@protocol TingRedDotServiceListener <NSObject, UnitRCBaseProtocol>
- (void)onCenterRedDotItemClear;
- (void)onCenterRedDotItemUpdate:(TingRedDotItem *)arg1;
- (void)onTingRedDotItemClear:(int)arg1;
- (void)onRedDotItemUpdate:(int)arg1 item:(TingRedDotItem *)arg2;
@end

