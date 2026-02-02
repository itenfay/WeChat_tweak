//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ForwardMessageLogicController, NSString, SendAppMsgHandler;

@interface TingShareManager : NSObject
{
    SendAppMsgHandler *_sendAppMsgHandler;
    ForwardMessageLogicController *_forwardLogicController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
@property(retain, nonatomic) SendAppMsgHandler *sendAppMsgHandler; // @synthesize sendAppMsgHandler=_sendAppMsgHandler;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)showSharePreConfirmToContact:(id)arg1 tingItem:(id)arg2 categoryItem:(id)arg3 inView:(id)arg4;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)shareToFavouriteWithCategoryItem:(id)arg1;
- (void)shareToMomentWithCategoryItem:(id)arg1;
- (void)shareToFriendWithCategoryItem:(id)arg1;
- (void)messageFromCategoryItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareToFavouriteWithTingItem:(id)arg1;
- (void)shareToTextStateWithTingItem:(id)arg1 commentInfo:(id)arg2 viewController:(id)arg3;
- (void)shareToMomentWithTingItem:(id)arg1 categoryItem:(id)arg2;
- (void)shareToFriendWithTingItem:(id)arg1 categoryItem:(id)arg2;
- (void)messageFromTingItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareToMoment:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (_Bool)canShowFidnerSinger;
- (void)loadShareThumbnailDataForUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)shareThumbnailData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

