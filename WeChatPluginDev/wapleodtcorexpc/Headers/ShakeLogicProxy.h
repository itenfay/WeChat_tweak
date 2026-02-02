//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ShakeMusicLogicController, ShakePeopleLogicController;
@protocol ShakeLogicProxyDelegate;

@interface ShakeLogicProxy
{
    long long m_logicType;
    id <ShakeLogicProxyDelegate> m_delegate;
    ShakePeopleLogicController *m_shakePeopleLogic;
    ShakeMusicLogicController *m_shakeMusicLogic;
}

- (void).cxx_destruct;
- (void)SetShakeList:(id)arg1 andScene:(unsigned int)arg2;
- (void)updateShakeLocation;
- (id)getMsgForState:(unsigned int)arg1;
- (_Bool)isShowBannerView;
- (void)shakeTerminate;
- (void)shakeReset;
- (void)shakeStop;
- (_Bool)shakeReport;
- (long long)getShakeLogicType;
- (id)initWithDelegate:(id)arg1;
- (void)onShakeMusicStorageChanged;
- (void)OnShakeShareCountChanged;
- (void)onShakePageStorageChanged;
- (void)onShakeStatusChanged;
- (void)onShakePeopleStorageChanged;
- (long long)GetLogicTypeFromStatus;

@end

