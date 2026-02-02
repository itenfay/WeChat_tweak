//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdExpressionGeneralJumpInfo : NSObject
{
    unsigned int _weappVersion;
    int _miniProgramType;
    long long _type;
    NSString *_uxInfo;
    unsigned long long _appointmentId;
    NSString *_canvasId;
    NSString *_h5Url;
    NSString *_weappUserName;
    NSString *_weappPath;
}

- (void).cxx_destruct;
@property(nonatomic) int miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;
@property(retain, nonatomic) NSString *weappPath; // @synthesize weappPath=_weappPath;
@property(retain, nonatomic) NSString *weappUserName; // @synthesize weappUserName=_weappUserName;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(nonatomic) unsigned long long appointmentId; // @synthesize appointmentId=_appointmentId;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

