//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MicSetting_PurchaseMicSetting;

@interface MMLiveConnectMicModeChanges : NSObject
{
    _Bool _wasPaidMic;
    _Bool _isPaidMic;
    _Bool _wasConnectMic;
    _Bool _isConnectMic;
    _Bool _wasMicTalking;
    _Bool _isMicTalking;
    MicSetting_PurchaseMicSetting *_paidMicSettingOld;
    MicSetting_PurchaseMicSetting *_paidMicSettingNew;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MicSetting_PurchaseMicSetting *paidMicSettingNew; // @synthesize paidMicSettingNew=_paidMicSettingNew;
@property(retain, nonatomic) MicSetting_PurchaseMicSetting *paidMicSettingOld; // @synthesize paidMicSettingOld=_paidMicSettingOld;
@property(nonatomic) _Bool isMicTalking; // @synthesize isMicTalking=_isMicTalking;
@property(nonatomic) _Bool wasMicTalking; // @synthesize wasMicTalking=_wasMicTalking;
@property(nonatomic) _Bool isConnectMic; // @synthesize isConnectMic=_isConnectMic;
@property(nonatomic) _Bool wasConnectMic; // @synthesize wasConnectMic=_wasConnectMic;
@property(nonatomic) _Bool isPaidMic; // @synthesize isPaidMic=_isPaidMic;
@property(nonatomic) _Bool wasPaidMic; // @synthesize wasPaidMic=_wasPaidMic;
- (_Bool)micModeChanged;

@end

