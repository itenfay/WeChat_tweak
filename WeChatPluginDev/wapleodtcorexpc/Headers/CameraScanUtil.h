//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraScanUtil : NSObject
{
}

+ (double)autoSwitchingCameraLensPosition;
+ (_Bool)enableScanAutoSwitchCameraWhenFocusing;
+ (id)arrLowPriorityCodePrefixs;
+ (_Bool)isOpenMultiCodeSwitch;
+ (_Bool)isScanGoodCombineEnable;
+ (_Bool)enbaleScanFailRebootAlert;
+ (unsigned long long)scanFailMaxAlertCount;
+ (double)scanFailLongTermCheckDurantion;
+ (double)scanFailShortTermCheckDurantion;
+ (_Bool)isCodeScannerQueueUpgradeQOSClass;
+ (unsigned long long)scanGoodsNcnnCloseStrangy;
+ (_Bool)isScanGoodsNotUseNcnnLibrary;
+ (_Bool)isScanGoodsNotShowTab;
+ (unsigned long long)scanCodesCropAreaType;
+ (_Bool)isScanCodesDirectOpenWhitelistLandingPage;
+ (_Bool)isScanCodesUseSmallCropArea;

@end

