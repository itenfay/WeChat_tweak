//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FaceRecogPayViewController
{
    _Bool _canRetry;
    NSString *_errorMsg;
    NSString *_otherVerifyTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *otherVerifyTitle; // @synthesize otherVerifyTitle=_otherVerifyTitle;
@property(nonatomic) _Bool canRetry; // @synthesize canRetry=_canRetry;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
- (void)closeFaceCheckUseCaseCross;
- (void)call:(id)arg1;
- (void)startFaceCheckResultKindaUI:(id)arg1;
- (void)procedureDidFailed:(id)arg1 errorTips:(id)arg2 canRetry:(_Bool)arg3;
- (void)procedureDidFinish;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

