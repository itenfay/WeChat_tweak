//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportPrefetchGetCodePkgHitItem
{
    unsigned int _isFirstHit;
    unsigned int _reportId;
    unsigned int _packageType;
    NSString *_moduleName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) unsigned int packageType; // @synthesize packageType=_packageType;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) unsigned int isFirstHit; // @synthesize isFirstHit=_isFirstHit;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

// Remaining properties
@property(copy, nonatomic) NSString *instanceId;
@property(copy, nonatomic) NSString *username;

@end

