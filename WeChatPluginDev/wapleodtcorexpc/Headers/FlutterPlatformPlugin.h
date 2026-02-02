//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UITextField;

@interface FlutterPlatformPlugin : NSObject
{
    WeakNSObject_ed46922b _engine;
    UITextField *_textField;
    _Bool _enableViewControllerBasedStatusBarAppearance;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableViewControllerBasedStatusBarAppearance; // @synthesize enableViewControllerBasedStatusBarAppearance=_enableViewControllerBasedStatusBarAppearance;
- (void)dealloc;
- (id)textField;
- (void)showLookUpViewController:(id)arg1;
- (_Bool)isLiveTextInputAvailable;
- (id)clipboardHasStrings;
- (void)setClipboardData:(id)arg1;
- (id)getClipboardData:(id)arg1;
- (void)popSystemNavigator:(_Bool)arg1;
- (void)setSystemChromeSystemUIOverlayStyle:(id)arg1;
- (void)restoreSystemChromeSystemUIOverlays;
- (void)setSystemChromeEnabledSystemUIMode:(id)arg1;
- (void)setSystemChromeEnabledSystemUIOverlays:(id)arg1;
- (void)setSystemChromeApplicationSwitcherDescription:(id)arg1;
- (void)setSystemChromePreferredOrientations:(id)arg1;
- (void)vibrateHapticFeedback:(id)arg1;
- (void)playSystemSound:(id)arg1;
- (void)searchWeb:(id)arg1;
- (void)showShareViewController:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)initWithEngine:(WeakNSObject_ed46922b)arg1;

@end

