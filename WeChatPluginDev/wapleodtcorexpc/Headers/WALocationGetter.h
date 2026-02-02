//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, NSString, WALocationCacheInfo;
@protocol WALocationGetterDelegate;

@interface WALocationGetter
{
    _Bool _retrivingLocation;
    id <WALocationGetterDelegate> _delegate;
    double _requiredHorizonAccuracy;
    LocationRetriever *_locationRetriever;
    WALocationCacheInfo *_cacheInfo;
}

+ (_Bool)isUserDenyToLocationService;
- (void).cxx_destruct;
@property(retain, nonatomic) WALocationCacheInfo *cacheInfo; // @synthesize cacheInfo=_cacheInfo;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(readonly, nonatomic) double requiredHorizonAccuracy; // @synthesize requiredHorizonAccuracy=_requiredHorizonAccuracy;
@property(nonatomic) __weak id <WALocationGetterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool retrivingLocation; // @synthesize retrivingLocation=_retrivingLocation;
- (void)saveLocationCacheToLocal:(id)arg1;
- (id)getLocationCachesFromFile;
- (id)transferWrapFromCLLocaton:(id)arg1;
- (void)updateCacheLocation:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)cancelGetLocation;
- (id)tryGetValidLocationFromCache;
- (void)dealloc;
- (void)startGetLocationWithAuthorizedChallenge:(_Bool)arg1 requiredHorizonAccuracy:(double)arg2 busType:(unsigned long long)arg3 force:(_Bool)arg4 authScene:(unsigned long long)arg5;
- (void)startGetLocationWithAuthorizedChallenge:(_Bool)arg1 authScene:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

