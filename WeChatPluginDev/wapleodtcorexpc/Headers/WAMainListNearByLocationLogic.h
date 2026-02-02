//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, WALocationGetter;
@protocol WAMainListNearByLocationLogicDelegate;

@interface WAMainListNearByLocationLogic
{
    id <WAMainListNearByLocationLogicDelegate> _delegate;
    WALocationGetter *_locationGetter;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) WALocationGetter *locationGetter; // @synthesize locationGetter=_locationGetter;
@property(nonatomic) __weak id <WAMainListNearByLocationLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)thirdAccuracyInvalid:(id)arg1;
- (void)secondAccuracyInvalid:(id)arg1;
- (void)firstAccuracyInvalid:(id)arg1;
- (void)onGetLocationFailedWithReason:(unsigned long long)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (void)startGetLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

