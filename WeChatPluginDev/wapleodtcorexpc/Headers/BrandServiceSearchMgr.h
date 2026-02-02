//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocation, NSString;

@interface BrandServiceSearchMgr
{
    CLLocation *_location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)sendDetailPageDataQuickRequest:(unsigned long long)arg1 Keyword:(id)arg2;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

