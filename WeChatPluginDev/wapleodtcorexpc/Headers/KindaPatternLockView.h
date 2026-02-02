//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKPatternLockViewEndWithPatternCallback, MMKPatternLockViewOnInputInvalidPatternCallback, MMPatternLockView, NSString;

@interface KindaPatternLockView
{
    MMPatternLockView *_lockView;
    MMKPatternLockViewEndWithPatternCallback *_callback;
    MMKPatternLockViewOnInputInvalidPatternCallback *_invalidInputCallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMKPatternLockViewOnInputInvalidPatternCallback *invalidInputCallback; // @synthesize invalidInputCallback=_invalidInputCallback;
@property(retain, nonatomic) MMKPatternLockViewEndWithPatternCallback *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) MMPatternLockView *lockView; // @synthesize lockView=_lockView;
- (_Bool)isContinueWhenlockViewResultInValid:(id)arg1;
- (void)lockView:(id)arg1 didEndWithPattern:(id)arg2;
- (void)setOnInputInvalidPatternCallback:(id)arg1;
- (void)setEndWithPatternCallback:(id)arg1;
- (void)setEnableInput:(_Bool)arg1;
- (void)resetPatternView;
- (void)onVerifyPatternFail;
- (void)onVerifyPatternOK;
- (int)getViewHeight;
- (int)getViewWidth;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

