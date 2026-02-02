//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMOnlineDeviceFunctionMsg : NSObject
{
    unsigned int _createTime;
    NSString *_functionName;
    NSString *_arg;
    NSString *_fromUserName;
    NSString *_toUserName;
    NSString *_deviceType;
}

+ (id)functionMsgWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(retain, nonatomic) NSString *arg; // @synthesize arg=_arg;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
- (void)parseDeivceActiveMsg;
@property(nonatomic) unsigned int lockDevice;
@property(nonatomic) _Bool shouldMuteNotification;
@property(nonatomic) _Bool isActive;
@property(retain, nonatomic) NSString *uuid;
@property(retain, nonatomic) NSString *deviceName;
- (void)parseMarkReadMsg;
@property(nonatomic) unsigned long long messageSvrId;

@end

