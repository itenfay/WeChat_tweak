//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UITapGestureRecognizer;

@interface MagicEmojiTouchProxyBackgroundView : UIView
{
    NSString *_sessionId;
    CDUnknownBlockType _tapEntityHandler;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(copy, nonatomic) CDUnknownBlockType tapEntityHandler; // @synthesize tapEntityHandler=_tapEntityHandler;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onTapView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

