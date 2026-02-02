//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportPackageReuseInfo
{
    unsigned int _packageType;
    NSString *_packageMd5;
    NSString *_moduleName;
    unsigned long long _reuseType;
    NSString *_reuseReason;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reuseReason; // @synthesize reuseReason=_reuseReason;
@property(nonatomic) unsigned long long reuseType; // @synthesize reuseType=_reuseType;
@property(nonatomic) unsigned int packageType; // @synthesize packageType=_packageType;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSString *packageMd5; // @synthesize packageMd5=_packageMd5;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

