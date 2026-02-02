//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIButton, UIImageView, UILabel, UIView, WCUITextField;
@protocol MMLiveGameJoinTeamSettingCoinValueViewDelegate, MMLiveGameJoinTeamSettingViewDelegate;

@interface MMLiveGameJoinTeamSettingCoinValueView
{
    _Bool _finished;
    _Bool _dismissForHelp;
    unsigned int _max;
    id <MMLiveGameJoinTeamSettingViewDelegate> _operationDelegate;
    id <MMLiveGameJoinTeamSettingCoinValueViewDelegate> _delegate;
    UIView *_contentView;
    UIView *_topAreaView;
    MMUIButton *_leftButton;
    MMUIButton *_rightButton;
    MMUILabel *_titleLabel;
    UIView *_textFieldContainer;
    UIImageView *_textFieldCoinIcon;
    WCUITextField *_textField;
    UILabel *_maxNoteLabel;
    UIButton *_finishButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dismissForHelp; // @synthesize dismissForHelp=_dismissForHelp;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(nonatomic) unsigned int max; // @synthesize max=_max;
@property(retain, nonatomic) UILabel *maxNoteLabel; // @synthesize maxNoteLabel=_maxNoteLabel;
@property(retain, nonatomic) WCUITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *textFieldCoinIcon; // @synthesize textFieldCoinIcon=_textFieldCoinIcon;
@property(retain, nonatomic) UIView *textFieldContainer; // @synthesize textFieldContainer=_textFieldContainer;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MMUIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *topAreaView; // @synthesize topAreaView=_topAreaView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMLiveGameJoinTeamSettingCoinValueViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMLiveGameJoinTeamSettingViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)onMMLiveGameJoinTeamHelpViewBePoped;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboradWillShow:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)finishButtonAction;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)onViewPushed;
- (void)layoutUI;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 max:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

