//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMCursorView, MMMagnifiterView, MMRTCMenuResponder, NSArray, NSMutableArray, NSString, UIColor, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol MMRichTextCoverViewDelegate, MMRichTextSelectEventDelegate;

@interface MMRichTextCoverView : UIView
{
    _Bool _disableCursor;
    _Bool _bScrolling;
    _Bool _disableSelectAll;
    _Bool _disableForward;
    _Bool _disableCopy;
    _Bool _canBeRemoved;
    _Bool _isSceneSizeChanged;
    id <MMRichTextSelectEventDelegate> _textSelectEventDelegate;
    id <MMRichTextCoverViewDelegate> _delegate;
    UIColor *_selectedColor;
    UIColor *_cursorColor;
    NSArray *_searchKeyWords;
    MMRTCMenuResponder *_menuResponder;
    NSMutableArray *_pathRects;
    MMCursorView *_leftCursor;
    MMCursorView *_rightCursor;
    MMMagnifiterView *_magnifiterView;
    NSString *_textString;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    long long _scrollDecelerateSeq;
    CAShapeLayer *_shapeLayer;
    struct _NSRange _selectedRange;
    struct CGPoint _touchPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) long long scrollDecelerateSeq; // @synthesize scrollDecelerateSeq=_scrollDecelerateSeq;
@property(nonatomic) _Bool isSceneSizeChanged; // @synthesize isSceneSizeChanged=_isSceneSizeChanged;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSString *textString; // @synthesize textString=_textString;
@property(retain, nonatomic) MMMagnifiterView *magnifiterView; // @synthesize magnifiterView=_magnifiterView;
@property(retain, nonatomic) MMCursorView *rightCursor; // @synthesize rightCursor=_rightCursor;
@property(retain, nonatomic) MMCursorView *leftCursor; // @synthesize leftCursor=_leftCursor;
@property(retain, nonatomic) NSMutableArray *pathRects; // @synthesize pathRects=_pathRects;
@property(nonatomic) _Bool canBeRemoved; // @synthesize canBeRemoved=_canBeRemoved;
@property(nonatomic) _Bool disableCopy; // @synthesize disableCopy=_disableCopy;
@property(nonatomic) _Bool disableForward; // @synthesize disableForward=_disableForward;
@property(nonatomic) _Bool disableSelectAll; // @synthesize disableSelectAll=_disableSelectAll;
@property(nonatomic) _Bool bScrolling; // @synthesize bScrolling=_bScrolling;
@property(retain, nonatomic) MMRTCMenuResponder *menuResponder; // @synthesize menuResponder=_menuResponder;
@property(retain, nonatomic) NSArray *searchKeyWords; // @synthesize searchKeyWords=_searchKeyWords;
@property(nonatomic) _Bool disableCursor; // @synthesize disableCursor=_disableCursor;
@property(retain, nonatomic) UIColor *cursorColor; // @synthesize cursorColor=_cursorColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) __weak id <MMRichTextCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMRichTextSelectEventDelegate> textSelectEventDelegate; // @synthesize textSelectEventDelegate=_textSelectEventDelegate;
- (void)onMainSceneSizeChangedFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)onBecomeActive;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onDidEndScrolling;
- (void)scrollDown;
- (void)scrollUp;
- (void)removeMaginfierView;
- (void)removeCursor;
- (void)showCursor;
- (void)clearSelectArea;
- (id)getViewController;
- (struct _NSRange)getSelectContentRange;
- (id)getSelectContent;
- (void)resetCursor:(id)arg1;
- (struct CGRect)getSelectedRect;
- (void)showMenuWithItems:(id)arg1;
- (void)showSelectMenu;
- (void)hideMenuUI;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)CTRectContainsPointError:(struct CGRect)arg1 point:(struct CGPoint)arg2 error:(double)arg3;
- (_Bool)pointIsVisableInScreen:(struct CGPoint)arg1;
- (struct CGPoint)getLongPressSelectCenter;
- (void)drawInShapeLayer;
- (struct CGPath *)generateSelectAreaPathWithCorner;
- (void)setNeedsReloadView;
- (struct _NSRange)getSelectRange;
- (void)searchAndHighlightKeyWord:(id)arg1;
- (void)longPressAction:(id)arg1;
- (_Bool)touchPointInSelectPath:(struct CGPoint)arg1;
- (void)exitSelectState;
- (_Bool)onClickPreViewWithPoint:(struct CGPoint)arg1 DoubleClick:(_Bool)arg2;
- (void)onMenuWillHide;
- (void)onDoubleTap:(id)arg1;
- (void)onPanAction:(id)arg1;
- (void)highlightTextWithRange:(struct _NSRange)arg1 showCursor:(_Bool)arg2;
- (void)selectAllText;
- (void)selectWithRange:(struct _NSRange)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)addDoubleTapGestureRecognizer;
- (void)addLongPressGestureRecognizer;
- (void)addSingleTapGestureRecognizer;
- (void)addPanGestureRecognizer;
- (void)addGestureRecognizer;
- (void)onSingleTap:(id)arg1;
- (void)dealloc;
- (void)initShapeLayer;
- (id)initWithFrame:(struct CGRect)arg1 EventDelegate:(id)arg2 MenuResponder:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

