//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink;

@interface FlutterTextInputViewInputAccess : UIView
{
    CADisplayLink *_displayLink;
    double _lastHeight;
    CDUnknownBlockType _onKeyboardHeightChange;
    CDUnknownBlockType _onInputViewAdded;
    CDUnknownBlockType _onInputViewRemoved;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onInputViewRemoved; // @synthesize onInputViewRemoved=_onInputViewRemoved;
@property(copy, nonatomic) CDUnknownBlockType onInputViewAdded; // @synthesize onInputViewAdded=_onInputViewAdded;
@property(copy, nonatomic) CDUnknownBlockType onKeyboardHeightChange; // @synthesize onKeyboardHeightChange=_onKeyboardHeightChange;
@property(nonatomic) double lastHeight; // @synthesize lastHeight=_lastHeight;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tick;
- (void)didMoveToWindow;

@end

