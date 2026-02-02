//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class MMListenMembershipInfo;

@protocol TingMembershipListener <NSObject, UnitRCBaseProtocol>
- (void)onMembershipInfoUpdated:(MMListenMembershipInfo *)arg1;
- (void)onMembershipStatusChanged:(int)arg1 toStatus:(int)arg2;
@end

