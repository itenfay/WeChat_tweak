//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBCompressRecordItem : NSObject
{
    unsigned int _totalPageCount;
    unsigned int _freePageCount;
    long long _startTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_freePageCount;
+ (void)PBArrayAdd_totalPageCount;
+ (void)PBArrayAdd_startTime;
@property(nonatomic) unsigned int freePageCount; // @synthesize freePageCount=_freePageCount;
@property(nonatomic) unsigned int totalPageCount; // @synthesize totalPageCount=_totalPageCount;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

