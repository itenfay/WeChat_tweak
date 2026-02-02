//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, RichTextView, UIButton;

@interface ChatRoomBaseUpgradeOpenIMViewController
{
    MMUILabel *m_topTitleLabel;
    RichTextView *m_titleTextView;
    MMUILabel *m_contentTextLabel;
    UIButton *m_iAcceptBtn;
    NSString *_m_titleText;
    NSString *_m_contentText;
    NSString *_m_topTitleText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_topTitleText; // @synthesize m_topTitleText=_m_topTitleText;
@property(retain, nonatomic) NSString *m_contentText; // @synthesize m_contentText=_m_contentText;
@property(retain, nonatomic) NSString *m_titleText; // @synthesize m_titleText=_m_titleText;
@property(retain, nonatomic) UIButton *m_iAcceptBtn; // @synthesize m_iAcceptBtn;
@property(retain, nonatomic) MMUILabel *m_contentTextLabel; // @synthesize m_contentTextLabel;
@property(retain, nonatomic) RichTextView *m_titleTextView; // @synthesize m_titleTextView;
@property(retain, nonatomic) MMUILabel *m_topTitleLabel; // @synthesize m_topTitleLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCancel;
- (void)doIAccept;
- (void)layoutIAcceptBtn;
- (void)layoutContentTextLabel;
- (void)layoutTitleTextView;
- (void)layoutTopTitleLable;
- (void)setUpNavigation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

