//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AppCommunicateData, NSString;

@interface OpenApiLaunchContext : NSObject
{
    _Bool _needWritePasteBoard;
    NSString *_appId;
    NSString *_sourceInfo;
    NSString *_bizInfo;
    AppCommunicateData *_appCommunicateData;
    NSString *_safetyControlReportStr;
    NSString *_currentPageUrl;
    NSString *_currentWeAppId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needWritePasteBoard; // @synthesize needWritePasteBoard=_needWritePasteBoard;
@property(retain, nonatomic) NSString *currentWeAppId; // @synthesize currentWeAppId=_currentWeAppId;
@property(retain, nonatomic) NSString *currentPageUrl; // @synthesize currentPageUrl=_currentPageUrl;
@property(retain, nonatomic) NSString *safetyControlReportStr; // @synthesize safetyControlReportStr=_safetyControlReportStr;
@property(retain, nonatomic) AppCommunicateData *appCommunicateData; // @synthesize appCommunicateData=_appCommunicateData;
@property(retain, nonatomic) NSString *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) NSString *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (_Bool)isAppCommunicateDataValid;

@end

