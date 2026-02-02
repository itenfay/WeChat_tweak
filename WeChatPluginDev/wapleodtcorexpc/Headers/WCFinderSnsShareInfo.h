//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderSnsShareInfo : NSObject
{
    unsigned int _shareCount;
    unsigned int _watchingCount;
    long long _type;
    NSArray *_shareContactListArray;
}

+ (id)finderSnsShareInfoFromObject:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_shareContactListArray;
+ (void)PBArrayAdd_watchingCount;
+ (void)PBArrayAdd_shareCount;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *shareContactListArray; // @synthesize shareContactListArray=_shareContactListArray;
@property(nonatomic) unsigned int watchingCount; // @synthesize watchingCount=_watchingCount;
@property(nonatomic) unsigned int shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)genFinderSnSShareInfo;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

