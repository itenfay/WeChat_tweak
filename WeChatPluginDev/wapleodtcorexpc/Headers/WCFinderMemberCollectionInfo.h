//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCFinderMemberCollectionInfo : NSObject
{
    _Bool _continueFlag;
    NSMutableArray *_collectionInfoArray;
    unsigned long long _collectionCount;
    NSData *_lastBuffer;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_lastBuffer;
+ (void)PBArrayAdd_continueFlag;
+ (void)PBArrayAdd_collectionCount;
+ (void)PBArrayAdd_collectionInfoArray;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) unsigned long long collectionCount; // @synthesize collectionCount=_collectionCount;
@property(retain, nonatomic) NSMutableArray *collectionInfoArray; // @synthesize collectionInfoArray=_collectionInfoArray;
- (id)initWithMemberCollectionInfo:(id)arg1;
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

