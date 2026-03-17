//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface DeviceInfo : NSObject
{
}

+ (id)adCommonDeviceInfo;
+ (id)decryptIDFA:(id)arg1;
+ (id)encryptIDFA:(id)arg1;
+ (id)idfaUUID;
+ (id)ssid;
+ (id)bssid;
+ (_Bool)isUnderArm64e;
+ (_Bool)isNewerThanPlatform:(id)arg1 mainGeneration:(int)arg2 subGeneration:(int)arg3;
+ (_Bool)isNewerThaniPodGeneration:(int)arg1 subGeneration:(int)arg2;
+ (_Bool)isNewerThaniPadGeneration:(int)arg1 subGeneration:(int)arg2;
+ (_Bool)isNewerThaniPhoneGeneration:(int)arg1 subGeneration:(int)arg2;
+ (_Bool)isNewerThaniPod6;
+ (_Bool)isNewerThaniPad5th;
+ (_Bool)isNewerThaniPadAir2;
+ (_Bool)isNewerThaniPhone6;
+ (_Bool)isNewerThaniPhone6s;
+ (_Bool)isNewerThaniPhone7;
+ (_Bool)isNewerThaniPhone8;
+ (_Bool)isNewerThaniPhoneX;
+ (_Bool)isNewerThaniPhone12;
+ (_Bool)canUseInAppSplitView;
+ (_Bool)isSupportDragAndDrop;
+ (_Bool)isSupportSplitView;
+ (_Bool)hasForceTouchCapability:(id)arg1;
+ (_Bool)isiPadAndFaceIDHardwareSupported;
+ (_Bool)isDeviceFaceIDHardwareSupported;
+ (_Bool)isiOS14plus;
+ (_Bool)isiOS14_2Plus;
+ (_Bool)isiOS14_6plus;
+ (_Bool)isiOS14_5plus;
+ (_Bool)isiOS15plus;
+ (_Bool)isiOS15_4plus;
+ (_Bool)isiOS16plus;
+ (_Bool)isiOS16_4plus;
+ (_Bool)isiOS17_4plus;
+ (_Bool)isiOS17plus;
+ (_Bool)isiOS18plus;
+ (double)GetiOSVersion;
+ (_Bool)isSupportMultiScene;
+ (_Bool)isiOSAppOnVision;
+ (_Bool)isVisionPro;
+ (_Bool)isiPadUniversal;
+ (_Bool)isiPadMini;
+ (_Bool)isiPadAir2;
+ (_Bool)isiPadAir;
+ (_Bool)isiPadOrVision;
+ (_Bool)isiPad;
+ (_Bool)isiPodTouch;
+ (_Bool)isiPhone12OrAbove;
+ (_Bool)isiPhone16ProMax;
+ (_Bool)isiPhone16Pro;
+ (_Bool)isiPhone15ProMax;
+ (_Bool)isiPhone15Pro;
+ (_Bool)isiPhone15Plus;
+ (_Bool)isiPhone15;
+ (_Bool)isiPhone14OrAbove;
+ (_Bool)isiPhone14Series;
+ (_Bool)isiPhone14Plus;
+ (_Bool)isiPhone14;
+ (_Bool)isiPhone14ProMax;
+ (_Bool)isiPhone14Pro;
+ (_Bool)isiPhone13OrAbove;
+ (_Bool)isiPhone13ProMax;
+ (_Bool)isiPhone13Pro;
+ (_Bool)isiPhone13;
+ (_Bool)isiPhone13Mini;
+ (_Bool)isiPhone12ProMax;
+ (_Bool)isiPhone12Pro;
+ (_Bool)isiPhone12;
+ (_Bool)isiPhone12Mini;
+ (_Bool)isiPhone11OrAbove;
+ (_Bool)isiPhone11ProMax;
+ (_Bool)isiPhone11Pro;
+ (_Bool)isiPhone11;
+ (_Bool)isiPhoneXr;
+ (_Bool)isiPhoneXsMax;
+ (_Bool)isiPhoneXs;
+ (_Bool)isiPhoneX;
+ (_Bool)isiPhonePlus;
+ (_Bool)isiPhone7p;
+ (_Bool)isiPhone7;
+ (_Bool)isiPhoneSE;
+ (_Bool)isiPhone6sp;
+ (_Bool)isiPhone6s;
+ (_Bool)isiPhone;
+ (id)osKernelVersion;
+ (id)DCache;
+ (id)DMemory;
+ (id)DCPU;
+ (id)DSystem;
+ (id)DModel;
+ (id)modelPlatform;
+ (id)getDeviceNameWithBizType:(unsigned int)arg1;
+ (id)deviceXml;
+ (long long)FreeDiskSpaceSize;
+ (long long)TotalDiskSpaceSize;
+ (id)parseStringFromBase64String:(id)arg1;
+ (id)fetchDeviceInitTime;
+ (id)fetchTnmId;
+ (id)fetchCurrentTimeZone;
+ (id)fetchModel;
+ (id)fetchSysFileInfo:(id)arg1;
+ (id)fetchDiskSize;
+ (id)fetchPhysicalMemory;
+ (id)fetchCarrierName;
+ (id)fetchMachineInfo;
+ (id)fetchSystemVersion;
+ (id)fetchDeviceName;
+ (id)fetchCurrentLanguage;
+ (id)fetchCountryCode;
+ (id)fetchBootSecTime;
+ (id)adDeviceCommonInfoSummary;
+ (_Bool)isSmallScreenSizePhone;
+ (_Bool)isiPhone6Screen;
+ (_Bool)isiPhone6pScreen;
+ (_Bool)is812hScreen;
+ (_Bool)is736hScreen;
+ (_Bool)is667hScreen;
+ (_Bool)is568hScreen;

@end

