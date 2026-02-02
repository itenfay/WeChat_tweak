//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAPlateItem;

@protocol WAPlateInputViewDelegate <NSObject>
- (void)onInputDisableFinish;
- (void)OnInputCanFinish:(WAPlateItem *)arg1;
@end

