//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportHTMLJSAPIItem
{
    NSString *_currentUrl;
    NSString *_funcName;
    NSString *_keyParam;
    long long _jsapiResult;
    long long _permissionValue;
    long long _errorCode;
    NSString *_errorMsgStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorMsgStr; // @synthesize errorMsgStr=_errorMsgStr;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long permissionValue; // @synthesize permissionValue=_permissionValue;
@property(nonatomic) long long jsapiResult; // @synthesize jsapiResult=_jsapiResult;
@property(retain, nonatomic) NSString *keyParam; // @synthesize keyParam=_keyParam;
@property(retain, nonatomic) NSString *funcName; // @synthesize funcName=_funcName;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
- (id)reportString;
- (int)reportID;

@end

