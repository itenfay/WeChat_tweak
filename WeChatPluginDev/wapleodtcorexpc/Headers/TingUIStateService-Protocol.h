//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSArray, NSString;
@protocol TingUIState;

@protocol TingUIStateService <NSObject, UnitRCBaseProtocol>
- (void)removeState:(NSString *)arg1;
- (void)appendState:(id <TingUIState>)arg1;
- (id <TingUIState>)getState:(NSString *)arg1;
- (NSArray *)getAllStateList;
- (NSArray *)getAllStateId;
@end

