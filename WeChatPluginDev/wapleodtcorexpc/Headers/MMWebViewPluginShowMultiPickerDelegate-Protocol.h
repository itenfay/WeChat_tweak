//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol MMWebViewPluginShowMultiPickerDelegate <NSObject>
- (void)onMultiPickerCancelWithMsg:(NSString *)arg1;
- (void)onMultiPickerSuccessWithReustDict:(NSDictionary *)arg1;
- (void)onMultiPickerFailWithMsg:(NSString *)arg1;
@end

