//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol AutoTranslateMsgDelegate;

@interface AutoTranslateMsgControllerV2
{
    _Bool _bStopTranslateFlag;
    id <AutoTranslateMsgDelegate> _delegate;
    NSString *_chatName;
    NSMutableArray *_currentTranslatingMsgs;
    unsigned long long _translatingMsgsCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bStopTranslateFlag; // @synthesize bStopTranslateFlag=_bStopTranslateFlag;
@property(nonatomic) unsigned long long translatingMsgsCount; // @synthesize translatingMsgsCount=_translatingMsgsCount;
@property(retain, nonatomic) NSMutableArray *currentTranslatingMsgs; // @synthesize currentTranslatingMsgs=_currentTranslatingMsgs;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) __weak id <AutoTranslateMsgDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)onExitBaseMsgSession:(id)arg1;
- (void)onTranslateMessageWillHandleResponse;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)autoTranslateNextBatchMsg;
- (void)stopAutoTranslate;
- (void)startAutoTranslate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

