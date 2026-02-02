//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UIScreenEdgePanGestureRecognizer, UIScrollView, WAMenuPopInteractiveTransition;
@protocol IWARichTextViewHelper;

@interface WAAuthorizeInfoPageSheet
{
    CDUnknownBlockType _openUrlAction;
    double _pageSheetHeight;
    UIButton *_backButton;
    UILabel *_titleLabel;
    id <IWARichTextViewHelper> _richTextHelper;
    UIScrollView *_scrollView;
    NSString *_title;
    NSString *_info;
    WAMenuPopInteractiveTransition *_popIT;
    UIScreenEdgePanGestureRecognizer *_panGR;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *panGR; // @synthesize panGR=_panGR;
@property(retain, nonatomic) WAMenuPopInteractiveTransition *popIT; // @synthesize popIT=_popIT;
@property(readonly, nonatomic) NSString *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) id <IWARichTextViewHelper> richTextHelper; // @synthesize richTextHelper=_richTextHelper;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) double pageSheetHeight; // @synthesize pageSheetHeight=_pageSheetHeight;
@property(copy, nonatomic) CDUnknownBlockType openUrlAction; // @synthesize openUrlAction=_openUrlAction;
- (void)onLinkClicked:(id)arg1 linkRect:(struct CGRect)arg2;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (void)backButtonClick:(id)arg1;
- (double)contentHeight;
- (void)layoutSubViews;
- (void)_setupUI;
- (id)initWithInfo:(id)arg1;
- (id)initWithTitle:(id)arg1 info:(id)arg2;
- (id)initWithTitle:(id)arg1 info:(id)arg2 height:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

