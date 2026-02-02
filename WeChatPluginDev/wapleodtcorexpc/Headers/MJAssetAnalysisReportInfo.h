//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJAssetAnalysisReportInfo : NSObject
{
    long long _realShotAssetCount;
    long long _totalAssetCount;
}

+ (id)emptyReportInfo;
@property(readonly, nonatomic) long long totalAssetCount; // @synthesize totalAssetCount=_totalAssetCount;
@property(readonly, nonatomic) long long realShotAssetCount; // @synthesize realShotAssetCount=_realShotAssetCount;
- (id)description;
- (void)fillWithReportInfo:(id)arg1;
- (id)initWithRealShotAssetCount:(long long)arg1 totalAssetCount:(long long)arg2;

@end

