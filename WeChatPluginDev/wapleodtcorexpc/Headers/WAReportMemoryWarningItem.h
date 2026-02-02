//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportMemoryWarningItem
{
    unsigned int _cacheNum;
    long long _processMemUsed;
    unsigned long long _deviceMem;
}

@property(nonatomic) unsigned long long deviceMem; // @synthesize deviceMem=_deviceMem;
@property(nonatomic) long long processMemUsed; // @synthesize processMemUsed=_processMemUsed;
@property(nonatomic) unsigned int cacheNum; // @synthesize cacheNum=_cacheNum;
- (id)reportString;
- (int)reportID;

@end

