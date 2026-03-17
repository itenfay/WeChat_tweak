//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSString, TingUIStateInfo;
@protocol TingPlayTask;

@protocol TingUIState <NSObject, UnitRCBaseProtocol>
- (TingUIStateInfo *)getStateInfo;
- (void)setStateInfo:(TingUIStateInfo *)arg1;
- (id <TingPlayTask>)getPlayTask;
- (void)setPlayTask:(id <TingPlayTask>)arg1;
- (NSString *)uuid;
@end

