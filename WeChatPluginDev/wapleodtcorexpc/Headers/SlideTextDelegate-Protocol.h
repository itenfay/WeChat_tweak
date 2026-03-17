//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SlideTextSelectModel;

@protocol SlideTextDelegate <NSObject>
- (void)onSelectedTextChanged:(SlideTextSelectModel *)arg1;
@end

