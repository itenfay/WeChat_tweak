//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupInputView, MMFinderLiveTaskId, MMUILabel, NSString, UIButton, UIView;

@interface MMFinderLiveFansGroupNameModifyPanel
{
    _Bool _isKeyBoardShow;
    NSString *_inputText;
    CDUnknownBlockType _fansGroupNameModifiedCallback;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMFinderLiveFansGroupInputView *_inputView;
    MMUILabel *_fansGroupInputTipLabel;
    UIButton *_modifyButton;
    double _keyBoardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double keyBoardHeight; // @synthesize keyBoardHeight=_keyBoardHeight;
@property(nonatomic) _Bool isKeyBoardShow; // @synthesize isKeyBoardShow=_isKeyBoardShow;
@property(retain, nonatomic) UIButton *modifyButton; // @synthesize modifyButton=_modifyButton;
@property(retain, nonatomic) MMUILabel *fansGroupInputTipLabel; // @synthesize fansGroupInputTipLabel=_fansGroupInputTipLabel;
@property(retain, nonatomic) MMFinderLiveFansGroupInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType fansGroupNameModifiedCallback; // @synthesize fansGroupNameModifiedCallback=_fansGroupNameModifiedCallback;
@property(retain, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
- (void)makeInputBecomeFirstResponder;
- (_Bool)getModifyButtonEnable;
- (void)updateFansGroupName;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onModifyButtonClicked:(id)arg1;
- (void)updateDetailViewFrame;
- (void)updateModifyButtonOrigin;
- (double)getMaxPanelHeight;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutModifyButton;
- (void)layoutFansGroupInputTipLabel;
- (void)layoutInputView;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)initNotifications;
- (id)initWithTaskId:(id)arg1;

@end

