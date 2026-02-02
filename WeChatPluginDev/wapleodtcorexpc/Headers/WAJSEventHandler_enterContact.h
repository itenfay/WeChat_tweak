//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAContactGetter, WASessionContentSendMsgInfo;

@interface WAJSEventHandler_enterContact
{
    NSString *_sessionFrom;
    WASessionContentSendMsgInfo *_sendMsgInfo;
    WAContactGetter *_contactGetter;
    unsigned int _customDebugMode;
    unsigned int _customWeappVersion;
    NSString *_customAppid;
    NSString *_customUsername;
    NSString *_customBusinessUsername;
    NSString *_customHeadImgUrl;
    NSString *_customTitle;
    NSString *_customSubTitle;
    unsigned long long _customNewScene;
    NSString *_customFromAppid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *customFromAppid; // @synthesize customFromAppid=_customFromAppid;
@property(nonatomic) unsigned int customWeappVersion; // @synthesize customWeappVersion=_customWeappVersion;
@property(nonatomic) unsigned int customDebugMode; // @synthesize customDebugMode=_customDebugMode;
@property(nonatomic) unsigned long long customNewScene; // @synthesize customNewScene=_customNewScene;
@property(copy, nonatomic) NSString *customSubTitle; // @synthesize customSubTitle=_customSubTitle;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(copy, nonatomic) NSString *customHeadImgUrl; // @synthesize customHeadImgUrl=_customHeadImgUrl;
@property(copy, nonatomic) NSString *customBusinessUsername; // @synthesize customBusinessUsername=_customBusinessUsername;
@property(copy, nonatomic) NSString *customUsername; // @synthesize customUsername=_customUsername;
@property(copy, nonatomic) NSString *customAppid; // @synthesize customAppid=_customAppid;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetSubBusinessInfoResponse:(id)arg1;
- (void)requestWithBusinessID:(id)arg1 sessionFrom:(id)arg2 sendMsgInfo:(id)arg3;
- (void)enterSession:(id)arg1;
- (id)getImageDataWithImageUrl:(id)arg1;
- (id)targetFromAppid;
- (unsigned int)targetWeappVersion;
- (unsigned int)targetDebugMode;
- (id)targetUsername;
- (id)targetAppid;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

@end

