//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavLocationDB, NSString;

@interface FavLocationMgr
{
    _Bool _isRunningReverse;
    FavLocationDB *_locationDB;
    unsigned int _eventID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)clearLocationCache;
- (unsigned int)requestWXGeocodeWithLocation:(id)arg1;
- (id)cityFromAddressDic:(id)arg1;
- (id)countryFromAddressDic:(id)arg1;
- (unsigned int)updateAddressByLocation:(id)arg1;
- (id)getAddressByLocation:(id)arg1;
- (void)onServiceClearData;
- (void)initData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

