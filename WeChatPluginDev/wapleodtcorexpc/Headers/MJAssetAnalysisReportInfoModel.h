//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJAssetAnalysisReportInfoModel : NSObject
{
    long long _realShotAssetCount;
    long long _totalAssetCount;
}

+ (id)modelWithReportInfo:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_totalAssetCount;
+ (void)PBArrayAdd_realShotAssetCount;
@property(nonatomic) long long totalAssetCount; // @synthesize totalAssetCount=_totalAssetCount;
@property(nonatomic) long long realShotAssetCount; // @synthesize realShotAssetCount=_realShotAssetCount;
@property(readonly, copy) NSString *description;
- (id)toReportInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

