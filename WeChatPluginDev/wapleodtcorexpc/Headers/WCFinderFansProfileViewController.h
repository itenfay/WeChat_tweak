//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, FinderContactExtRelationInfo, FinderGetContactListReq, MMUIButton, NSData, NSString, RichTextView, UIButton, UILabel, UIScrollView, UIView, WCFinderComment, WCFinderContact, WCFinderHalfProfileInfoView, WCFinderHalfProfileInteractionInfoView, WCFinderHeadImageView, WCFinderMention;
@protocol WCFinderFansProfileViewControllerDelegate;

@interface WCFinderFansProfileViewController
{
    _Bool _showMsgButton;
    _Bool _hasShowFinderView;
    _Bool _hasFetchedPreviewData;
    int _contactType;
    id <WCFinderFansProfileViewControllerDelegate> _fansProfileDelegate;
    unsigned long long _fromSceneType;
    unsigned long long _profileRefScene;
    NSString *_fansId;
    unsigned long long _actionType;
    unsigned long long _controlType;
    NSString *_providerFinderUsername;
    WCFinderComment *_comment;
    WCFinderMention *_mention;
    NSData *_listenBuffer;
    WCFinderHeadImageView *_headImageView;
    UIView *_bgInteractiveView;
    RichTextView *_nickNameView;
    RichTextView *_signatureView;
    UIScrollView *_scrollView;
    UIButton *_privateMsgButton;
    UILabel *_sexLabel;
    UILabel *_cityLabel;
    CContact *_contact;
    WCFinderContact *_finderContact;
    WCFinderHalfProfileInfoView *_profileInfoView;
    NSString *_sessionId;
    NSString *_username;
    FinderContactExtRelationInfo *_relationInfo;
    WCFinderHalfProfileInteractionInfoView *_interactionView;
    MMUIButton *_exitButton;
    MMUIButton *_moreButton;
    FinderGetContactListReq *_contactListReq;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderGetContactListReq *contactListReq; // @synthesize contactListReq=_contactListReq;
@property(nonatomic) _Bool hasFetchedPreviewData; // @synthesize hasFetchedPreviewData=_hasFetchedPreviewData;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) MMUIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) WCFinderHalfProfileInteractionInfoView *interactionView; // @synthesize interactionView=_interactionView;
@property(retain, nonatomic) FinderContactExtRelationInfo *relationInfo; // @synthesize relationInfo=_relationInfo;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool hasShowFinderView; // @synthesize hasShowFinderView=_hasShowFinderView;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) WCFinderHalfProfileInfoView *profileInfoView; // @synthesize profileInfoView=_profileInfoView;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak UILabel *cityLabel; // @synthesize cityLabel=_cityLabel;
@property(nonatomic) __weak UILabel *sexLabel; // @synthesize sexLabel=_sexLabel;
@property(nonatomic) __weak UIButton *privateMsgButton; // @synthesize privateMsgButton=_privateMsgButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) RichTextView *signatureView; // @synthesize signatureView=_signatureView;
@property(retain, nonatomic) RichTextView *nickNameView; // @synthesize nickNameView=_nickNameView;
@property(retain, nonatomic) UIView *bgInteractiveView; // @synthesize bgInteractiveView=_bgInteractiveView;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) NSData *listenBuffer; // @synthesize listenBuffer=_listenBuffer;
@property(retain, nonatomic) WCFinderMention *mention; // @synthesize mention=_mention;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(nonatomic) int contactType; // @synthesize contactType=_contactType;
@property(copy, nonatomic) NSString *providerFinderUsername; // @synthesize providerFinderUsername=_providerFinderUsername;
@property(nonatomic) unsigned long long controlType; // @synthesize controlType=_controlType;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool showMsgButton; // @synthesize showMsgButton=_showMsgButton;
@property(copy, nonatomic) NSString *fansId; // @synthesize fansId=_fansId;
@property(nonatomic) unsigned long long profileRefScene; // @synthesize profileRefScene=_profileRefScene;
@property(nonatomic) unsigned long long fromSceneType; // @synthesize fromSceneType=_fromSceneType;
@property(nonatomic) __weak id <WCFinderFansProfileViewControllerDelegate> fansProfileDelegate; // @synthesize fansProfileDelegate=_fansProfileDelegate;
- (void)layoutScrollView;
- (void)viewDidLayoutSubviews;
- (void)registerYReportSdk;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (unsigned long long)userpagePreviewScene;
- (_Bool)currentSceneIsMemberQA;
- (_Bool)isFromFinderMentionScene;
- (_Bool)isAuthorScene;
- (void)updateContact:(id)arg1 contactListReq:(id)arg2;
- (void)updateContact:(id)arg1 relationInfo:(id)arg2;
- (void)updateContact:(id)arg1 fansId:(id)arg2;
- (void)updateContact:(id)arg1 objectId:(unsigned long long)arg2 favId:(id)arg3;
- (void)updateContact:(id)arg1 objectId:(unsigned long long)arg2 comment:(id)arg3;
- (void)updateContact:(id)arg1 objectId:(unsigned long long)arg2 likeId:(unsigned long long)arg3;
- (void)updateContact:(id)arg1 mention:(id)arg2;
- (void)updateContact:(id)arg1;
- (_Bool)showAddToBlackListButton;
- (int)feedViewControllerScene;
- (void)finderHalfProfileInfoView:(id)arg1 didClickContact:(id)arg2;
- (id)currentPreviewData;
- (id)currentWxUsername;
- (void)clickMoreButton;
- (void)clickExitButton;
- (void)clickPrivateMsgAction;
- (void)clickBlackListButtonAction;
- (void)tapScrollView:(id)arg1;
- (void)setUpUI;
- (_Bool)isShowMainPage;
- (_Bool)canShowMainPage;
- (void)layoutUI;
- (void)updateMoreBtn;
- (void)updateContentWithContact:(id)arg1;
- (void)updateContentHeightWithContact:(id)arg1 animation:(_Bool)arg2;
- (void)updateFansContact;
- (id)fansProfileReportParamsWithPreviewData:(id)arg1;
- (void)_updateUI;
- (void)_updateView;
- (void)updatePrivateMsgContact:(id)arg1 actionType:(unsigned long long)arg2 sessionId:(id)arg3 finderContact:(id)arg4;
- (void)updateContact:(id)arg1 actionType:(unsigned long long)arg2 comment:(id)arg3 finderContact:(id)arg4;
- (void)reportPrivateMsgButtonExpouse;
- (void)layoutTextSubviews;
- (void)viewWillLayoutSubviews;
- (_Bool)isHideCloseButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

