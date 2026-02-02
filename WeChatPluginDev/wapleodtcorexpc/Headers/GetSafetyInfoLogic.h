//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol GetSafetyInfoLogicDelegate;

@interface GetSafetyInfoLogic
{
    _Bool m_bRunning;
    unsigned int _m_uiHasVoice;
    unsigned int _m_uiOpenVoice;
    unsigned int _m_uiHasFace;
    unsigned int _m_uiOpenFace;
    unsigned int _m_uiHasWxPwd;
    id <GetSafetyInfoLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiHasWxPwd; // @synthesize m_uiHasWxPwd=_m_uiHasWxPwd;
@property(nonatomic) unsigned int m_uiOpenFace; // @synthesize m_uiOpenFace=_m_uiOpenFace;
@property(nonatomic) unsigned int m_uiHasFace; // @synthesize m_uiHasFace=_m_uiHasFace;
@property(nonatomic) unsigned int m_uiOpenVoice; // @synthesize m_uiOpenVoice=_m_uiOpenVoice;
@property(nonatomic) unsigned int m_uiHasVoice; // @synthesize m_uiHasVoice=_m_uiHasVoice;
@property(nonatomic) __weak id <GetSafetyInfoLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startGetSafetyInfo;
- (void)dealloc;

@end

