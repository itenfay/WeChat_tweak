//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AutoTranslateMsgReport, CMessageWrap, NSMutableArray, NSString;
@protocol AutoTranslateMsgDelegate;

@interface AutoTranslateMsgController
{
    _Bool _bStopTranslateFlag;
    id <AutoTranslateMsgDelegate> _delegate;
    NSString *_chatName;
    unsigned long long _status;
    CMessageWrap *_currentMsgWrap;
    AutoTranslateMsgReport *_report;
    NSMutableArray *_autoTranslateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *autoTranslateQueue; // @synthesize autoTranslateQueue=_autoTranslateQueue;
@property(retain, nonatomic) AutoTranslateMsgReport *report; // @synthesize report=_report;
@property(retain, nonatomic) CMessageWrap *currentMsgWrap; // @synthesize currentMsgWrap=_currentMsgWrap;
@property(nonatomic) _Bool bStopTranslateFlag; // @synthesize bStopTranslateFlag=_bStopTranslateFlag;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) __weak id <AutoTranslateMsgDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)OnAutoTranslateMsgStop:(id)arg1;
- (void)OnAutoTranslateMsgFail:(id)arg1;
- (void)OnAutoTranslateMsgEnd:(id)arg1;
- (void)OnAutoTranslateMsgStart:(id)arg1;
- (long long)getMsgIndexWithLocalId:(unsigned int)arg1 viewModels:(id)arg2;
- (_Bool)checkMsgExist:(unsigned int)arg1;
- (_Bool)canAutoTranslateMsg:(id)arg1;
- (void)handleAutoTranslateNext;
- (void)completeLastAutoProcess;
- (void)stopAutoTranslate;
- (id)currentTranslatingMsg;
- (void)Reset;
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

