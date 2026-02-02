//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIViewController, MPCommentMsg, MPCommentReplyCellViewModel, MPLandingPageCgiHandler, MPLandingPageOpenParameter, MPLandingPageReportLogic, NSMutableArray, NSMutableSet, NSString;
@protocol MPCommentTableViewLogicDelete;

@interface MPCommentTableViewLogic
{
    _Bool _isNoMoreComment;
    _Bool _onlyFansCanComment;
    _Bool _funcEnable;
    _Bool _isMultiReplySwitchOn;
    unsigned int _commentCellTheme;
    int _commentNextOffset;
    MPLandingPageCgiHandler *_cgiHandler;
    MPLandingPageOpenParameter *_openParam;
    NSMutableArray *_commentMsgArr;
    MPLandingPageReportLogic *_reportLogic;
    MMUIViewController *_viewController;
    MMTableView *_tableView;
    id <MPCommentTableViewLogicDelete> _delegate;
    MPCommentMsg *_deletingCommentMsg;
    MPCommentReplyCellViewModel *_deletingReplyViewModel;
    NSMutableSet *_commentMsgIdSet;
    NSMutableArray *_arrSectionData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrSectionData; // @synthesize arrSectionData=_arrSectionData;
@property(retain, nonatomic) NSMutableSet *commentMsgIdSet; // @synthesize commentMsgIdSet=_commentMsgIdSet;
@property(nonatomic) int commentNextOffset; // @synthesize commentNextOffset=_commentNextOffset;
@property(retain, nonatomic) MPCommentReplyCellViewModel *deletingReplyViewModel; // @synthesize deletingReplyViewModel=_deletingReplyViewModel;
@property(retain, nonatomic) MPCommentMsg *deletingCommentMsg; // @synthesize deletingCommentMsg=_deletingCommentMsg;
@property(nonatomic) __weak id <MPCommentTableViewLogicDelete> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) MPLandingPageReportLogic *reportLogic; // @synthesize reportLogic=_reportLogic;
@property(nonatomic) _Bool isMultiReplySwitchOn; // @synthesize isMultiReplySwitchOn=_isMultiReplySwitchOn;
@property(readonly, nonatomic) _Bool funcEnable; // @synthesize funcEnable=_funcEnable;
@property(readonly, nonatomic) _Bool onlyFansCanComment; // @synthesize onlyFansCanComment=_onlyFansCanComment;
@property(nonatomic) _Bool isNoMoreComment; // @synthesize isNoMoreComment=_isNoMoreComment;
@property(readonly, nonatomic) NSMutableArray *commentMsgArr; // @synthesize commentMsgArr=_commentMsgArr;
@property(nonatomic) unsigned int commentCellTheme; // @synthesize commentCellTheme=_commentCellTheme;
@property(retain, nonatomic) MPLandingPageOpenParameter *openParam; // @synthesize openParam=_openParam;
@property(retain, nonatomic) MPLandingPageCgiHandler *cgiHandler; // @synthesize cgiHandler=_cgiHandler;
- (void)cancelDeleteSelectCommentMsg;
- (void)doDeleteSelectCommentReply;
- (void)localDeleteCommentMsg:(id)arg1;
- (void)doDeleteSelectCommentMsg;
- (void)onClickLikeBtn:(id)arg1;
- (void)onClickReplyBtn:(id)arg1;
- (void)onClickDeleteBtn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) _Bool hasComment;
- (void)handleGetCommentList:(id)arg1 funcEnable:(_Bool)arg2 nextOffset:(int)arg3 onlyFansCanComment:(_Bool)arg4 resetData:(_Bool)arg5;
- (void)tryFetchMoreComment;
- (void)clearAndFetchComment;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

