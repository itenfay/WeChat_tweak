//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMHalfScreenGuideView, MMUIButton;

@protocol MMHalfScreenGuideViewDelegate <NSObject>

@optional
- (void)guideView:(MMHalfScreenGuideView *)arg1 acceptButtonDidClick:(MMUIButton *)arg2;
- (void)guideView:(MMHalfScreenGuideView *)arg1 cancelButtonDidClick:(MMUIButton *)arg2;
@end

