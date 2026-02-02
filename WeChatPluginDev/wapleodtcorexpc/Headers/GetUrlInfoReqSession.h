//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GetUrlInfoReqSession : NSObject
{
    unsigned int _sessionType;
    NSString *_sessionName;
    NSString *_objId;
    NSString *_msgUserName;
}

+ (id)miniapp:(id)arg1;
+ (id)web:(id)arg1;
+ (id)sns:(id)arg1 snsId:(id)arg2;
+ (id)groupChat:(id)arg1 msgUserName:(id)arg2;
+ (id)singleChat:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *msgUserName; // @synthesize msgUserName=_msgUserName;
@property(retain, nonatomic) NSString *objId; // @synthesize objId=_objId;
@property(nonatomic) unsigned int sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;

@end

