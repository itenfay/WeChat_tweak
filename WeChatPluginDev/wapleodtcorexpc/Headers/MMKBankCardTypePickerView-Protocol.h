//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMBankCardType, MMKBankCardTypePickerViewOnSelectCallback, NSArray, NSString;

@protocol MMKBankCardTypePickerView <MMKView>
- (void)setOnSelectCallback:(MMKBankCardTypePickerViewOnSelectCallback *)arg1;
- (NSString *)getValue;
- (void)setValue:(NSString *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)setSelectedBankCardType:(MMBankCardType *)arg1;
- (void)setBankCardType:(NSArray *)arg1;
@end

