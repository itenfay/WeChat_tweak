//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InitLogicController;

@interface PreEnterInitStep
{
    InitLogicController *m_initLogicController;
    _Bool m_bInitOK;
    _Bool m_recoverViewShown;
}

- (void).cxx_destruct;
- (_Bool)showDBRecoverViewIfNeeded;
- (void)stopIniting:(unsigned int)arg1;
- (void)handleInitOk;
- (void)percentIniting:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)isInitOK;
- (_Bool)isIniting;
- (void)startStep;
- (id)initFromReg:(_Bool)arg1;

@end

