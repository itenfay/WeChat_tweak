//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class UIView;

@interface _YYTextKeyboardViewFrameObserver : NSObject
{
    UIView *_keyboardView;
    CDUnknownBlockType _notifyBlock;
}

+ (id)observerForView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType notifyBlock; // @synthesize notifyBlock=_notifyBlock;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)addFrameObserver;
- (void)removeFrameObserver;
- (void)addToKeyboardView:(id)arg1;

@end
