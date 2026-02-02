//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMWebCustomLog
{
    NSString *_preMsgUrl;
    NSString *_preMsgTitle;
    NSString *_preMsgDesc;
    NSString *_preMsgIconUrl;
    NSString *_preMsgAppId;
    unsigned long long _fromScene;
    NSString *_bizUserName;
    NSString *_currentUrl;
    NSString *_currentTitle;
    NSString *_appId;
    NSString *_msgUrl;
    NSString *_msgTitle;
    NSString *_msgDesc;
    NSString *_msgIconUrl;
    unsigned long long _toScene;
    unsigned long long _sendToFriendsTimes;
    unsigned long long _shareTimelineTimes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long shareTimelineTimes; // @synthesize shareTimelineTimes=_shareTimelineTimes;
@property(nonatomic) unsigned long long sendToFriendsTimes; // @synthesize sendToFriendsTimes=_sendToFriendsTimes;
@property(nonatomic) unsigned long long toScene; // @synthesize toScene=_toScene;
@property(retain, nonatomic) NSString *msgIconUrl; // @synthesize msgIconUrl=_msgIconUrl;
@property(retain, nonatomic) NSString *msgDesc; // @synthesize msgDesc=_msgDesc;
@property(retain, nonatomic) NSString *msgTitle; // @synthesize msgTitle=_msgTitle;
@property(retain, nonatomic) NSString *msgUrl; // @synthesize msgUrl=_msgUrl;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(retain, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *preMsgAppId; // @synthesize preMsgAppId=_preMsgAppId;
@property(retain, nonatomic) NSString *preMsgIconUrl; // @synthesize preMsgIconUrl=_preMsgIconUrl;
@property(retain, nonatomic) NSString *preMsgDesc; // @synthesize preMsgDesc=_preMsgDesc;
@property(retain, nonatomic) NSString *preMsgTitle; // @synthesize preMsgTitle=_preMsgTitle;
@property(retain, nonatomic) NSString *preMsgUrl; // @synthesize preMsgUrl=_preMsgUrl;
- (void)recordShareMsgUrl:(id)arg1 msgTitle:(id)arg2 msgDesc:(id)arg3 msgIconUrl:(id)arg4 toScene:(unsigned long long)arg5;
- (void)recordCurrentUrl:(id)arg1 currentTitle:(id)arg2 currentAppId:(id)arg3;
- (void)recordPreMsgUrl:(id)arg1 preMsgTitle:(id)arg2 preMsgDesc:(id)arg3 preMsgIconUrl:(id)arg4 preMsgAppId:(id)arg5 fromScence:(unsigned long long)arg6;
- (void)uploadKV;
- (id)init;

@end

