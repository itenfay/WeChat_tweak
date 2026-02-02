//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface TranslateSnsMgr
{
    NSMutableDictionary *_dicSessionTransInfos;
    NSMutableDictionary *_dicSequenceWaitTask;
    NSMutableDictionary *_dicSequenceRunningTask;
    unsigned int _sequence;
    _Bool _isWorking;
}

+ (id)GetTranslateContent:(id)arg1;
+ (_Bool)showTranslatedTextBtn:(id)arg1;
+ (_Bool)canShowTranslateView:(id)arg1;
+ (_Bool)checkContentOrComment:(id)arg1;
+ (id)getSnsTransDataWrapWithComment:(id)arg1 andScene:(int)arg2 andDataItemTid:(id)arg3;
+ (id)getSnsTransDataWrap:(id)arg1 andScene:(int)arg2;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)responseForTransTextResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)asyncNotifyTranslateSnsChanged:(id)arg1;
- (void)notifyTranslateSnsChanged:(id)arg1;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)saveSessionTransInfos:(id)arg1;
- (void)loadSessionTransInfos:(id)arg1;
- (id)pathForSessionTransInfos:(id)arg1;
- (_Bool)taskInQueue:(id)arg1;
- (void)showAnimationEnd:(id)arg1;
- (_Bool)shouldNeedShowAnimation:(id)arg1;
- (_Bool)showTranslatedTextNow:(id)arg1;
- (void)removeTranslateInfo:(id)arg1;
- (id)getTranslateInfo:(id)arg1;
- (void)tryTranslateMsgs;
- (void)translateSns:(id)arg1;
- (void)callExtensionWhenPhotoContentChange:(id)arg1;
- (id)getDataWrapContent:(id)arg1;
- (id)getSnsID:(id)arg1;
- (id)getContentSnsID:(id)arg1;
- (id)getCommentSnsID:(id)arg1 withDataItemID:(id)arg2;
- (void)onServiceMemoryWarning;
- (void)changeLanguageAndCleanAllCache;
- (void)clearSnsTranslateCache;
- (void)resetSnsAllTranslatingStatus;
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

