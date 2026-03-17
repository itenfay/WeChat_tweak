//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "EmoticonFinderDesignerDataCenterDelegate-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"

@class NSString, UINavigationController;

@protocol EmoticonFinderDesignerContentLogicDelegate <MMUIViewControllerDelegate, EmoticonFinderDesignerDataCenterDelegate>

@optional
- (unsigned long long)HalfScreenExtrance;
- (unsigned long long)IPSetCellExtrance;
- (unsigned long long)PackCellExtrance;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)DetailVCEntryScene;
- (NSString *)enterTimeStr;
- (NSString *)sdkRequestID;
- (unsigned long long)sdkPageID;
- (NSString *)sdkPageName;
- (_Bool)needsModifyPageInfo;
- (_Bool)needsSDKReport;
- (_Bool)isAuthor;
- (_Bool)isStoreStaticsNeeded;
- (_Bool)isStoreCellNeedHideBtn;
- (_Bool)isStoreCellNeedBottomLineFor:(unsigned long long)arg1;
- (UINavigationController *)getNavController;
@end

