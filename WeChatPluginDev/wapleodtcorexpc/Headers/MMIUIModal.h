//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMIUIModal : NSObject
{
    struct Handle<std::shared_ptr<kinda::IUIModal>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)inVisibleOnRecently;
- (float)animationCutLinePosition;
- (_Bool)forceShowInLightMode;
- (_Bool)useImmediateKeyboardAnimation;
- (_Bool)useKeyboardCoverMode;
- (_Bool)usePanelModalMode;
- (void)onFirstRenderFinish;
- (id)navigationBarColor;
- (id)statusbarColor;
- (_Bool)isShowAndroidCenterPadding;
- (id)getReportUrl;
- (void)onClickAndroidBack;
- (void)onDestroy;
- (void)onModalEnterForeground;
- (void)onModalEnterBackground;
- (void)viewDidTransitionToNewSize;
- (void)keyboardWillHide;
- (void)keyboardWillShow:(float)arg1;
- (void)setPlatformDelegate:(id)arg1;
- (id)getFuncDelegate;
- (void)setFuncDelegate:(id)arg1;
- (void)onCreateLayout:(id)arg1;
- (id)initWithCpp:(const void *)arg1;

@end

