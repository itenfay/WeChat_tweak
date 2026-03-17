//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayPickerViewDelegate <NSObject>

@optional
- (void)WCPayPickerViewDidChooseRowTitle:(NSString *)arg1 atSessionTitle:(NSString *)arg2;
- (void)WCPayPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)WCPayPickerViewDidCancel;
@end

