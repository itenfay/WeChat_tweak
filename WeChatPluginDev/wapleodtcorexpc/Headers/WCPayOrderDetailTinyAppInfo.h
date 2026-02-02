//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOrderDetailTinyAppInfo : NSObject
{
    unsigned int _tinyAppVersion;
    unsigned int _sendRecordId;
    unsigned int _userRecordId;
    NSString *_tinyAppName;
    NSString *_tinyAppLogo;
    NSString *_tinyAppDesc;
    NSString *_tinyAppUserName;
    NSString *_tinyAppPath;
    NSString *_tinyAppBtnText;
    unsigned long long _activityId;
    unsigned long long _activityType;
    unsigned long long _awardId;
    unsigned long long _activityMchId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long activityMchId; // @synthesize activityMchId=_activityMchId;
@property(nonatomic) unsigned int userRecordId; // @synthesize userRecordId=_userRecordId;
@property(nonatomic) unsigned int sendRecordId; // @synthesize sendRecordId=_sendRecordId;
@property(nonatomic) unsigned long long awardId; // @synthesize awardId=_awardId;
@property(nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) unsigned long long activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *tinyAppBtnText; // @synthesize tinyAppBtnText=_tinyAppBtnText;
@property(nonatomic) unsigned int tinyAppVersion; // @synthesize tinyAppVersion=_tinyAppVersion;
@property(retain, nonatomic) NSString *tinyAppPath; // @synthesize tinyAppPath=_tinyAppPath;
@property(retain, nonatomic) NSString *tinyAppUserName; // @synthesize tinyAppUserName=_tinyAppUserName;
@property(retain, nonatomic) NSString *tinyAppDesc; // @synthesize tinyAppDesc=_tinyAppDesc;
@property(retain, nonatomic) NSString *tinyAppLogo; // @synthesize tinyAppLogo=_tinyAppLogo;
@property(retain, nonatomic) NSString *tinyAppName; // @synthesize tinyAppName=_tinyAppName;

@end

