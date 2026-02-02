//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPaySimpleUserSetPassGuideInfo
{
    unsigned int _m_uiSendPwdMsg;
    NSString *_m_nsGuideWording;
    NSString *_m_nsLeftButtonWording;
    NSString *_m_nsRightButtonWording;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiSendPwdMsg; // @synthesize m_uiSendPwdMsg=_m_uiSendPwdMsg;
@property(retain, nonatomic) NSString *m_nsRightButtonWording; // @synthesize m_nsRightButtonWording=_m_nsRightButtonWording;
@property(retain, nonatomic) NSString *m_nsLeftButtonWording; // @synthesize m_nsLeftButtonWording=_m_nsLeftButtonWording;
@property(retain, nonatomic) NSString *m_nsGuideWording; // @synthesize m_nsGuideWording=_m_nsGuideWording;
- (id)getConfirmWording;
- (id)getCancelWording;
- (id)getGuideWording;
- (_Bool)isShowSetPasswordAlert;

@end

