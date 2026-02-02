//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCTableViewSecionModel, GameInteractContentServer, GameLifeNotifyInteractiveMsgCell, NSString;

@interface GameCenterMsgListInteractTabViewController
{
    GCTableViewSecionModel *_noticeSectionModel;
    GameInteractContentServer *_interActServer;
    GameLifeNotifyInteractiveMsgCell *_noticeCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameLifeNotifyInteractiveMsgCell *noticeCell; // @synthesize noticeCell=_noticeCell;
@property(retain, nonatomic) GameInteractContentServer *interActServer; // @synthesize interActServer=_interActServer;
@property(retain, nonatomic) GCTableViewSecionModel *noticeSectionModel; // @synthesize noticeSectionModel=_noticeSectionModel;
- (void)checkShowEmpty;
- (void)didClickJumpAllBtnWithCellModel:(id)arg1;
- (void)didClickReplyBtnWithCellModel:(id)arg1;
- (void)didClickVoteBtnWithCellModel:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 btnTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)onConfirmFollow:(_Bool)arg1 cellModel:(id)arg2;
- (void)didTapHeadWithCellModel:(id)arg1;
- (void)didClickFollowBtnWithCellModel:(id)arg1;
- (_Bool)handleResponse:(id)arg1 cellModel:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)reloadCellModel:(id)arg1;
- (void)onGameCenterMessageRedPointInfoChange:(id)arg1;
- (void)handleBatchGetContentInfoByContentIdResponse:(id)arg1;
- (void)handleContentInfoUpdate:(id)arg1;
- (void)onLoadNewList:(id)arg1;
- (void)subClassHandleDidSelectRowAtIndexPath:(id)arg1;
- (void)subClassHandleWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)updateNoticeCellRedInfo;
- (id)subClassHandleCellForRowAtIndexPath:(id)arg1;
- (id)beginSectionModelArray;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getInteractCellModelForMsgContent:(id)arg1;
- (_Bool)isNoticeSection:(unsigned long long)arg1;
- (id)msgListName;
- (id)cellReuseIdentifier;
- (Class)cellClassType;
- (unsigned int)showType;
- (void)viewDidLoad;
- (void)unregisterExtension;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

