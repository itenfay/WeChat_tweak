//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GameLaunchReportInfo : NSObject
{
    _Bool _useInstallUrl;
    NSString *_appId;
    NSString *_url;
    NSDictionary *_channelReportExtInfo;
}

+ (id)reportInfoWithAppId:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool useInstallUrl; // @synthesize useInstallUrl=_useInstallUrl;
@property(retain, nonatomic) NSDictionary *channelReportExtInfo; // @synthesize channelReportExtInfo=_channelReportExtInfo;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

