//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMFinderLiveConcertRecentForwardScrollViewDelegateProxy, MMFinderLiveConcertTicketStyleItem, MMFinderLiveConcertTicketView, MMFinderLiveConcertTicketViewControllerReportingContext, MMScrollActionSheet, MMUIButton, NSArray, NSString, UIImageView, UIView;
@protocol MMFinderLiveConcertTicketViewControllerDelegate;

@interface MMFinderLiveConcertTicketViewController
{
    MMFinderLiveConcertTicketStyleItem *_styleItem;
    id <MMFinderLiveConcertTicketViewControllerDelegate> _delegate;
    UIImageView *_backgroundView;
    MMFinderLiveConcertTicketView *_ticketView;
    MMUIButton *_shareButton;
    UIView *_bottomButtonsContainerView;
    NSArray *_bottomButtonsSeparators;
    MMUIButton *_nextStyleButton;
    MMUIButton *_alternativeShareButton;
    MMUIButton *_saveImageButton;
    MMScrollActionSheet *_shareActionSheetForImageContent;
    MMFinderLiveConcertRecentForwardScrollViewDelegateProxy *_recentForwardDelegateProxyForImageContent;
    MMScrollActionSheet *_shareActionSheetForWebPageContent;
    MMFinderLiveConcertRecentForwardScrollViewDelegateProxy *_recentForwardDelegateProxyForWebPageContent;
    ForwardMessageLogicController *_forwardLogic;
    MMFinderLiveConcertTicketViewControllerReportingContext *_reportingContext;
    unsigned long long _sourceScene;
    MMUIButton *_itemButton;
    NSString *_currentItemUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentItemUrl; // @synthesize currentItemUrl=_currentItemUrl;
@property(retain, nonatomic) MMUIButton *itemButton; // @synthesize itemButton=_itemButton;
@property(nonatomic) unsigned long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) MMFinderLiveConcertTicketViewControllerReportingContext *reportingContext; // @synthesize reportingContext=_reportingContext;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) MMFinderLiveConcertRecentForwardScrollViewDelegateProxy *recentForwardDelegateProxyForWebPageContent; // @synthesize recentForwardDelegateProxyForWebPageContent=_recentForwardDelegateProxyForWebPageContent;
@property(retain, nonatomic) MMScrollActionSheet *shareActionSheetForWebPageContent; // @synthesize shareActionSheetForWebPageContent=_shareActionSheetForWebPageContent;
@property(retain, nonatomic) MMFinderLiveConcertRecentForwardScrollViewDelegateProxy *recentForwardDelegateProxyForImageContent; // @synthesize recentForwardDelegateProxyForImageContent=_recentForwardDelegateProxyForImageContent;
@property(retain, nonatomic) MMScrollActionSheet *shareActionSheetForImageContent; // @synthesize shareActionSheetForImageContent=_shareActionSheetForImageContent;
@property(retain, nonatomic) MMUIButton *saveImageButton; // @synthesize saveImageButton=_saveImageButton;
@property(retain, nonatomic) MMUIButton *alternativeShareButton; // @synthesize alternativeShareButton=_alternativeShareButton;
@property(retain, nonatomic) MMUIButton *nextStyleButton; // @synthesize nextStyleButton=_nextStyleButton;
@property(retain, nonatomic) NSArray *bottomButtonsSeparators; // @synthesize bottomButtonsSeparators=_bottomButtonsSeparators;
@property(retain, nonatomic) UIView *bottomButtonsContainerView; // @synthesize bottomButtonsContainerView=_bottomButtonsContainerView;
@property(retain, nonatomic) MMUIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) MMFinderLiveConcertTicketView *ticketView; // @synthesize ticketView=_ticketView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <MMFinderLiveConcertTicketViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveConcertTicketStyleItem *styleItem; // @synthesize styleItem=_styleItem;
- (id)webPageShareUriForTarget:(unsigned long long)arg1;
- (id)shareActionSheetForContentType:(unsigned long long)arg1;
- (_Bool)webPageShareAvailable;
- (_Bool)needPageItem;
- (void)shareToMomentWithContentType:(unsigned long long)arg1;
- (void)shareToChat:(id)arg1 contentType:(unsigned long long)arg2;
- (void)shareTicketImage;
- (void)shareTicketWebPage;
- (void)initializeShareActionSheetForWebPageContent;
- (void)initializeShareActionSheetForImageContent;
- (void)initializeComponents;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)relayoutScrollSheetForProxy:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1 proxy:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onTicketViewExternalNavigationRequested:(id)arg1;
- (void)onTicketViewLoadFailed:(id)arg1;
- (void)onTicketViewReadyForDisplay:(id)arg1;
- (void)onItemButtonTapped;
- (void)onSaveImageButtonTapped;
- (void)onAlternativeShareButtonTapped;
- (void)onNextStyleButtonTapped;
- (void)onShareButtonTapped;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)playEntryAnimation;
- (void)updateWithTicketStyleItem:(id)arg1 hasOtherStyles:(_Bool)arg2;
- (id)initWithSourceScene:(unsigned long long)arg1 reportingContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

