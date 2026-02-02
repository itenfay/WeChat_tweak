//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, RoamBackupPackage;

@interface WXGRoamBackupPackageModel : NSObject
{
    _Bool _isAutoBackup;
    _Bool _isBackupWhenLowPower;
    _Bool _isBackupWithMobileNet;
    _Bool _isCreate;
    _Bool _isBackup;
    _Bool _hasPermission;
    unsigned int _lastErrorTime;
    RoamBackupPackage *_package;
    unsigned long long _notifyCode;
    unsigned long long _totalSize;
    NSMutableArray *_convTimeRangeList;
    unsigned long long _restoreSize;
    unsigned long long _currentCount;
    unsigned long long _totalCount;
    unsigned long long _sortNum;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sortNum; // @synthesize sortNum=_sortNum;
@property(nonatomic) _Bool hasPermission; // @synthesize hasPermission=_hasPermission;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) unsigned long long restoreSize; // @synthesize restoreSize=_restoreSize;
@property(retain, nonatomic) NSMutableArray *convTimeRangeList; // @synthesize convTimeRangeList=_convTimeRangeList;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) _Bool isBackup; // @synthesize isBackup=_isBackup;
@property(nonatomic) _Bool isCreate; // @synthesize isCreate=_isCreate;
@property(nonatomic) unsigned long long notifyCode; // @synthesize notifyCode=_notifyCode;
@property(nonatomic) unsigned int lastErrorTime; // @synthesize lastErrorTime=_lastErrorTime;
@property(nonatomic) _Bool isBackupWithMobileNet; // @synthesize isBackupWithMobileNet=_isBackupWithMobileNet;
@property(nonatomic) _Bool isBackupWhenLowPower; // @synthesize isBackupWhenLowPower=_isBackupWhenLowPower;
@property(nonatomic) _Bool isAutoBackup; // @synthesize isAutoBackup=_isAutoBackup;
@property(retain, nonatomic) RoamBackupPackage *package; // @synthesize package=_package;

@end

