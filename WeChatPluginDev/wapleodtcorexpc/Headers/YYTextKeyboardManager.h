//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable, UIView, UIWindow;

@interface YYTextKeyboardManager : NSObject
{
    NSHashTable *_observers;
    struct CGRect _fromFrame;
    _Bool _fromVisible;
    long long _fromOrientation;
    struct CGRect _notificationFromFrame;
    struct CGRect _notificationToFrame;
    double _notificationDuration;
    long long _notificationCurve;
    _Bool _hasNotification;
    struct CGRect _observedToFrame;
    _Bool _hasObservedChange;
    _Bool _lastIsNotification;
}

+ (void)load;
+ (id)defaultManager;
- (void).cxx_destruct;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (void)_notifyAllObservers;
- (void)_keyboardFrameChanged:(id)arg1;
- (void)_keyboardFrameDidChangeNotification:(id)arg1;
- (void)_keyboardFrameWillChangeNotification:(id)arg1;
- (id)_getKeyboardViewFromWindow:(id)arg1;
- (double)_systemVersion;
@property(readonly, nonatomic) struct CGRect keyboardFrame;
@property(readonly, nonatomic, getter=isKeyboardVisible) _Bool keyboardVisible;
@property(readonly, nonatomic) UIView *keyboardView;
@property(readonly, nonatomic) UIWindow *keyboardWindow;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)_initFrameObserver;
- (id)_init;
- (id)init;

@end

