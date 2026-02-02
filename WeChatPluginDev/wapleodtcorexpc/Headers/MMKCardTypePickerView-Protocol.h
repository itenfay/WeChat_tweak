//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMKCardTypePickerViewOnSelectCallback, NSArray, NSString;

@protocol MMKCardTypePickerView <MMKView>
- (void)setOnSelectCallback:(MMKCardTypePickerViewOnSelectCallback *)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)setTextSize:(float)arg1;
- (void)setHint:(NSString *)arg1;
- (void)select:(int)arg1;
- (void)setOptions:(NSArray *)arg1;
@end

