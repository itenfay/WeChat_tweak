//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingMembershipServiceCpp
{
}

+ (id)sharedInstance;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)unbindQQMusic:(CDUnknownBlockType)arg1;
- (void)joinAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchJoinMembershipInfoAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchJoinInfoAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchMembershipAsync:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchMembershipInfoAsync:(CDUnknownBlockType)arg1;
- (void)refreshMembershipInfoIfNeeded;
- (void)setNeedsUpdateMembershipInfo;
- (void)updateMembershipInfo:(id)arg1;
- (id)membershipInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

