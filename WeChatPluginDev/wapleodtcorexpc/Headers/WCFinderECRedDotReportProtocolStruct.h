//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WCFinderECRedDotReportProtocolStruct : NSObject
{
    NSString *_redDotTipsUuid;
    unsigned long long _redDotCtrlType;
    NSString *_redDotShowInfoPath;
    NSString *_redDotShowInfoParentPath;
    unsigned long long _redDotShowInfoType;
    unsigned long long _redDotShowInfoCountNum;
    NSString *_redDotShowInfoTitle;
    unsigned long long _redDotAction;
    NSDate *_redDotActionTimestamp;
    unsigned long long _receiveRedDotTimeStamp;
    NSString *_redDotShowInfoIconUrl;
    unsigned long long _innerVersion;
    NSString *_reportExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportExtInfo; // @synthesize reportExtInfo=_reportExtInfo;
@property(nonatomic) unsigned long long innerVersion; // @synthesize innerVersion=_innerVersion;
@property(retain, nonatomic) NSString *redDotShowInfoIconUrl; // @synthesize redDotShowInfoIconUrl=_redDotShowInfoIconUrl;
@property(nonatomic) unsigned long long receiveRedDotTimeStamp; // @synthesize receiveRedDotTimeStamp=_receiveRedDotTimeStamp;
@property(retain, nonatomic) NSDate *redDotActionTimestamp; // @synthesize redDotActionTimestamp=_redDotActionTimestamp;
@property(nonatomic) unsigned long long redDotAction; // @synthesize redDotAction=_redDotAction;
@property(retain, nonatomic) NSString *redDotShowInfoTitle; // @synthesize redDotShowInfoTitle=_redDotShowInfoTitle;
@property(nonatomic) unsigned long long redDotShowInfoCountNum; // @synthesize redDotShowInfoCountNum=_redDotShowInfoCountNum;
@property(nonatomic) unsigned long long redDotShowInfoType; // @synthesize redDotShowInfoType=_redDotShowInfoType;
@property(retain, nonatomic) NSString *redDotShowInfoParentPath; // @synthesize redDotShowInfoParentPath=_redDotShowInfoParentPath;
@property(retain, nonatomic) NSString *redDotShowInfoPath; // @synthesize redDotShowInfoPath=_redDotShowInfoPath;
@property(nonatomic) unsigned long long redDotCtrlType; // @synthesize redDotCtrlType=_redDotCtrlType;
@property(retain, nonatomic) NSString *redDotTipsUuid; // @synthesize redDotTipsUuid=_redDotTipsUuid;
- (id)toReportString;
- (id)reportParams;

@end

