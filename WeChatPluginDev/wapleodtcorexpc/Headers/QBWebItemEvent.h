//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface QBWebItemEvent : NSObject
{
    int _apnType;
    long long _eventType;
    double _timestamp;
    NSDictionary *_userInfo;
    NSURL *_URL;
    NSURL *_mainDocumentURL;
    NSString *_HTTPMethod;
    NSString *_errorDescription;
    long long _statusCode;
    long long _directType;
    id _webview;
}

+ (id)descriptionForTimestamp:(double)arg1;
+ (id)eventWithType:(long long)arg1 userInfo:(id)arg2;
@property(nonatomic) __weak id webview; // @synthesize webview=_webview;
@property(nonatomic) int apnType; // @synthesize apnType=_apnType;
@property(nonatomic) long long directType; // @synthesize directType=_directType;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(retain, nonatomic) NSURL *mainDocumentURL; // @synthesize mainDocumentURL=_mainDocumentURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)validJSONUserInfo;
- (id)eventName;
- (id)JSONInfo;

@end

