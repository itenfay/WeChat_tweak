//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJPrecisionPickerView, NSString;

@protocol MJPrecisionPickerViewDelegate <NSObject>

@optional
- (NSString *)precisionPickerView:(MJPrecisionPickerView *)arg1 contentsGravityForValue:(long long)arg2;
- (_Bool)precisionPickerView:(MJPrecisionPickerView *)arg1 shouldAutoSnapForValue:(long long)arg2;
- (void)precisionPickerView:(MJPrecisionPickerView *)arg1 didScrollAcrossValue:(long long)arg2;
- (void)precisionPickerView:(MJPrecisionPickerView *)arg1 didSelectValue:(long long)arg2;
@end

