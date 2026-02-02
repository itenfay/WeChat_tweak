//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportPackageCheckAction
{
    _Bool _stopByEnterForeground;
    unsigned int _allPackageSize;
    unsigned int _allPackageClientStoragePercent;
    unsigned int _clientStorageFreePercent;
    unsigned int _abtestStatus;
    unsigned int _weappCountThatHasPackage;
    unsigned int _costTime;
    unsigned int _publibCount;
    unsigned long long _jsCodeCacheSizeInBytes;
    unsigned long long _costTimeInMs;
}

@property(nonatomic) unsigned long long costTimeInMs; // @synthesize costTimeInMs=_costTimeInMs;
@property(nonatomic) unsigned long long jsCodeCacheSizeInBytes; // @synthesize jsCodeCacheSizeInBytes=_jsCodeCacheSizeInBytes;
@property(nonatomic) unsigned int publibCount; // @synthesize publibCount=_publibCount;
@property(nonatomic) _Bool stopByEnterForeground; // @synthesize stopByEnterForeground=_stopByEnterForeground;
@property(nonatomic) unsigned int costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned int weappCountThatHasPackage; // @synthesize weappCountThatHasPackage=_weappCountThatHasPackage;
@property(nonatomic) unsigned int abtestStatus; // @synthesize abtestStatus=_abtestStatus;
@property(nonatomic) unsigned int clientStorageFreePercent; // @synthesize clientStorageFreePercent=_clientStorageFreePercent;
@property(nonatomic) unsigned int allPackageClientStoragePercent; // @synthesize allPackageClientStoragePercent=_allPackageClientStoragePercent;
@property(nonatomic) unsigned int allPackageSize; // @synthesize allPackageSize=_allPackageSize;
- (id)reportString;

@end

