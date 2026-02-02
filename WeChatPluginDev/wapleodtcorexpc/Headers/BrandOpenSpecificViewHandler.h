//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;
@protocol BrandOpenSpecificViewHandlerDelegate;

@interface BrandOpenSpecificViewHandler
{
    NSMutableDictionary *m_urlToViewController;
    id <BrandOpenSpecificViewHandlerDelegate> _delegate;
    unsigned int uiScene;
    unsigned int uiSponsorID;
    NSString *nsFromWhichUrl;
    NSString *nsPublisherName;
    NSString *nsExtInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int uiSponsorID; // @synthesize uiSponsorID;
@property(retain, nonatomic) NSString *nsExtInfo; // @synthesize nsExtInfo;
@property(nonatomic) unsigned int uiScene; // @synthesize uiScene;
@property(retain, nonatomic) NSString *nsPublisherName; // @synthesize nsPublisherName;
@property(retain, nonatomic) NSString *nsFromWhichUrl; // @synthesize nsFromWhichUrl;
- (void)jumpToLogViewController;
- (void)jumpToShareCardListViewController;
- (void)jumpToCardListViewController;
- (void)jumpToExposeViewController;
- (void)jumpToSettingViewController:(id)arg1;
- (void)jumpToScanViewController;
- (void)jumpToTimeLineViewController;
- (void)jumpToSearchBrandViewController;
- (void)jumpToAddFriendViewController:(_Bool)arg1;
- (void)jumpToNewFriendViewController;
- (void)jumpToRecoverDataViewController;
- (void)handleJumpURL:(id)arg1;
- (void)loadUrlToViewControllerArray;
- (void)handleViewJump:(id)arg1;
- (_Bool)canHandleViewJump:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

