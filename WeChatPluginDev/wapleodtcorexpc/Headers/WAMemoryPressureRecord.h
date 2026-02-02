//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WAMemoryPressureRecord
{
    NSMutableArray *_records;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
- (id)getRecordDescriptionInRecentInterval:(unsigned long long)arg1 getAllLevelCount:(unsigned int *)arg2 normalLevelCount:(unsigned int *)arg3 warningLevelCount:(unsigned int *)arg4 UrgentLevelCount:(unsigned int *)arg5 aboveWarningLevelCount:(unsigned int *)arg6 continuityWarningCount:(unsigned int *)arg7 continuityUrgentCount:(unsigned int *)arg8;
- (void)recordMemoryPressureWithLevel:(unsigned long long)arg1;
- (id)init;

@end

