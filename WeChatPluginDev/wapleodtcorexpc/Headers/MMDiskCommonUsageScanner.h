//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMDiskCommonUsageScanner : NSObject
{
    unsigned int _totalKiloSize;
    unsigned int _totalDelKiloSize;
    unsigned int _totalTime;
    unsigned long long _totalSizeBytes;
    unsigned long long _totalDelSizeBytes;
}

+ (long long)latestTimeWithCurTime:(long long)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5;
+ (id)getNextFolderConfig:(id)arg1 usageConfig:(id)arg2;
+ (unsigned long long)getMatchTime:(id)arg1 withConfig:(id)arg2;
+ (unsigned long long)fileTimeFromTimeType:(long long)arg1;
@property(nonatomic) unsigned long long totalDelSizeBytes; // @synthesize totalDelSizeBytes=_totalDelSizeBytes;
@property(nonatomic) unsigned long long totalSizeBytes; // @synthesize totalSizeBytes=_totalSizeBytes;
@property(nonatomic) unsigned int totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned int totalDelKiloSize; // @synthesize totalDelKiloSize=_totalDelKiloSize;
@property(nonatomic) unsigned int totalKiloSize; // @synthesize totalKiloSize=_totalKiloSize;
- (void)startScanWithRootPath:(id)arg1 usageConfig:(id)arg2;
- (void)scanFolderBeginWithParentPath:(id)arg1 usageConfig:(id)arg2 depth:(unsigned long long)arg3;

@end

