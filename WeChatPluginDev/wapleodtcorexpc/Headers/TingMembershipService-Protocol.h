//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class MMListenMembershipInfo, MMListenMembershipJoinRequest, MMListenMembershipSchemeGetRequest, NSString;
@protocol TingMembershipListener;

@protocol TingMembershipService <NSObject, UnitRCBaseProtocol>
- (void)removeListener:(id <TingMembershipListener>)arg1;
- (void)addListener:(id <TingMembershipListener>)arg1;
- (void)unbindQQMusic:(void (^)(_Bool))arg1;
- (void)joinAsync:(MMListenMembershipJoinRequest *)arg1 callback:(void (^)(MMListenMembershipJoinResponse *))arg2;
- (void)fetchJoinMembershipInfoAsync:(NSString *)arg1 callback:(void (^)(MMListenMembershipJoinInfo *))arg2;
- (void)fetchJoinInfoAsync:(MMListenMembershipSchemeGetRequest *)arg1 callback:(void (^)(MMListenMembershipJoinInfo *))arg2;
- (void)fetchMembershipAsync:(_Bool)arg1 callback:(void (^)(MMListenMembershipInfo *))arg2;
- (void)fetchMembershipInfoAsync:(void (^)(MMListenMembershipInfo *))arg1;
- (void)refreshMembershipInfoIfNeeded;
- (void)setNeedsUpdateMembershipInfo;
- (void)updateMembershipInfo:(MMListenMembershipInfo *)arg1;
- (MMListenMembershipInfo *)membershipInfo;
@end

