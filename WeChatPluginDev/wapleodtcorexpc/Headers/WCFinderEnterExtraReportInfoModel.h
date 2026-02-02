//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderEnterExtraReportInfoModel : NSObject
{
    NSString *_jsonInfoByAPI;
    NSString *_redDotTipsUuid;
    unsigned long long _isPIPEnter;
    unsigned long long _pipEnterType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pipEnterType; // @synthesize pipEnterType=_pipEnterType;
@property(nonatomic) unsigned long long isPIPEnter; // @synthesize isPIPEnter=_isPIPEnter;
@property(copy, nonatomic) NSString *redDotTipsUuid; // @synthesize redDotTipsUuid=_redDotTipsUuid;
@property(copy, nonatomic) NSString *jsonInfoByAPI; // @synthesize jsonInfoByAPI=_jsonInfoByAPI;
- (id)genReportEnterInfo;
- (id)init;

@end

