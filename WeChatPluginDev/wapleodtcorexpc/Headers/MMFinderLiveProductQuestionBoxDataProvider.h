//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveProductQuestionBoxItem, MMFinderLiveTaskId, MMLiveCommentDataMgr;

@interface MMFinderLiveProductQuestionBoxDataProvider : NSObject
{
    _Bool _isLoadingPreMsg;
    _Bool _isLoadingRecentMsg;
    CDUnknownBlockType _unReadCntUpdateCallback;
    CDUnknownBlockType _currSessionInitiatedCallback;
    MMFinderLiveProductQuestionBoxItem *_currProductQueBox;
    MMFinderLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoadingRecentMsg; // @synthesize isLoadingRecentMsg=_isLoadingRecentMsg;
@property(nonatomic) _Bool isLoadingPreMsg; // @synthesize isLoadingPreMsg=_isLoadingPreMsg;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveProductQuestionBoxItem *currProductQueBox; // @synthesize currProductQueBox=_currProductQueBox;
@property(copy, nonatomic) CDUnknownBlockType currSessionInitiatedCallback; // @synthesize currSessionInitiatedCallback=_currSessionInitiatedCallback;
@property(copy, nonatomic) CDUnknownBlockType unReadCntUpdateCallback; // @synthesize unReadCntUpdateCallback=_unReadCntUpdateCallback;
- (void)onFinderLiveMsgSessionInitiated:(id)arg1;
- (void)onFinderLiveMsgSessionUnReadCntUpdated:(unsigned int)arg1 sessionId:(id)arg2;
- (void)onProductQuestionBoxLoadRecentMsgsWithTaskId:(id)arg1 boxId:(id)arg2;
- (void)onProductQuestionBoxRequestPreMsgsFromComment:(id)arg1 count:(int)arg2 taskId:(id)arg3 boxId:(id)arg4;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
@property(readonly, nonatomic) _Bool isLoadingMsg;
@property(readonly, nonatomic) MMLiveCommentDataMgr *commentDataMgr;
- (void)updateCommentStatus:(id)arg1 wrapMsg:(id)arg2 modifySucc:(_Bool)arg3 modifyFail:(_Bool)arg4;
- (void)configNewProductQueBox:(id)arg1;
- (void)clearLastProductQueBoxDatas;
- (id)transferMessageWrapToComment:(id)arg1 boxId:(id)arg2 msgFromDBLoad:(_Bool)arg3;
- (id)transferMessageWrapsToComments:(id)arg1 boxId:(id)arg2 msgFromDBLoad:(_Bool)arg3;
- (void)loadPreMsgs:(int)arg1 from:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadRecentMsgs:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)checkHasLocalLiveMsgSessions;
- (void)clearUnreadCountForSessionId:(id)arg1;
- (void)checkCurrProductQueBoxChanged:(CDUnknownBlockType)arg1;
- (void)changeToProductQueBox:(id)arg1;
- (void)registerExtensions;
- (id)initWithTaskId:(id)arg1;

@end

