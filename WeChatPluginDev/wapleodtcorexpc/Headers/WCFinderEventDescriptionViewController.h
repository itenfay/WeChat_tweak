//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderEventInfo, MMUIButton, MMUILabel, NSString, RichTextView, UILabel, UIScrollView, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView;
@protocol WCFinderEventDescriptionViewControllerDelegate;

@interface WCFinderEventDescriptionViewController
{
    id <WCFinderEventDescriptionViewControllerDelegate> _descriptionDelegate;
    MMUIButton *_exitBtn;
    MMUILabel *_titleLabel;
    UIScrollView *_descContainer;
    UIView *_contactView;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UILabel *_authInfoLabel;
    RichTextView *_descTextView;
    RichTextView *_statementView;
    FinderEventInfo *_eventInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(retain, nonatomic) RichTextView *statementView; // @synthesize statementView=_statementView;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UILabel *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) UIScrollView *descContainer; // @synthesize descContainer=_descContainer;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *exitBtn; // @synthesize exitBtn=_exitBtn;
@property(retain, nonatomic) id <WCFinderEventDescriptionViewControllerDelegate> descriptionDelegate; // @synthesize descriptionDelegate=_descriptionDelegate;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickAuthorInfoAction;
- (void)onExitBtnClicked;
- (double)heightWithEventInfo:(id)arg1;
- (void)updateWithEventInfo:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

