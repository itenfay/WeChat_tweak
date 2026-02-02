//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMKCountPickerViewOnSelectCallback, NSString;

@protocol MMKCountPickerView <MMKView>
- (void)setOnSelectCallback:(MMKCountPickerViewOnSelectCallback *)arg1;
- (NSString *)getValue;
- (void)setValue:(NSString *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)setDefaultCount:(int)arg1;
@end

