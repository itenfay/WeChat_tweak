//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportPackageDeleteActionItem
{
    unsigned int _deleteReason;
    unsigned int _debugType;
    unsigned int _deleteCount;
    unsigned int _abtestStatus;
    unsigned int _lruDeleteSize;
    unsigned int _weappDirSizeBeforeLRUDelete;
    unsigned int _weappDirSizePercentBeforeLRUDelete;
    unsigned int _weappDirSizeAfterLRUDelete;
    unsigned int _weappDirSizePercentAfterLRUDelete;
}

@property(nonatomic) unsigned int weappDirSizePercentAfterLRUDelete; // @synthesize weappDirSizePercentAfterLRUDelete=_weappDirSizePercentAfterLRUDelete;
@property(nonatomic) unsigned int weappDirSizeAfterLRUDelete; // @synthesize weappDirSizeAfterLRUDelete=_weappDirSizeAfterLRUDelete;
@property(nonatomic) unsigned int weappDirSizePercentBeforeLRUDelete; // @synthesize weappDirSizePercentBeforeLRUDelete=_weappDirSizePercentBeforeLRUDelete;
@property(nonatomic) unsigned int weappDirSizeBeforeLRUDelete; // @synthesize weappDirSizeBeforeLRUDelete=_weappDirSizeBeforeLRUDelete;
@property(nonatomic) unsigned int lruDeleteSize; // @synthesize lruDeleteSize=_lruDeleteSize;
@property(nonatomic) unsigned int abtestStatus; // @synthesize abtestStatus=_abtestStatus;
@property(nonatomic) unsigned int deleteCount; // @synthesize deleteCount=_deleteCount;
@property(nonatomic) unsigned int debugType; // @synthesize debugType=_debugType;
@property(nonatomic) unsigned int deleteReason; // @synthesize deleteReason=_deleteReason;
- (id)reportString;

// Remaining properties
@property(copy, nonatomic) NSString *appid;

@end

