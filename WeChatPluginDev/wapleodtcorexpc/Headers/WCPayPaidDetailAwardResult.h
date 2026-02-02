//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayPaidDetailAwardResult : NSObject
{
    unsigned int _retCode;
    NSString *_activityIconUrl;
    NSString *_activityMainTitle;
    NSString *_activitySubTitle;
    NSString *_activityBtnTitle;
    NSString *_activityUrl;
    NSString *_tinyAppName;
    NSString *_tinyAppLogo;
    NSString *_tinyAppDesc;
    NSString *_tinyAppUsername;
    NSString *_tinyAppPath;
    NSString *_tinyAppBtnText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tinyAppBtnText; // @synthesize tinyAppBtnText=_tinyAppBtnText;
@property(retain, nonatomic) NSString *tinyAppPath; // @synthesize tinyAppPath=_tinyAppPath;
@property(retain, nonatomic) NSString *tinyAppUsername; // @synthesize tinyAppUsername=_tinyAppUsername;
@property(retain, nonatomic) NSString *tinyAppDesc; // @synthesize tinyAppDesc=_tinyAppDesc;
@property(retain, nonatomic) NSString *tinyAppLogo; // @synthesize tinyAppLogo=_tinyAppLogo;
@property(retain, nonatomic) NSString *tinyAppName; // @synthesize tinyAppName=_tinyAppName;
@property(retain, nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(retain, nonatomic) NSString *activityBtnTitle; // @synthesize activityBtnTitle=_activityBtnTitle;
@property(retain, nonatomic) NSString *activitySubTitle; // @synthesize activitySubTitle=_activitySubTitle;
@property(retain, nonatomic) NSString *activityMainTitle; // @synthesize activityMainTitle=_activityMainTitle;
@property(retain, nonatomic) NSString *activityIconUrl; // @synthesize activityIconUrl=_activityIconUrl;
@property(nonatomic) unsigned int retCode; // @synthesize retCode=_retCode;
- (id)init;

@end

