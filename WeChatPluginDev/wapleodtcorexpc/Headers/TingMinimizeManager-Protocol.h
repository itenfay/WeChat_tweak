//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol TingMinimizeListener;

@protocol TingMinimizeManager <NSObject, UnitRCBaseProtocol>
- (void)removeListener:(id <TingMinimizeListener>)arg1;
- (void)addListener:(id <TingMinimizeListener>)arg1;
- (void)activeMinimizeTask:(void (^)(void))arg1;
- (void)deactiveMinimizeTask:(void (^)(void))arg1;
- (_Bool)hasActiveMinimizeTask;
@end

