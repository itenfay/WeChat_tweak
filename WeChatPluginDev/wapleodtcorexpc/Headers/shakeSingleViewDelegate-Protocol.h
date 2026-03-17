//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ShakeGetItem;

@protocol shakeSingleViewDelegate <NSObject>
- (void)showHDHeadImage;
- (void)GoToSayHello:(ShakeGetItem *)arg1 andScene:(unsigned int)arg2;
- (void)onFinishShowAnimation;
@end

