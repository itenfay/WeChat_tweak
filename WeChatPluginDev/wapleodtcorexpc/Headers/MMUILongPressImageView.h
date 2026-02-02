//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIFastTapGestureRecognizer, NSString, UIImageView, UILongPressGestureRecognizer;
@protocol LongPressImageViewDelegate;

@interface MMUILongPressImageView
{
    _Bool _enableHighlighted;
    _Bool _showsTouchWhenHighlighted;
    _Bool _wxHighlighted;
    _Bool _wxHighlightedImageDirtyMark;
    id <LongPressImageViewDelegate> _delegate;
    unsigned long long _supportedActions;
    NSString *_contextString;
    MMUIFastTapGestureRecognizer *_singleTapGesture;
    MMUIFastTapGestureRecognizer *_doubleTapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    UIImageView *_wxHighlightedImageView;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool wxHighlightedImageDirtyMark; // @synthesize wxHighlightedImageDirtyMark=_wxHighlightedImageDirtyMark;
@property(retain, nonatomic) UIImageView *wxHighlightedImageView; // @synthesize wxHighlightedImageView=_wxHighlightedImageView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) MMUIFastTapGestureRecognizer *doubleTapGesture; // @synthesize doubleTapGesture=_doubleTapGesture;
@property(retain, nonatomic) MMUIFastTapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
@property(retain, nonatomic) NSString *contextString; // @synthesize contextString=_contextString;
@property(nonatomic, getter=isWxHighlighted) _Bool wxHighlighted; // @synthesize wxHighlighted=_wxHighlighted;
@property(nonatomic) _Bool showsTouchWhenHighlighted; // @synthesize showsTouchWhenHighlighted=_showsTouchWhenHighlighted;
@property(nonatomic) _Bool enableHighlighted; // @synthesize enableHighlighted=_enableHighlighted;
@property(nonatomic) unsigned long long supportedActions; // @synthesize supportedActions=_supportedActions;
@property(nonatomic) __weak id <LongPressImageViewDelegate> m_delegate; // @synthesize m_delegate=_delegate;
- (id)getContextString;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)tapGestureRecognizerFinished:(id)arg1;
- (void)tapGestureRecognizerBegan:(id)arg1 tapCount:(unsigned long long)arg2;
- (void)cancelAllGestures;
- (void)handleLongPress:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)setImage:(id)arg1;
- (void)initGestures;
- (id)init;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

