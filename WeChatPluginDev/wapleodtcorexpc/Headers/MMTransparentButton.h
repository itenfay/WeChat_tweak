//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILongPressGestureRecognizer;
@protocol MMTransparentButtonDelegate;

@interface MMTransparentButton
{
    _Bool m_bScale;
    id <MMTransparentButtonDelegate> _delegate;
    UILongPressGestureRecognizer *_customLongPressGesture;
    struct CGPoint _m_pTouchLocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *customLongPressGesture; // @synthesize customLongPressGesture=_customLongPressGesture;
@property(nonatomic) struct CGPoint m_pTouchLocation; // @synthesize m_pTouchLocation=_m_pTouchLocation;
@property(nonatomic) __weak id <MMTransparentButtonDelegate> m_delegate; // @synthesize m_delegate=_delegate;
@property(nonatomic) _Bool m_bScale; // @synthesize m_bScale;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)recordTouchLocationwithEvent:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

