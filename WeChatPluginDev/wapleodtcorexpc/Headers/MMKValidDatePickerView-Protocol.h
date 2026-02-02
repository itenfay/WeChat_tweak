//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMKValidDatePickerViewOnSelectCallback, NSString;

@protocol MMKValidDatePickerView <MMKView>
- (void)setOnSelectCallback:(MMKValidDatePickerViewOnSelectCallback *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (NSString *)getText;
@end

