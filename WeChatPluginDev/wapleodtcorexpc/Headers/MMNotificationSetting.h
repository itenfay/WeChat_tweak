//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMNotificationSetting : NSObject
{
    _Bool _isAlertSettingOn;
    _Bool _isNotificationCenterSettingOn;
    _Bool _isLockScreenSettingOn;
    _Bool _isSoundSettingOn;
    _Bool _isBadgeSettingOn;
    _Bool _isNeverShowPushDetail;
    long long _showPreviewsSetting;
    long long _alertStyle;
    long long _authorizationStatus;
}

@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) long long alertStyle; // @synthesize alertStyle=_alertStyle;
@property(nonatomic) long long showPreviewsSetting; // @synthesize showPreviewsSetting=_showPreviewsSetting;
@property(nonatomic) _Bool isNeverShowPushDetail; // @synthesize isNeverShowPushDetail=_isNeverShowPushDetail;
@property(nonatomic) _Bool isBadgeSettingOn; // @synthesize isBadgeSettingOn=_isBadgeSettingOn;
@property(nonatomic) _Bool isSoundSettingOn; // @synthesize isSoundSettingOn=_isSoundSettingOn;
@property(nonatomic) _Bool isLockScreenSettingOn; // @synthesize isLockScreenSettingOn=_isLockScreenSettingOn;
@property(nonatomic) _Bool isNotificationCenterSettingOn; // @synthesize isNotificationCenterSettingOn=_isNotificationCenterSettingOn;
@property(nonatomic) _Bool isAlertSettingOn; // @synthesize isAlertSettingOn=_isAlertSettingOn;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isAllSettingOff;
@property(readonly, nonatomic) _Bool canShowAlert;

@end

