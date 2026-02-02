//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppJsApiEnterContact
{
    _Bool _showMessageCard;
    NSString *_targetAppId;
    NSString *_userName;
    NSString *_sessionFrom;
    NSString *_businessID;
    NSString *_sendMsgTitle;
    NSString *_sendMsgPath;
    NSString *_sendMsgImageURL;
    NSString *_headimgUrl;
    NSString *_title;
    NSString *_subTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *headimgUrl; // @synthesize headimgUrl=_headimgUrl;
@property(copy, nonatomic) NSString *sendMsgImageURL; // @synthesize sendMsgImageURL=_sendMsgImageURL;
@property(copy, nonatomic) NSString *sendMsgPath; // @synthesize sendMsgPath=_sendMsgPath;
@property(copy, nonatomic) NSString *sendMsgTitle; // @synthesize sendMsgTitle=_sendMsgTitle;
@property(nonatomic) _Bool showMessageCard; // @synthesize showMessageCard=_showMessageCard;
@property(copy, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
@property(copy, nonatomic) NSString *sessionFrom; // @synthesize sessionFrom=_sessionFrom;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *targetAppId; // @synthesize targetAppId=_targetAppId;
- (void)enterSession:(id)arg1;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

@end

