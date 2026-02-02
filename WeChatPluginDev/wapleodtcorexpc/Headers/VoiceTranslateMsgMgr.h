//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, VoiceTransHelper, VoiceTransInfo, VoiceTransSessionInfo, VoiceTranslateUtil;

@interface VoiceTranslateMsgMgr
{
    VoiceTransInfo *_currTransInfo;
    VoiceTransHelper *_transHelper;
    VoiceTranslateUtil *_translateUtil;
    NSMutableArray *_translateTaskArray;
    VoiceTransSessionInfo *_translateSessionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoiceTransSessionInfo *translateSessionInfo; // @synthesize translateSessionInfo=_translateSessionInfo;
@property(retain, nonatomic) NSMutableArray *translateTaskArray; // @synthesize translateTaskArray=_translateTaskArray;
@property(retain, nonatomic) VoiceTranslateUtil *translateUtil; // @synthesize translateUtil=_translateUtil;
@property(retain, nonatomic) VoiceTransHelper *transHelper; // @synthesize transHelper=_transHelper;
@property(retain, nonatomic) VoiceTransInfo *currTransInfo; // @synthesize currTransInfo=_currTransInfo;
- (void)onVoiceTransFail:(id)arg1 baseResponse:(id)arg2;
- (void)onVoiceTransEnd:(id)arg1 FromCache:(_Bool)arg2;
- (void)onVoiceTransVoiceID:(id)arg1 transResult:(id)arg2;
- (void)onVoiceTransBegin:(id)arg1;
- (void)CheckQueue;
- (void)translateVoiceMessage:(id)arg1 AutoScrollUp:(_Bool)arg2 AutoTranslate:(_Bool)arg3;
- (void)translateVoiceMessage:(id)arg1 AutoScrollUp:(_Bool)arg2;
- (void)translateVoiceMessage:(id)arg1;
- (void)stopVoiceTranslate:(id)arg1;
- (void)stopAllScrollUp;
- (void)checkSessionInfos:(id)arg1;
- (void)removeTranslateInfo:(id)arg1;
- (void)hiddenTransResult:(id)arg1;
- (id)getTranslateInfo:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)cleanAllResult;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

