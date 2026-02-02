//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJMovieTextEditViewModel, MJMovieTextSuggestionView, MJPageView, MJPublisherInspectorContainerView, MMGrowTextView, MMUIButton, MMUITextView, NSString, UIView;
@protocol MJMovieTextEditInspectorDelegate;

@interface MJMovieTextEditInspector : UIViewController
{
    _Bool _shouldShowSubTextViews;
    _Bool _shouldShowMovieTitleSuggestions;
    _Bool _bFirstAppeared;
    _Bool _isEditingSubText;
    _Bool _isUsingSuggestion;
    _Bool _isShowingKeyboard;
    id <MJMovieTextEditInspectorDelegate> _delegate;
    MJMovieTextEditViewModel *_viewModel;
    MJPublisherInspectorContainerView *_containerView;
    UIView *_inputContainerView;
    MMGrowTextView *_growTextView;
    MMGrowTextView *_growSubTextView;
    MMUITextView *_showingTextView;
    MMUITextView *_showingSubTextView;
    MMUIButton *_doneBtn;
    MMUIButton *_deleteBtn;
    MJPageView *_pageView;
    MJMovieTextSuggestionView *_suggestionCollectionView;
    NSString *_prevTextUnmarked;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingKeyboard; // @synthesize isShowingKeyboard=_isShowingKeyboard;
@property(nonatomic) _Bool isUsingSuggestion; // @synthesize isUsingSuggestion=_isUsingSuggestion;
@property(nonatomic) _Bool isEditingSubText; // @synthesize isEditingSubText=_isEditingSubText;
@property(nonatomic) _Bool bFirstAppeared; // @synthesize bFirstAppeared=_bFirstAppeared;
@property(retain, nonatomic) NSString *prevTextUnmarked; // @synthesize prevTextUnmarked=_prevTextUnmarked;
@property(retain, nonatomic) MJMovieTextSuggestionView *suggestionCollectionView; // @synthesize suggestionCollectionView=_suggestionCollectionView;
@property(retain, nonatomic) MJPageView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) MMUIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) MMUIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) MMUITextView *showingSubTextView; // @synthesize showingSubTextView=_showingSubTextView;
@property(retain, nonatomic) MMUITextView *showingTextView; // @synthesize showingTextView=_showingTextView;
@property(retain, nonatomic) MMGrowTextView *growSubTextView; // @synthesize growSubTextView=_growSubTextView;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(retain, nonatomic) MJPublisherInspectorContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool shouldShowMovieTitleSuggestions; // @synthesize shouldShowMovieTitleSuggestions=_shouldShowMovieTitleSuggestions;
@property(nonatomic) _Bool shouldShowSubTextViews; // @synthesize shouldShowSubTextViews=_shouldShowSubTextViews;
@property(retain, nonatomic) MJMovieTextEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MJMovieTextEditInspectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateDeleteBtn;
- (void)updateDoneBtn;
- (void)didTappedShowingSubTextView;
- (void)didTappedShowingTextView;
- (void)updateInputContainerViewHeight;
@property(readonly, nonatomic) NSString *textUnmarked;
- (void)stickerPicker:(id)arg1 didChangeSelection:(id)arg2 atIndex:(long long)arg3;
- (void)styleEditVC:(id)arg1 didEndChangeMaterialWitDataType:(unsigned long long)arg2;
- (void)styleEditVC:(id)arg1 didSelectAnimPreset:(id)arg2;
- (void)styleEditVC:(id)arg1 didSelectedColor:(id)arg2;
- (void)styleEditVC:(id)arg1 didSelectedFont:(id)arg2;
- (void)styleEditVC:(id)arg1 didSelectedMaterial:(id)arg2;
- (void)pageView:(id)arg1 didAppearPageAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 contentItemAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 titleItemAtIndex:(long long)arg2;
- (long long)numberOfPagesInPageView:(id)arg1;
- (void)onClickTextViewSendText:(id)arg1;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)MMGrowTextViewEndEditing:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextViewExceedMaxLength:(id)arg1;
- (void)onTextViewDidChange:(id)arg1;
- (void)movieTextSuggestionCollectionView:(id)arg1 didSelectSuggestionWithTitle:(id)arg2;
- (_Bool)disMissSelf;
- (void)clickedDeleteBtn:(id)arg1;
- (void)clickedDoneBtn:(id)arg1;
- (void)textViewsResignFirstResponderIfNeeded;
- (void)textViewBecomeFirstResponder:(id)arg1;
- (void)containerDidChangeHeight;
- (void)setupInputContainer;
- (void)setupViews;
- (void)reloadSuggestions:(id)arg1;
- (void)reloadText;
- (void)clearText;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

