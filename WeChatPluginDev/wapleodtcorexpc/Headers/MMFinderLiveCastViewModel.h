//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KSUPnPService, MMFinderLiveTaskId, MMLiveCastAirPlayViewItem, MMLiveCastDeviceViewItem, MMLiveCastMoreViewItem, NSArray, NSMutableDictionary, NSString, NSURL, WCFinderDataItem;
@protocol MMFinderLiveCastViewModelDelegate;

@interface MMFinderLiveCastViewModel : NSObject
{
    _Bool _disableMutePlay;
    int _commentScene;
    id <MMFinderLiveCastViewModelDelegate> _delegate;
    WCFinderDataItem *_finderDataItem;
    NSURL *_liveCastURL;
    NSArray *_viewItems;
    NSArray *_deviceViewItems;
    MMLiveCastDeviceViewItem *_castingDeviceViewItem;
    MMFinderLiveTaskId *_taskID;
    KSUPnPService *_UPnPService;
    MMLiveCastAirPlayViewItem *_airPlayViewItem;
    NSMutableDictionary *_cachedDeviceViewItems;
    MMLiveCastDeviceViewItem *_connectingDeviceViewItem;
    MMLiveCastMoreViewItem *_moreViewItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveCastMoreViewItem *moreViewItem; // @synthesize moreViewItem=_moreViewItem;
@property(retain, nonatomic) MMLiveCastDeviceViewItem *connectingDeviceViewItem; // @synthesize connectingDeviceViewItem=_connectingDeviceViewItem;
@property(retain, nonatomic) NSMutableDictionary *cachedDeviceViewItems; // @synthesize cachedDeviceViewItems=_cachedDeviceViewItems;
@property(retain, nonatomic) MMLiveCastAirPlayViewItem *airPlayViewItem; // @synthesize airPlayViewItem=_airPlayViewItem;
@property(retain, nonatomic) KSUPnPService *UPnPService; // @synthesize UPnPService=_UPnPService;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) MMLiveCastDeviceViewItem *castingDeviceViewItem; // @synthesize castingDeviceViewItem=_castingDeviceViewItem;
@property(copy, nonatomic) NSArray *deviceViewItems; // @synthesize deviceViewItems=_deviceViewItems;
@property(copy, nonatomic) NSArray *viewItems; // @synthesize viewItems=_viewItems;
@property(retain, nonatomic) NSURL *liveCastURL; // @synthesize liveCastURL=_liveCastURL;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(nonatomic) _Bool disableMutePlay; // @synthesize disableMutePlay=_disableMutePlay;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <MMFinderLiveCastViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)UPnPService:(id)arg1 didUpdateDevice:(id)arg2;
- (void)UPnPService:(id)arg1 didDiscoverDevice:(id)arg2;
- (void)refreshMoreViewItemStatus;
- (id)generateMoreViewItem;
- (void)stopCastingDeviceWhenMediaDidEndPlay:(_Bool)arg1;
- (void)stopCastingDevice;
- (void)stopConnectingDevice;
- (void)startCastingDevice:(id)arg1;
- (id)getCacheOrGenerateDeviceViewItemWithDevice:(id)arg1;
- (void)stopDiscoveringDevices;
- (void)startDiscoveringDevicesWithTimeoutInterval:(double)arg1;
- (void)startDiscoveringDevicesWithTimeout;
- (void)startDiscoveringDevices;
- (void)startAirPlay;
- (id)generateAirPlayViewItemIfNeeded;
- (void)didReloadViewItems;
- (void)reloadViewItems;
- (void)updateFinderDataItem:(id)arg1 liveCastURL:(id)arg2;
- (void)dealloc;
- (id)initWithFinderDataItem:(id)arg1 liveCastURL:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

