//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMKPatternLockViewEndWithPatternCallback, MMKPatternLockViewOnInputInvalidPatternCallback;

@protocol MMKPatternLockView <MMKView>
- (void)setOnInputInvalidPatternCallback:(MMKPatternLockViewOnInputInvalidPatternCallback *)arg1;
- (void)setEndWithPatternCallback:(MMKPatternLockViewEndWithPatternCallback *)arg1;
- (void)setEnableInput:(_Bool)arg1;
- (void)resetPatternView;
- (void)onVerifyPatternFail;
- (void)onVerifyPatternOK;
- (int)getViewHeight;
- (int)getViewWidth;
@end

