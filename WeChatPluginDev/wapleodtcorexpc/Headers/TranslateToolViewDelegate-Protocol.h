//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMGrowTextView, NSString, UIViewController;

@protocol TranslateToolViewDelegate <NSObject>
- (UIViewController *)getViewController;
- (MMGrowTextView *)getGrowTextView;
- (void)cleanPlaceHolder;
- (void)onClickCloseTranslateTool;
- (void)onClickUseTranslateResult:(NSString *)arg1;
@end

