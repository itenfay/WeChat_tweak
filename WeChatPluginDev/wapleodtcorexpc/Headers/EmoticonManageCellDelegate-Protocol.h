//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonManageDataObject, NSString;

@protocol EmoticonManageCellDelegate <NSObject>
- (_Bool)isEmoticonManageCellDeleteMode;

@optional
- (void)onUninstallIPSetWithObj:(EmoticonManageDataObject *)arg1;
- (void)onUnstallButtonClickWithPid:(NSString *)arg1;
@end

