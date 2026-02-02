//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, CContact, MMCPLabel, MMHeadImageView, MMImageView, MMUIImageView, NSString, SearchMatchTip, TextStateItemView, UIButton, UIImageView, UILabel;
@protocol ContactsItemViewDelegate;

@interface ContactsItemView
{
    MMHeadImageView *m_headImage;
    MMCPLabel *m_nickNameLabel;
    UILabel *m_labelNamePostfix;
    MMImageView *m_iconNamePostfix;
    AttributeLabel *m_descLabel;
    UIButton *m_rightButton;
    UILabel *m_rightLabel;
    id m_data;
    id <ContactsItemViewDelegate> m_delegate;
    CContact *m_contact;
    SearchMatchTip *m_matchTip;
    NSString *m_cpKeyForNickname;
    _Bool m_isNicknameUnsafe;
    TextStateItemView *m_textStateView;
    MMUIImageView *m_rightViewPrefixIcon;
    _Bool m_bShowHeadImage;
    _Bool m_bShowUserDescription;
    _Bool m_bShowSearchResult;
    _Bool _m_bShowChatRoomCount;
    _Bool _m_bHideOpenIMDesc;
    _Bool _m_bShowOpenIMPostfixIcon;
    _Bool _m_bShowOpenIMPostfixIconBeforeNamePostfixLabel;
    _Bool _m_bShowMobileDisplayName;
    _Bool _bShowTextState;
    _Bool _bShowRightArrow;
    _Bool _bUseMultiLineDescLabel;
    _Bool _bDescLabelIsExpand;
    _Bool _bShowOpenIMKeFuDesc;
    double m_nickNameDiffWidth;
    double _descLabelMarginRight;
    UIImageView *_arrowImageView;
    UIButton *_descExpandButton;
    double _cachedNickNameMinMaxWidth;
    NSString *_postfixText;
    NSString *_truncatedPostfixText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *truncatedPostfixText; // @synthesize truncatedPostfixText=_truncatedPostfixText;
@property(retain, nonatomic) NSString *postfixText; // @synthesize postfixText=_postfixText;
@property(nonatomic) double cachedNickNameMinMaxWidth; // @synthesize cachedNickNameMinMaxWidth=_cachedNickNameMinMaxWidth;
@property(retain, nonatomic) UIButton *descExpandButton; // @synthesize descExpandButton=_descExpandButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) _Bool bShowOpenIMKeFuDesc; // @synthesize bShowOpenIMKeFuDesc=_bShowOpenIMKeFuDesc;
@property(nonatomic) double descLabelMarginRight; // @synthesize descLabelMarginRight=_descLabelMarginRight;
@property(nonatomic) _Bool bDescLabelIsExpand; // @synthesize bDescLabelIsExpand=_bDescLabelIsExpand;
@property(nonatomic) _Bool bUseMultiLineDescLabel; // @synthesize bUseMultiLineDescLabel=_bUseMultiLineDescLabel;
@property(nonatomic) _Bool bShowRightArrow; // @synthesize bShowRightArrow=_bShowRightArrow;
@property(nonatomic) _Bool bShowTextState; // @synthesize bShowTextState=_bShowTextState;
@property(nonatomic) _Bool m_bShowMobileDisplayName; // @synthesize m_bShowMobileDisplayName=_m_bShowMobileDisplayName;
@property(nonatomic) _Bool m_bShowOpenIMPostfixIconBeforeNamePostfixLabel; // @synthesize m_bShowOpenIMPostfixIconBeforeNamePostfixLabel=_m_bShowOpenIMPostfixIconBeforeNamePostfixLabel;
@property(nonatomic) _Bool m_bShowOpenIMPostfixIcon; // @synthesize m_bShowOpenIMPostfixIcon=_m_bShowOpenIMPostfixIcon;
@property(nonatomic) _Bool m_bHideOpenIMDesc; // @synthesize m_bHideOpenIMDesc=_m_bHideOpenIMDesc;
@property(nonatomic) _Bool m_bShowChatRoomCount; // @synthesize m_bShowChatRoomCount=_m_bShowChatRoomCount;
@property(retain, nonatomic) SearchMatchTip *m_matchTip; // @synthesize m_matchTip;
@property(nonatomic) double m_nickNameDiffWidth; // @synthesize m_nickNameDiffWidth;
@property(nonatomic) _Bool m_bShowSearchResult; // @synthesize m_bShowSearchResult;
@property(nonatomic) _Bool m_bShowUserDescription; // @synthesize m_bShowUserDescription;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) id m_data; // @synthesize m_data;
@property(nonatomic) __weak id <ContactsItemViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMHeadImageView *m_headImage; // @synthesize m_headImage;
@property(retain, nonatomic) UILabel *m_nickNameLabel; // @synthesize m_nickNameLabel;
@property(nonatomic) _Bool m_bShowHeadImage; // @synthesize m_bShowHeadImage;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (void)initRightViewPrefixIcon:(id)arg1;
- (void)initDescLabel:(id)arg1;
- (void)onTapExpandButton:(id)arg1;
- (void)initDescLabel:(id)arg1 color:(id)arg2;
- (void)initGreenRightButton:(id)arg1;
- (void)initGreyRightButton:(id)arg1;
- (void)initRightButton:(id)arg1 title:(id)arg2;
- (void)onRightBtnAction;
- (void)initRightLabel:(id)arg1;
- (void)initRightLabel:(id)arg1 color:(id)arg2 width:(double)arg3;
- (void)initNickNameLabel:(id)arg1;
- (double)calNameMaxWidth;
- (void)updateMatchLabel;
- (void)initNamePostfixIcon;
- (void)initNamePostfixLabel:(id)arg1;
- (void)initNamePostfixLabel:(id)arg1 color:(id)arg2 truncatedText:(id)arg3;
- (void)initNamePostfixLabel:(id)arg1 color:(id)arg2;
- (void)initView:(id)arg1 showChatRoomName:(id)arg2;
- (void)initView:(id)arg1;
- (_Bool)isShowMobileName:(id)arg1 mobileName:(id)arg2;
- (void)initHeadImageForContact:(id)arg1;
- (void)initHeadImage:(id)arg1;
- (void)initHeadImage:(id)arg1 withUrl:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

