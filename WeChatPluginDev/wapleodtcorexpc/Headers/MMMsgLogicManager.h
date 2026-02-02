//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BaseMsgContentLogicController, NSMutableArray, NSString;

@interface MMMsgLogicManager
{
    NSMutableArray *_arrLogicControllers;
    BaseMsgContentLogicController *_topLogicController;
    BaseMsgContentLogicController *_weixinLogicController;
    BaseMsgContentLogicController *_roomLogicController;
    BaseMsgContentLogicController *_lastPeekController;
}

- (void).cxx_destruct;
- (void)finishedPeekingWithController:(id)arg1;
- (id)logicControllerForPeekingWithContact:(id)arg1 messageWrap:(id)arg2;
- (id)GetCurrentLogicController;
- (void)PopLogicController:(id)arg1 withReuse:(_Bool)arg2;
- (void)PopLogicController:(id)arg1;
- (void)PresentMultiSelectLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)MakeSureKeepOtherLogicController:(id)arg1;
- (void)PushOtherLogicController:(id)arg1 fromViewController:(id)arg2 pageSheetDelegate:(id)arg3 jumpMessage:(id)arg4 animated:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;
- (void)PushOtherLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)PushNewLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4;
- (void)PushSpecLogicControllerByContact:(id)arg1 navigationController:(id)arg2;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 highlighted:(_Bool)arg5 animated:(_Bool)arg6 extraInfo:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 highlighted:(_Bool)arg5 animated:(_Bool)arg6 extraInfo:(id)arg7;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 highlighted:(_Bool)arg5 animated:(_Bool)arg6;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 animated:(_Bool)arg5;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(_Bool)arg4 fromeScene:(unsigned long long)arg5 userData:(id)arg6 highlighted:(_Bool)arg7;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(_Bool)arg4 fromeScene:(unsigned long long)arg5 userData:(id)arg6;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(_Bool)arg4 fromeScene:(unsigned long long)arg5;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(_Bool)arg4 fromeScene:(unsigned long long)arg5 highlighted:(_Bool)arg6;
- (id)GenOtherBaseMsgControllerByContact:(id)arg1 searchScene:(unsigned long long)arg2 extraInfo:(id)arg3;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 searchScene:(unsigned long long)arg4 extraInfo:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 searchScene:(unsigned long long)arg4 extraInfo:(id)arg5;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 extraInfo:(id)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 searchScene:(unsigned long long)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)OpenMsgWindowByContact:(id)arg1 jumpToLocationNode:(id)arg2 reuse:(_Bool)arg3 extraInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)makeMsgLogicController:(id)arg1 jumpToMsg:(id)arg2 reuse:(_Bool)arg3 extraInfo:(id)arg4;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6;
- (void)cleanUnuseLogicController;
- (void)ShowPageSheetLogicController:(id)arg1 pageSheetDelegate:(id)arg2 fromViewController:(id)arg3 animated:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;
- (void)ShowPageSheetLogicControllerByContact:(id)arg1 pageSheetDelegate:(id)arg2 toMessage:(id)arg3 fromViewController:(id)arg4 animated:(_Bool)arg5 extraInfo:(id)arg6 complete:(CDUnknownBlockType)arg7;
- (void)ShowPageSheetLogicControllerByContact:(id)arg1 pageSheetDelegate:(id)arg2 toMessage:(id)arg3 fromViewController:(id)arg4 animated:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;
- (void)ShowPageSheetLogicControllerByContact:(id)arg1 pageSheetDelegate:(id)arg2 fromViewController:(id)arg3 animated:(_Bool)arg4;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4;
- (void)PushLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)PushLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)GetReuseableLogicControllerFromCacheWithContact:(Class)arg1;
- (id)GetLogicControllerFromCacheWithContact:(id)arg1;
- (void)setMsgLogicToCache:(id)arg1;
- (Class)GetLogicClassByContact:(id)arg1;
- (void)onServiceMemoryWarning;
- (void)onPluginsChanged:(id)arg1;
- (void)onDeleteSession:(unsigned int)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)CheckIfTopViewControllerPoped;
- (void)cleanUpLogicByName:(id)arg1;
- (void)cleanArrLogicControllers;
- (void)cleanUp;
- (id)getTopLogicController;
- (void)onServiceClearData;
- (void)onServiceInit;
@property(retain, nonatomic) BaseMsgContentLogicController *topLogicController;
@property(retain, nonatomic) NSMutableArray *arrLogicControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

