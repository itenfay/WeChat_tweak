//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ZTChannelInfo : NSObject
{
    NSString *_appid;
    NSString *_packageid;
    NSString *_schannel;
    NSString *_sceneid;
    NSString *_scenename;
    NSString *_subscenename;
    NSString *_qq;
    NSString *_commid;
    NSString *_openid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *openid; // @synthesize openid=_openid;
@property(copy, nonatomic) NSString *commid; // @synthesize commid=_commid;
@property(copy, nonatomic) NSString *qq; // @synthesize qq=_qq;
@property(copy, nonatomic) NSString *subscenename; // @synthesize subscenename=_subscenename;
@property(copy, nonatomic) NSString *scenename; // @synthesize scenename=_scenename;
@property(copy, nonatomic) NSString *sceneid; // @synthesize sceneid=_sceneid;
@property(copy, nonatomic) NSString *schannel; // @synthesize schannel=_schannel;
@property(copy, nonatomic) NSString *packageid; // @synthesize packageid=_packageid;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toDictionary;

@end

