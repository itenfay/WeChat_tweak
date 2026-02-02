//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface WCContactCacheSliceRecordInfo : NSObject
{
    _Bool _isHadNotSave;
    unsigned int _recordTime;
    NSMutableSet *_setUserName;
}

+ (void)initialize;
+ (void)PBArrayAdd_isHadNotSave;
+ (void)PBArrayAdd_setUserName;
+ (void)PBArrayAdd_recordTime;
- (void).cxx_destruct;
@property(nonatomic) _Bool isHadNotSave; // @synthesize isHadNotSave=_isHadNotSave;
@property(retain, nonatomic) NSMutableSet *setUserName; // @synthesize setUserName=_setUserName;
@property(nonatomic) unsigned int recordTime; // @synthesize recordTime=_recordTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

