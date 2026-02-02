//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMIUIPage : NSObject
{
    struct Handle<std::shared_ptr<kinda::IUIPage>> _cppRefHandle;
}

+ (id)createAppUipage:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notify:(id)arg1;
- (_Bool)inVisibleOnRecently;
- (_Bool)forceShowInLightMode;
- (void)stopLoading;
- (void)startLoading:(id)arg1 block:(_Bool)arg2;
- (void)onClickAndroidBack;
- (id)getReportUrl;
- (_Bool)enableInteractivePop;
- (_Bool)useSafeAreaToLayout;
- (_Bool)fullPageMode;
- (void)keyboardWillHide;
- (void)keyboardWillShow:(float)arg1;
- (float)keyboardTopViewBottomMargin;
- (id)keyboardTopView;
- (id)defaultNavigationBarConfig;
- (void)viewDidTransitionToNewSize;
- (void)onBack;
- (void)onPause;
- (void)onResume;
- (void)onInvisible;
- (void)onVisible;
- (void)onDestroy;
- (void)onFirstLayoutFinished;
- (void)onCreate;
- (void)onCreateLayout:(id)arg1;
- (void)setPlatformDelegate:(id)arg1;
- (id)getPlatformFuncDelegate;
- (void)setPlatformFuncDelegate:(id)arg1;
- (id)initWithCpp:(const void *)arg1;

@end

