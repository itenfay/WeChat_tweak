//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLikeInfo, JumpToShowUserInfoReq, MMUIViewController, NSString, NewLifeThumbUpInfo, WCFinderComment, WCFinderCommentDetailViewModel, WCFinderDataItem, WCFinderMention;

@interface NewLifeShowUserInfoHandler
{
    MMUIViewController *_viewController;
    JumpToShowUserInfoReq *_request;
    WCFinderMention *_mention;
    WCFinderCommentDetailViewModel *_commentViewModel;
    WCFinderComment *_comment;
    WCFinderDataItem *_dataItem;
    NewLifeThumbUpInfo *_thumbUpInfo;
    FinderLikeInfo *_finderLikeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLikeInfo *finderLikeInfo; // @synthesize finderLikeInfo=_finderLikeInfo;
@property(retain, nonatomic) NewLifeThumbUpInfo *thumbUpInfo; // @synthesize thumbUpInfo=_thumbUpInfo;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) WCFinderCommentDetailViewModel *commentViewModel; // @synthesize commentViewModel=_commentViewModel;
@property(retain, nonatomic) WCFinderMention *mention; // @synthesize mention=_mention;
@property(retain, nonatomic) JumpToShowUserInfoReq *request; // @synthesize request=_request;
@property(retain, nonatomic) MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (void)showBlackListActionViewWithComment:(id)arg1;
- (void)showRevertBlackListActionViewWithComment:(id)arg1;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (_Bool)showMsgButton;
- (unsigned long long)fromSceneType;
- (unsigned long long)profileRefScene;
- (unsigned long long)actionType;
- (void)endHandler;
- (void)handleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

