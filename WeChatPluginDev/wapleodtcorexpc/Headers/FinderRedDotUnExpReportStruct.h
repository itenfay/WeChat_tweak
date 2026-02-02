//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FinderRedDotUnExpReportStruct : NSObject
{
    NSString *_path;
    NSString *_tipsUuid;
    unsigned long long _exposeTimeMs;
    NSDictionary *_reportDict;
    unsigned long long _businessType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSDictionary *reportDict; // @synthesize reportDict=_reportDict;
@property(nonatomic) unsigned long long exposeTimeMs; // @synthesize exposeTimeMs=_exposeTimeMs;
@property(retain, nonatomic) NSString *tipsUuid; // @synthesize tipsUuid=_tipsUuid;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;

@end

