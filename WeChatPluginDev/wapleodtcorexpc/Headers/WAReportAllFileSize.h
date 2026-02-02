//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WAReportAllFileSize
{
    NSArray *m_arrDirPrefixes;
    _Bool _isTriggerSingleAppClean;
    _Bool _isTriggerAllAppClean;
    _Bool _runtimeSpaceStaticsEnable;
    unsigned long long _fileSize;
    long long _dirPrefix;
    long long _reportFileSizeScene;
    unsigned long long _totalFileSize;
    long long _runtimeFileOccupation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool runtimeSpaceStaticsEnable; // @synthesize runtimeSpaceStaticsEnable=_runtimeSpaceStaticsEnable;
@property(nonatomic) long long runtimeFileOccupation; // @synthesize runtimeFileOccupation=_runtimeFileOccupation;
@property(nonatomic) _Bool isTriggerAllAppClean; // @synthesize isTriggerAllAppClean=_isTriggerAllAppClean;
@property(nonatomic) _Bool isTriggerSingleAppClean; // @synthesize isTriggerSingleAppClean=_isTriggerSingleAppClean;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(nonatomic) long long reportFileSizeScene; // @synthesize reportFileSizeScene=_reportFileSizeScene;
@property(nonatomic) long long dirPrefix; // @synthesize dirPrefix=_dirPrefix;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (id)reportString;
- (int)reportID;
- (id)init;

@end

