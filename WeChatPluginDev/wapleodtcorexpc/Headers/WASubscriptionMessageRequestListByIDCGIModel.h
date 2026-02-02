//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WASubscriptionMessageRequestListByIDCGIModel : NSObject
{
    unsigned int _appType;
    unsigned int _popupScene;
    NSArray *_templateArray;
    NSString *_username;
    unsigned long long _scene;
    NSString *_appid;
    NSString *_sessionId;
    NSString *_extInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int popupScene; // @synthesize popupScene=_popupScene;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSArray *templateArray; // @synthesize templateArray=_templateArray;

@end

