//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebviewJSEventHandler_startVoipCall
{
    _Bool _m_bAllowBackCamera;
    _Bool _m_bShowCSVideo;
    unsigned int _m_uGetContactInfoTryTimes;
    NSString *_m_nsUsername;
    NSString *_m_nsNickname;
    NSString *_m_nsIconUrl;
    NSString *_m_nsAppId;
    NSString *_m_context;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bShowCSVideo; // @synthesize m_bShowCSVideo=_m_bShowCSVideo;
@property(nonatomic) _Bool m_bAllowBackCamera; // @synthesize m_bAllowBackCamera=_m_bAllowBackCamera;
@property(nonatomic) unsigned int m_uGetContactInfoTryTimes; // @synthesize m_uGetContactInfoTryTimes=_m_uGetContactInfoTryTimes;
@property(retain, nonatomic) NSString *m_context; // @synthesize m_context=_m_context;
@property(retain, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId=_m_nsAppId;
@property(retain, nonatomic) NSString *m_nsIconUrl; // @synthesize m_nsIconUrl=_m_nsIconUrl;
@property(retain, nonatomic) NSString *m_nsNickname; // @synthesize m_nsNickname=_m_nsNickname;
@property(retain, nonatomic) NSString *m_nsUsername; // @synthesize m_nsUsername=_m_nsUsername;
- (void)getAndSaveBrandInfo;
- (void)onBrandContactModified:(id)arg1 withAttrChanged:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

