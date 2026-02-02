//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAMainListNearByLocationLogic, WANearByInfo;
@protocol WAMainListNearByLogicDelegate;

@interface WAMainListNearByLogic
{
    _Bool _clicked;
    _Bool _isFirstTimeFetch;
    _Bool _isNearByDataLoaded;
    WANearByInfo *_nearByInfo;
    id <WAMainListNearByLogicDelegate> _delegate;
    unsigned long long _status;
    WAMainListNearByLocationLogic *_locationLogic;
    CDUnknownBlockType _updateCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateCompletion; // @synthesize updateCompletion=_updateCompletion;
@property(retain, nonatomic) WAMainListNearByLocationLogic *locationLogic; // @synthesize locationLogic=_locationLogic;
@property(nonatomic) _Bool isNearByDataLoaded; // @synthesize isNearByDataLoaded=_isNearByDataLoaded;
@property(nonatomic) _Bool isFirstTimeFetch; // @synthesize isFirstTimeFetch=_isFirstTimeFetch;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <WAMainListNearByLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool clicked; // @synthesize clicked=_clicked;
@property(retain, nonatomic) WANearByInfo *nearByInfo; // @synthesize nearByInfo=_nearByInfo;
- (id)parseNearByInfoFromResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportWeAppLocation:(struct CLLocationCoordinate2D)arg1;
- (void)onGetLocationFailedWithReason:(unsigned int)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (void)callUpdateCompletion;
- (id)preViewItems;
- (_Bool)jumpWeapp;
- (id)nearbyWeappInfo;
- (id)nearByPageUrl;
- (unsigned long long)nearByAppNumber;
- (void)updateNearWeAppWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateNearWeApp;
- (_Bool)isNearByDataValid;
- (_Bool)isNearByThresholdValid;
- (_Bool)hasNearByStore;
- (_Bool)isNearByUrlExpired;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

