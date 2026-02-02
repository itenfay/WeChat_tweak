//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol ShakeLogicProxyDelegate;

@interface ShakeMusicLogicController
{
    id <ShakeLogicProxyDelegate> m_delegate;
    unsigned int m_sessionId;
}

- (void).cxx_destruct;
- (unsigned int)getSessionId;
- (id)getMsgForState:(unsigned int)arg1;
- (_Bool)isShowBannerView;
- (void)shakeTerminate;
- (void)shakeReset;
- (void)shakeStop;
- (void)shakeReport;
- (id)initWithDelegate:(id)arg1;
- (void)OnMusicError:(int)arg1 andSessionId:(unsigned int)arg2;
- (void)OnGetMusicItem:(id)arg1 andSessionId:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

