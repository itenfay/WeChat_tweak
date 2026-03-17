//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAAlertDialog;

@protocol WAAlertDialogDelegate <NSObject>

@optional
- (void)onCancel:(WAAlertDialog *)arg1;
- (void)onConfirm:(WAAlertDialog *)arg1;
@end

