//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WASessionContentSendMsgInfo;

@interface WCWeAppBizTempSessionInfo : NSObject
{
    unsigned int _appVersion;
    NSString *_weAppID;
    NSString *_weAppUserName;
    NSString *_businessId;
    NSString *_sessionFrom;
    NSString *_pageId;
    unsigned long long _sceneType;
    WASessionContentSendMsgInfo *_sendMsgInfo;
    NSData *_extInfo;
    unsigned long long _debugModeType;
    NSString *_sessionTitle;
    NSString *_sessionSubTitle;
    NSString *_customHeadImageUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customHeadImageUrl; // @synthesize customHeadImageUrl=_customHeadImageUrl;
@property(retain, nonatomic) NSString *sessionSubTitle; // @synthesize sessionSubTitle=_sessionSubTitle;
@property(retain, nonatomic) NSString *sessionTitle; // @synthesize sessionTitle=_sessionTitle;
@property(nonatomic) unsigned long long debugModeType; // @synthesize debugModeType=_debugModeType;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSData *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) WASessionContentSendMsgInfo *sendMsgInfo; // @synthesize sendMsgInfo=_sendMsgInfo;
@property(nonatomic) unsigned long long sceneType; // @synthesize sceneType=_sceneType;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSString *sessionFrom; // @synthesize sessionFrom=_sessionFrom;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *weAppUserName; // @synthesize weAppUserName=_weAppUserName;
@property(retain, nonatomic) NSString *weAppID; // @synthesize weAppID=_weAppID;
- (void)updateAppInfoWith:(id)arg1;
- (unsigned long long)fetchMsgPageEnterScene;
- (unsigned long long)fetchPageNewEnterScene;
- (unsigned long long)fetchPageEnterScene;
- (unsigned long long)fetchFromScene;
- (id)initWithWeAppID:(id)arg1 weAppUserName:(id)arg2 businessId:(id)arg3 sessionFrom:(id)arg4 pageId:(id)arg5 sceneType:(unsigned long long)arg6 showMessageCard:(_Bool)arg7 sendMessageImg:(id)arg8 sendMessagePath:(id)arg9 sendMessageTitle:(id)arg10 extInfo:(id)arg11;

@end

