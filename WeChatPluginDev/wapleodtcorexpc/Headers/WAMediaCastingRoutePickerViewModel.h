//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WAMediaCastingRoutePickerDeviceItem, WAMediaCastingRoutePickerRencentDevicePool;
@protocol WAMediaCastingRoutePickerViewModelDelegate;

@interface WAMediaCastingRoutePickerViewModel : NSObject
{
    _Bool _isSearching;
    id <WAMediaCastingRoutePickerViewModelDelegate> _delegate;
    WAMediaCastingRoutePickerDeviceItem *_airPlayDevice;
    WAMediaCastingRoutePickerDeviceItem *_currentDevice;
    unsigned long long _currentDeviceStatus;
    NSArray *_availableDeviceList;
    NSString *_guideURLString;
    NSString *_titleLocalString;
    NSString *_guideLocalString;
    NSString *_recentDeviceLocalString;
    NSString *_availableDeviceLocalString;
    WAMediaCastingRoutePickerRencentDevicePool *_recentDevicePool;
    NSString *_guidLocalString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *guidLocalString; // @synthesize guidLocalString=_guidLocalString;
@property(retain, nonatomic) WAMediaCastingRoutePickerRencentDevicePool *recentDevicePool; // @synthesize recentDevicePool=_recentDevicePool;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(copy, nonatomic) NSString *availableDeviceLocalString; // @synthesize availableDeviceLocalString=_availableDeviceLocalString;
@property(copy, nonatomic) NSString *recentDeviceLocalString; // @synthesize recentDeviceLocalString=_recentDeviceLocalString;
@property(readonly, copy, nonatomic) NSString *guideLocalString; // @synthesize guideLocalString=_guideLocalString;
@property(copy, nonatomic) NSString *titleLocalString; // @synthesize titleLocalString=_titleLocalString;
@property(copy, nonatomic) NSString *guideURLString; // @synthesize guideURLString=_guideURLString;
@property(copy, nonatomic) NSArray *availableDeviceList; // @synthesize availableDeviceList=_availableDeviceList;
@property(nonatomic) unsigned long long currentDeviceStatus; // @synthesize currentDeviceStatus=_currentDeviceStatus;
@property(retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *airPlayDevice; // @synthesize airPlayDevice=_airPlayDevice;
@property(nonatomic) __weak id <WAMediaCastingRoutePickerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *lastConnectedDeviceList;
- (void)notifyCurrentDeviceStatusChanged;
- (void)notifySearchingStatusChanged;
- (void)notifyDataChanged;
- (void)appendLastConnectDevice:(id)arg1;
- (void)updateCurrentDeviceStatus:(unsigned long long)arg1;
- (void)updateCurrentDevice:(id)arg1;
- (void)updateSearchingStatus:(_Bool)arg1;
- (void)updateUpnpDeviceList:(id)arg1;
- (id)init;

@end

