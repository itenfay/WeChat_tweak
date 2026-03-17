//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WAWebViewPluginPickerDelegate <NSObject>
- (void)onDateTimeConfirm:(NSString *)arg1;
- (void)onCancel;
- (void)onConfirm:(NSArray *)arg1 values:(NSArray *)arg2;
@end

