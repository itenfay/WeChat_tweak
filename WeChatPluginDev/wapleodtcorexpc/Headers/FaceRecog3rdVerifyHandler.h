//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogResultView, NSString;

@interface FaceRecog3rdVerifyHandler
{
    FaceRecogResultView *_prepareView;
    unsigned int _sourceType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
- (void)handle3rdVerifyResult:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didUploadFaceData:(id)arg1;
- (void)startVerifyFor3rdParty:(id)arg1 verifyInfo:(id)arg2 needVideo:(_Bool)arg3 feedbackUrl:(id)arg4 businessTip:(id)arg5 businessTipColor:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

