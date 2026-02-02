//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAMediaCastingAirPlayService, WAMediaCastingDataReporter, WAMediaCastingRoutePickerViewModel, WAMediaCastingUpnpService;
@protocol WAMediaCastingRoutePickerControllerDataSource, WAMediaCastingRoutePickerControllerDelegate;

@interface WAMediaCastingRoutePickerController : NSObject
{
    _Bool _isLive;
    id <WAMediaCastingRoutePickerControllerDataSource> _dataSource;
    id <WAMediaCastingRoutePickerControllerDelegate> _delegate;
    WAMediaCastingUpnpService *_upnpService;
    WAMediaCastingAirPlayService *_airPlayService;
    WAMediaCastingRoutePickerViewModel *_viewModel;
    WAMediaCastingDataReporter *_reporter;
    NSString *_uri;
    double _startPosition;
    NSString *_appID;
    unsigned long long _routePickerViewEnterScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long routePickerViewEnterScene; // @synthesize routePickerViewEnterScene=_routePickerViewEnterScene;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) double startPosition; // @synthesize startPosition=_startPosition;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) WAMediaCastingDataReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WAMediaCastingRoutePickerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WAMediaCastingAirPlayService *airPlayService; // @synthesize airPlayService=_airPlayService;
@property(retain, nonatomic) WAMediaCastingUpnpService *upnpService; // @synthesize upnpService=_upnpService;
@property(nonatomic) __weak id <WAMediaCastingRoutePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WAMediaCastingRoutePickerControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) unsigned long long upnpVideoPlayerState;
@property(readonly, nonatomic) unsigned long long wirelessType;
@property(readonly, nonatomic) _Bool isDLNACasting;
@property(readonly, nonatomic) _Bool isAirPlaying;
- (void)showRoutePickerViewWithEnterScene:(unsigned long long)arg1;
- (void)onMediaCastingAirPlayService:(id)arg1 wirelessRouteActiveDidChange:(_Bool)arg2;
- (void)onMediaCastingUpnpService:(id)arg1 positionInfoDidChange:(double)arg2 duration:(double)arg3;
- (void)onMediaCastingUpnpService:(id)arg1 videoPlayerStateDidChange:(unsigned long long)arg2;
- (void)onMediaCastingUpnpService:(id)arg1 devicesListDidUpdate:(id)arg2;
- (void)onMediaCastingUpnpServiceDidFinishSearch:(id)arg1 devicesList:(id)arg2;
- (void)onMediaCastingUpnpServiceDidStartSearch:(id)arg1;
- (void)didSelectGuideButtonPickerView:(id)arg1;
- (void)didSelectDeviceItem:(id)arg1 pickerView:(id)arg2;
- (_Bool)isVideoPlayerInFullScreenModeWithPageSheet:(id)arg1;
- (void)onMediaCastingPageSheetDidDismiss:(id)arg1;
- (void)onMediaCastingPageSheetWillDismiss:(id)arg1;
- (unsigned long long)currentVideoModeState;
- (unsigned long long)protocolTypeForDataReport;
- (void)reportCastingEventType:(unsigned long long)arg1 uri:(id)arg2 success:(_Bool)arg3;
- (void)reportCastingEventType:(unsigned long long)arg1 success:(_Bool)arg2;
- (void)handleUserSelectedAirPlayDeviceDataReport;
- (void)handlePageSheetDismissDataReport;
- (void)reportClickWithEventType:(unsigned long long)arg1;
- (void)upnp_videoDisappear;
- (void)upnp_videoAppear;
- (void)upnp_seek:(double)arg1;
- (void)upnp_setVolume:(double)arg1;
- (void)upnp_pause;
- (void)upnp_play;
- (void)continueCasting:(id)arg1 startPosition:(double)arg2 isLive:(_Bool)arg3;
- (void)exitCasting;
- (void)reconnectCasting;
- (void)switchCasting;
- (void)startCasting:(id)arg1 startPosition:(double)arg2 isLive:(_Bool)arg3;
- (id)initWithAppID:(id)arg1 pagePath:(id)arg2 appServiceType:(unsigned int)arg3 component:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

