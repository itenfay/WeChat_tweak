//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIWindow.h>

@interface KindaWindow : UIWindow
{
}

+ (id)shareInstance;
- (void)keyboardDidHide;
- (void)keyboardWillHide;
- (void)keyboardDidShow;
- (void)keyboardWillShow;
- (void)didResignKey;
- (void)didBecomeKey;
- (void)didBecomeHidden;
- (void)didBecomeVisible;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)init;

@end

