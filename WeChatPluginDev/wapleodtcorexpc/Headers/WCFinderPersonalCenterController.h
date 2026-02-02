//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderNewUserPrepareResponse, MMFinderLivePurchasedFeedViewModel, MMUIViewController, NSString, WCFinderContact, WCFinderPersonalCenterParams, WCFinderWebViewOpener;
@protocol WCFinderPersonalCenterControllerDelegate;

@interface WCFinderPersonalCenterController : NSObject
{
    id <WCFinderPersonalCenterControllerDelegate> _delegate;
    WCFinderPersonalCenterParams *_params;
    MMUIViewController *_hostVC;
    WCFinderContact *_contact;
    FinderNewUserPrepareResponse *_prepare;
    WCFinderWebViewOpener *_creatorWebVCOpener;
    CDUnknownBlockType _waittingPrepareBlock;
    MMFinderLivePurchasedFeedViewModel *_purchasedFeedViewModel;
}

+ (id)controllerWithHostVC:(id)arg1 params:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePurchasedFeedViewModel *purchasedFeedViewModel; // @synthesize purchasedFeedViewModel=_purchasedFeedViewModel;
@property(copy, nonatomic) CDUnknownBlockType waittingPrepareBlock; // @synthesize waittingPrepareBlock=_waittingPrepareBlock;
@property(retain, nonatomic) WCFinderWebViewOpener *creatorWebVCOpener; // @synthesize creatorWebVCOpener=_creatorWebVCOpener;
@property(retain, nonatomic) FinderNewUserPrepareResponse *prepare; // @synthesize prepare=_prepare;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak MMUIViewController *hostVC; // @synthesize hostVC=_hostVC;
@property(retain, nonatomic) WCFinderPersonalCenterParams *params; // @synthesize params=_params;
@property(nonatomic) __weak id <WCFinderPersonalCenterControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPurchasedFeedViewModelUpdated:(_Bool)arg1 hasMoreData:(_Bool)arg2;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)openUnAuth;
- (void)openLive;
- (void)openCamera;
- (void)openIncome:(_Bool)arg1;
- (void)openCreator;
- (void)openFinderPrivateMsg;
- (void)openMemberMsg;
- (void)openFinderMsg;
- (void)openContact;
- (void)openPrivateMsg;
- (void)openMsg;
- (unsigned long long)joinedMembershipCount;
- (unsigned long long)paidCollectionCount;
- (unsigned long long)paidMicCount;
- (unsigned long long)purchasedCount;
- (void)openPayment;
- (void)openFollow;
- (void)openLikeFav;
- (void)openHistory;
- (void)openSetting;
- (unsigned long long)reportPostScene;
- (id)creatorCenterUrl;
- (void)_updateCreator;
- (void)_onVCDidBePushOrPresend;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

