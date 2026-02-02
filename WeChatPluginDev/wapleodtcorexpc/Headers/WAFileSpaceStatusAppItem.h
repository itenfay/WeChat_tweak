//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAFileSpaceStatusAppItem : NSObject
{
    unsigned int _totalFileNum;
    unsigned int _contentModifyTime;
    unsigned int _lastScanTime;
    unsigned long long _totalFileSize;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastScanTime;
+ (void)PBArrayAdd_contentModifyTime;
+ (void)PBArrayAdd_totalFileNum;
+ (void)PBArrayAdd_totalFileSize;
@property(nonatomic) unsigned int lastScanTime; // @synthesize lastScanTime=_lastScanTime;
@property(nonatomic) unsigned int contentModifyTime; // @synthesize contentModifyTime=_contentModifyTime;
@property(nonatomic) unsigned int totalFileNum; // @synthesize totalFileNum=_totalFileNum;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
- (long long)compareByContentModifyTime:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

