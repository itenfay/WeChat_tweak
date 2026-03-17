//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJPrecisionPickerView;

@protocol MJPrecisionPickerViewDataSource <NSObject>
- (id)precisionPickerView:(MJPrecisionPickerView *)arg1 contentForValue:(long long)arg2;

@optional
- (struct CGSize)precisionPickerView:(MJPrecisionPickerView *)arg1 contentViewSizeForValue:(long long)arg2;
- (id)precisionPickerView:(MJPrecisionPickerView *)arg1 labelForValue:(long long)arg2;
@end

