//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaUIView, MMBadgeView, NSString, RichTextView, UIImageView, UILabel, UIView, WCPayCss;
@protocol WCPayTransferPhoneEntryPageDelegate;

@interface WCPayTransferPhoneEntryPage
{
    id <WCPayTransferPhoneEntryPageDelegate> _m_delegate;
    WCPayCss *_css;
    UIView *_containerView;
    UIView *_headerView;
    UILabel *_mainTitle;
    UIView *_mainTitleLine;
    KindaUIView *_toBankContainer;
    UIImageView *_toBankIcon;
    UIView *_toBankDescContainer;
    UIView *_toBankTitleContainer;
    UILabel *_toBankTitle;
    MMBadgeView *_toBankBadgeView;
    UILabel *_toBankDesc;
    UIImageView *_toBankArrow;
    UIView *_toBankLine;
    KindaUIView *_toPhoneContainer;
    UIImageView *_toPhoneIcon;
    UIView *_toPhoneDescContainer;
    UILabel *_toPhoneTitle;
    UIView *_toPhoneTitleContainer;
    MMBadgeView *_toPhoneBadgeView;
    UILabel *_toPhoneDesc;
    UIImageView *_toPhoneArrow;
    UIView *_toPhoneLine;
    UIView *_bottomContainer;
    RichTextView *_setUpButton;
}

- (void).cxx_destruct;
@property(retain) RichTextView *setUpButton; // @synthesize setUpButton=_setUpButton;
@property(retain) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain) UIView *toPhoneLine; // @synthesize toPhoneLine=_toPhoneLine;
@property(retain) UIImageView *toPhoneArrow; // @synthesize toPhoneArrow=_toPhoneArrow;
@property(retain) UILabel *toPhoneDesc; // @synthesize toPhoneDesc=_toPhoneDesc;
@property(retain) MMBadgeView *toPhoneBadgeView; // @synthesize toPhoneBadgeView=_toPhoneBadgeView;
@property(retain) UIView *toPhoneTitleContainer; // @synthesize toPhoneTitleContainer=_toPhoneTitleContainer;
@property(retain) UILabel *toPhoneTitle; // @synthesize toPhoneTitle=_toPhoneTitle;
@property(retain) UIView *toPhoneDescContainer; // @synthesize toPhoneDescContainer=_toPhoneDescContainer;
@property(retain) UIImageView *toPhoneIcon; // @synthesize toPhoneIcon=_toPhoneIcon;
@property(retain) KindaUIView *toPhoneContainer; // @synthesize toPhoneContainer=_toPhoneContainer;
@property(retain) UIView *toBankLine; // @synthesize toBankLine=_toBankLine;
@property(retain) UIImageView *toBankArrow; // @synthesize toBankArrow=_toBankArrow;
@property(retain) UILabel *toBankDesc; // @synthesize toBankDesc=_toBankDesc;
@property(retain) MMBadgeView *toBankBadgeView; // @synthesize toBankBadgeView=_toBankBadgeView;
@property(retain) UILabel *toBankTitle; // @synthesize toBankTitle=_toBankTitle;
@property(retain) UIView *toBankTitleContainer; // @synthesize toBankTitleContainer=_toBankTitleContainer;
@property(retain) UIView *toBankDescContainer; // @synthesize toBankDescContainer=_toBankDescContainer;
@property(retain) UIImageView *toBankIcon; // @synthesize toBankIcon=_toBankIcon;
@property(retain) KindaUIView *toBankContainer; // @synthesize toBankContainer=_toBankContainer;
@property(retain) UIView *mainTitleLine; // @synthesize mainTitleLine=_mainTitleLine;
@property(retain) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property __weak id <WCPayTransferPhoneEntryPageDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onTapSetUp;
- (void)onTapToPhone;
- (void)onTapToBank;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateSetUpButton;
- (void)updateBottomContainer;
- (void)updateToPhoneLine;
- (void)updateToPhoneArrow;
- (void)updateToPhoneDesc;
- (void)updateToPhoneTitle;
- (void)updateToPhoneBadge;
- (void)updateToPhoneTitleContainer;
- (void)updateToPhoneDescContainer;
- (void)updateToPhoneIcon;
- (void)updateToPhoneContainer;
- (void)updateToBankLine;
- (void)updateToBankArrow;
- (void)updateToBankDesc;
- (void)updateToBankBadge;
- (void)updateToBankTitle;
- (void)updateToBankTitleContainer;
- (void)updateToBankDescContainer;
- (void)updateToBankIcon;
- (void)updateToBankContainer;
- (void)updateMainTitleLine;
- (void)updateMainTitle;
- (void)updateHeaderView;
- (void)updateView;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

