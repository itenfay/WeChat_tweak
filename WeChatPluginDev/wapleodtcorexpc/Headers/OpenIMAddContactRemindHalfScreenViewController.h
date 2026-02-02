//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, MMOpenIMAddContactRemindViewView, MMUIButton, MMUILabel, MMUIScrollView, MMUIView, NSString, UIButton;
@protocol OpenIMAddContactRemindDelegate;

@interface OpenIMAddContactRemindHalfScreenViewController
{
    UIButton *m_makeSureButton;
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMHeadImageView *m_headImageView;
    MMUILabel *m_descContentView;
    MMUIScrollView *m_contentScrollView;
    MMUILabel *m_nickNameTextLabel;
    MMUILabel *m_nickNamePostTextLabel;
    double m_contentViewTop;
    MMOpenIMAddContactRemindViewView *m_maskView;
    double m_descContentViewHeight;
    CContact *m_contact;
    MMUIButton *_closeButton;
    NSString *_m_nsDescContent;
    id <OpenIMAddContactRemindDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <OpenIMAddContactRemindDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_nsDescContent; // @synthesize m_nsDescContent=_m_nsDescContent;
- (void)setCloseButton:(id)arg1;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (id)navigationBarBackgroundColor;
- (void)OnMakeSureButtionClick;
- (void)onClickClose:(id)arg1;
- (void)layoutMakeSureButton;
- (void)layoutMakeMaskView;
- (void)layoutDescContentView;
- (void)layoutNickNamePostTextLabel;
- (void)layoutNickNameTextLabel;
- (void)layoutHeadView;
- (void)layoutTitleView;
- (void)layoutContentScrollView;
- (void)layoutContentView;
- (void)layoutView;
- (void)layoutHalfScreenView;
- (id)closeButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

