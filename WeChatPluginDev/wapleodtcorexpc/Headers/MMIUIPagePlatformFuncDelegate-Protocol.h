//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMDynamicColor, MMViewReportStruct, MMVoidBoolI32Callback, MMVoidCallback, NSString;

@protocol MMIUIPagePlatformFuncDelegate <NSObject>
- (void)triggerReport:(long long)arg1 customKey:(NSString *)arg2;
- (void)addReportInfo:(MMViewReportStruct *)arg1;
- (void)setWindowSoftInputAdjustMode:(long long)arg1;
- (void)stopLoading;
- (void)startLoading:(NSString *)arg1 block:(_Bool)arg2;
- (void)endIgnoringInteractionEvents;
- (void)beginIgnoringInteractionEvents;
- (void)setKeyBoardShowCallbackImpl:(MMVoidBoolI32Callback *)arg1;
- (void)closeUI:(_Bool)arg1;
- (void)endEditing;
- (void)setBackgroundColor:(MMDynamicColor *)arg1;
- (void)refreshNavigationBar;
- (void)setTopRightBtnTitle:(NSString *)arg1 color:(NSString *)arg2;
- (void)setTopRightBtnImage:(NSString *)arg1;
- (void)setTopRightCallbackImpl:(MMVoidCallback *)arg1;
- (void)setTopLeftBackBtnCallbackImpl:(MMVoidCallback *)arg1;
- (NSString *)getTitle;
- (void)setTitle:(NSString *)arg1;
@end

