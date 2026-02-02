//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAMediaCastingAirPlayDetector;
@protocol WAMediaCastingAirPlayServiceDelegate;

@interface WAMediaCastingAirPlayService : NSObject
{
    id <WAMediaCastingAirPlayServiceDelegate> _delegate;
    WAMediaCastingAirPlayDetector *_detector;
}

+ (id)service;
- (void).cxx_destruct;
@property(retain, nonatomic) WAMediaCastingAirPlayDetector *detector; // @synthesize detector=_detector;
@property(nonatomic) __weak id <WAMediaCastingAirPlayServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWAMediaCastingAirPlayDetector:(id)arg1 wirelessRouteActiveDidChange:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long wirelessType;
@property(readonly, nonatomic) _Bool isAirPlaying;
- (void)showRoutePickerView;
- (void)exit;
- (void)switchDevice;
- (void)start;
- (id)volumeView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

