//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EditImageDeleteBarView, EditImageWidgetTool, MMTimer, NSMutableArray, NSString;
@protocol EditImageAnimatedOperationDelegate><EmoticonEmptyEditViewGestureDelegate;

@interface EmoticonEmptyEditView : UIView
{
    EditImageWidgetTool *m_highlightWidgetTool;
    UIView *m_topLayersView;
    UIView *m_movingLayersView;
    UIView *m_markView;
    NSMutableArray *m_widgetToolArray;
    unsigned long long m_topViewsCount;
    MMTimer *m_timer;
    _Bool m_tapOnly;
    EditImageDeleteBarView *_deleteBar;
    id <EditImageAnimatedOperationDelegate><EmoticonEmptyEditViewGestureDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EditImageAnimatedOperationDelegate><EmoticonEmptyEditViewGestureDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EditImageDeleteBarView *_deleteBar; // @synthesize _deleteBar;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleRotateGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)setDeleteBarHidden:(_Bool)arg1;
- (void)triggerTimer;
- (void)cancelTimer;
- (void)startTimer;
- (void)toolArrayRemoveTool:(id)arg1;
- (void)toolArrayAddTool:(id)arg1;
- (void)addNewSubview:(id)arg1;
- (_Bool)findGestureWidget:(id)arg1;
- (void)checkWidgetOutside:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addNewWidget:(id)arg1;
- (double)scrollViewZoomScale;
- (void)widgetToolBecomeFirstResponder:(id)arg1;
- (int)checkToolType;
- (void)removeSubview:(id)arg1;
- (void)updateViewIndex;
- (void)bringWidgetviewBack:(id)arg1;
- (void)bringWidgetviewToFront:(id)arg1;
- (void)endGesture:(id)arg1;
- (void)startGesture;
- (unsigned long long)widgetToolsCount;
- (id)exportEmoticonMd5List;
- (id)exportEditImageLayer;
- (void)setEditViewCornerRadius:(double)arg1;
- (void)configGestureSetting;
- (id)initWithEditViewFrame:(struct CGRect)arg1 tapOnly:(_Bool)arg2;
- (id)initWithEditViewFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

