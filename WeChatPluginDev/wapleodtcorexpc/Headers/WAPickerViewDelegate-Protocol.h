//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WAPickerViewDelegate <NSObject>
- (void)onSelect:(long long)arg1 row:(long long)arg2;
- (void)onConfirm:(NSArray *)arg1 values:(NSArray *)arg2;
- (void)onCancel;
@end

