//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface StorageUsageSummaryModel : NSObject
{
    unsigned long long _appSize;
    NSMutableArray *_detailModels;
    long long _deviceSize;
    long long _freeSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long freeSize; // @synthesize freeSize=_freeSize;
@property(nonatomic) long long deviceSize; // @synthesize deviceSize=_deviceSize;
@property(retain, nonatomic) NSMutableArray *detailModels; // @synthesize detailModels=_detailModels;
@property(nonatomic) unsigned long long appSize; // @synthesize appSize=_appSize;
- (_Bool)p_isEmptyChatLog;
- (id)description;
- (void)updateAppSizeWithDetailSize;
- (void)initForLoading;
- (void)refreshModelWithAppGroup:(unsigned long long)arg1 canCleanCache:(unsigned long long)arg2 otherUser:(unsigned long long)arg3 vacuumChatLog:(unsigned long long)arg4 vacuumOther:(unsigned long long)arg5 deepCleanResource:(unsigned long long)arg6;
- (id)initWithScanStat:(id)arg1;
- (id)init;

@end

