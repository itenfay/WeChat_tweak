//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterTextInputView, FlutterTextInputViewAccessibilityHider, NSMutableDictionary, NSString, NSTimer, UIView, UIViewController;
@protocol FlutterIndirectScribbleDelegate, FlutterTextInputDelegate, FlutterViewResponder;

@interface FlutterTextInputPlugin : NSObject
{
    NSTimer *_enableFlutterTextInputViewAccessibilityTimer;
    id <FlutterTextInputDelegate> _textInputDelegate;
    UIViewController *_viewController;
    id <FlutterIndirectScribbleDelegate> _indirectScribbleDelegate;
    NSMutableDictionary *_scribbleElements;
    NSMutableDictionary *_autofillContext;
    FlutterTextInputView *_activeView;
    FlutterTextInputViewAccessibilityHider *_inputHider;
    id <FlutterViewResponder> _viewResponder;
    UIView *_keyboardViewContainer;
    UIView *_keyboardView;
    UIView *_cachedFirstResponder;
    double _previousPointerYPosition;
    double _pointerYVelocity;
    CDUnknownBlockType _eventSink;
    struct CGRect _keyboardRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType eventSink; // @synthesize eventSink=_eventSink;
@property(nonatomic) double pointerYVelocity; // @synthesize pointerYVelocity=_pointerYVelocity;
@property(nonatomic) double previousPointerYPosition; // @synthesize previousPointerYPosition=_previousPointerYPosition;
@property(nonatomic) struct CGRect keyboardRect; // @synthesize keyboardRect=_keyboardRect;
@property(retain, nonatomic) UIView *cachedFirstResponder; // @synthesize cachedFirstResponder=_cachedFirstResponder;
@property(retain, nonatomic) UIView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) UIView *keyboardViewContainer; // @synthesize keyboardViewContainer=_keyboardViewContainer;
@property(readonly, nonatomic) __weak id <FlutterViewResponder> viewResponder; // @synthesize viewResponder=_viewResponder;
@property(retain, nonatomic) FlutterTextInputViewAccessibilityHider *inputHider; // @synthesize inputHider=_inputHider;
@property(retain, nonatomic) FlutterTextInputView *activeView; // @synthesize activeView=_activeView;
@property(readonly, nonatomic) NSMutableDictionary *autofillContext; // @synthesize autofillContext=_autofillContext;
@property(retain, nonatomic) NSMutableDictionary *scribbleElements; // @synthesize scribbleElements=_scribbleElements;
@property(nonatomic) __weak id <FlutterIndirectScribbleDelegate> indirectScribbleDelegate; // @synthesize indirectScribbleDelegate=_indirectScribbleDelegate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) id <FlutterTextInputDelegate> textInputDelegate; // @synthesize textInputDelegate=_textInputDelegate;
- (_Bool)handlePress:(id)arg1;
- (void)resetViewResponder;
- (void)setUpIndirectScribbleInteraction:(id)arg1;
- (void)indirectScribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)indirectScribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (_Bool)indirectScribbleInteraction:(id)arg1 shouldDelayFocusForElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 focusElementIfNeeded:(id)arg2 referencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)indirectScribbleInteraction:(id)arg1 isElementFocused:(id)arg2;
- (void)updateConfig:(id)arg1;
- (void)clearTextInputClient;
- (void)setTextSelectionState:(id)arg1;
- (void)setTextInputEditingState:(id)arg1;
- (void)addToInputParentViewIfNeeded:(id)arg1;
- (void)resetAllClientIds;
- (void)changeInputViewsAutofillVisibility:(_Bool)arg1;
- (void)cleanUpViewHierarchy:(_Bool)arg1 clearText:(_Bool)arg2 delayRemoval:(_Bool)arg3;
- (id)textInputViews;
@property(readonly, nonatomic) UIView *hostView;
- (id)getOrCreateAutofillableView:(id)arg1 isPasswordAutofill:(_Bool)arg2;
- (id)updateAndShowAutofillViews:(id)arg1 focusedField:(id)arg2 isPasswordRelated:(_Bool)arg3;
- (id)createInputViewWith:(id)arg1;
- (id)keyboardHeight:(double)arg1 inputAccessoryHeight:(double)arg2;
- (id)keyboardHeight:(double)arg1;
- (void)setTextInputClient:(int)arg1 withConfiguration:(id)arg2;
- (void)setPlatformViewTextInputClient;
- (void)triggerAutofillSave:(_Bool)arg1;
- (void)hideTextInput;
- (void)enableActiveViewAccessibility;
- (void)showTextInput;
- (void)startLiveTextInput;
- (void)setSelectionRects:(id)arg1;
- (void)updateMarkedRect:(id)arg1;
- (void)setEditableSizeAndTransform:(id)arg1;
- (void)takeKeyboardScreenshotAndDisplay;
- (void)hideKeyboardWithoutAnimationAndAvoidCursorDismissUpdate;
- (void)setKeyboardContainerHeight:(double)arg1;
- (void)handlePointerMove:(double)arg1;
- (void)showKeyboardAndRemoveScreenshot;
- (void)dismissKeyboardScreenshot;
- (void)handlePointerUp:(double)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)textInputView;
- (void)removeEnableFlutterTextInputViewAccessibilityTimer;
- (void)dealloc;
- (void)handleKeyboardWillShow:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)onCancelWithArguments:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

