//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AAQueryListRes, NSString;

@interface WCPayGPOrderHistoryControlLogic
{
    _Bool _bIsFromTop;
    unsigned long long _curHistoryScene;
    unsigned long long _reqestingHistoryScene;
    AAQueryListRes *_lastQueryListResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AAQueryListRes *lastQueryListResp; // @synthesize lastQueryListResp=_lastQueryListResp;
@property(nonatomic) unsigned long long reqestingHistoryScene; // @synthesize reqestingHistoryScene=_reqestingHistoryScene;
@property(nonatomic) unsigned long long curHistoryScene; // @synthesize curHistoryScene=_curHistoryScene;
@property(nonatomic) _Bool bIsFromTop; // @synthesize bIsFromTop=_bIsFromTop;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetGroupPayOrderHistoryError;
- (void)onGetGroupPayOrderHistoryRespBack;
- (void)onGetGroupPayOrderHistory:(id)arg1;
- (void)queryLaunchOrderHistoryWithOffset:(unsigned int)arg1;
- (void)orderStatusLogicDidStop:(_Bool)arg1;
- (void)orderHasBeenClose:(id)arg1;
- (void)onOrderHistoryViewControllerChangeScene:(unsigned long long)arg1;
- (void)onOrderHistoryViewControllerUserSelectRecord:(id)arg1;
- (void)loadMoreOrderHistoryWithOffset:(unsigned int)arg1;
- (void)onOrderHistoryViewControllerCancel;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

