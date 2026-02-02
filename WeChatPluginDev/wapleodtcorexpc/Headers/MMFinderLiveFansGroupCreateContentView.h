//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveFansGroupInputView, MMUIButton, MMUILabel, NSString, RichTextView, UIImageView, UITapGestureRecognizer;

@interface MMFinderLiveFansGroupCreateContentView : UIView
{
    _Bool _isKeyBoardShow;
    CDUnknownBlockType _createCallback;
    CDUnknownBlockType _createCompletion;
    CDUnknownBlockType _closeFansGroupCreateCallback;
    CDUnknownBlockType _openFansGroupWebCallback;
    UIImageView *_fansGroupIconView;
    MMUIButton *_foldedBtn;
    MMUILabel *_fansGroupCreateTitleLabel;
    RichTextView *_fansGroupCreateSubTitleLabel;
    MMFinderLiveFansGroupInputView *_inputView;
    MMUILabel *_fansGroupInputTipLabel;
    MMUIButton *_fansGroupCreateButton;
    UITapGestureRecognizer *_closeTapGesture;
    double _keyBoardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double keyBoardHeight; // @synthesize keyBoardHeight=_keyBoardHeight;
@property(nonatomic) _Bool isKeyBoardShow; // @synthesize isKeyBoardShow=_isKeyBoardShow;
@property(retain, nonatomic) UITapGestureRecognizer *closeTapGesture; // @synthesize closeTapGesture=_closeTapGesture;
@property(retain, nonatomic) MMUIButton *fansGroupCreateButton; // @synthesize fansGroupCreateButton=_fansGroupCreateButton;
@property(retain, nonatomic) MMUILabel *fansGroupInputTipLabel; // @synthesize fansGroupInputTipLabel=_fansGroupInputTipLabel;
@property(retain, nonatomic) MMFinderLiveFansGroupInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) RichTextView *fansGroupCreateSubTitleLabel; // @synthesize fansGroupCreateSubTitleLabel=_fansGroupCreateSubTitleLabel;
@property(retain, nonatomic) MMUILabel *fansGroupCreateTitleLabel; // @synthesize fansGroupCreateTitleLabel=_fansGroupCreateTitleLabel;
@property(retain, nonatomic) MMUIButton *foldedBtn; // @synthesize foldedBtn=_foldedBtn;
@property(retain, nonatomic) UIImageView *fansGroupIconView; // @synthesize fansGroupIconView=_fansGroupIconView;
@property(copy, nonatomic) CDUnknownBlockType openFansGroupWebCallback; // @synthesize openFansGroupWebCallback=_openFansGroupWebCallback;
@property(copy, nonatomic) CDUnknownBlockType closeFansGroupCreateCallback; // @synthesize closeFansGroupCreateCallback=_closeFansGroupCreateCallback;
@property(copy, nonatomic) CDUnknownBlockType createCompletion; // @synthesize createCompletion=_createCompletion;
@property(copy, nonatomic) CDUnknownBlockType createCallback; // @synthesize createCallback=_createCallback;
- (void)reportForOpenFansGroupDetailPage;
- (void)onClickFoldedBtn;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)viewWillClose;
- (void)updateUIForKeyBoardShow:(_Bool)arg1 keyBoardHeight:(double)arg2;
- (_Bool)isSelfFirstResponder;
- (void)closeGesture:(id)arg1;
- (void)updateCloseGestureForKeyBoardShowChanged;
- (void)createFansGroupAction;
- (void)createFansGroupInfo;
- (void)updateFansGroupButtonBottom;
- (void)updateUIForKeyBoardShowChanged;
- (void)layoutFansGroupCreateButton;
- (void)layoutFansGroupInputTipLabel;
- (void)layoutInputView;
- (void)layoutFansGroupCreateSubTitleLabel;
- (void)layoutFansGroupCreateTitleLabel;
- (void)layoutFansGroupIconView;
- (void)layoutFoldedBtn;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

