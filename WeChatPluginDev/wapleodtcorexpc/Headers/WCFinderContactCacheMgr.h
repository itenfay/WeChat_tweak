//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCFinderContactCacheMgr
{
    NSMutableDictionary *_contactCaches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *contactCaches; // @synthesize contactCaches=_contactCaches;
- (id)getClubContactCache:(id)arg1;
- (id)selfContactCache;
- (id)contactProfileExtInfoCacheForKey:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

