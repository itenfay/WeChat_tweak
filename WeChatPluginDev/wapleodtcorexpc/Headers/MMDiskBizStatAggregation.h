//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface MMDiskBizStatAggregation : NSObject
{
    MISSING_TYPE *fileNum;
    MISSING_TYPE *fileSize;
}

+ (void)initialize;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileNum;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)add:(id)arg1;
@property(nonatomic) long long fileSize; // @synthesize fileSize;
@property(nonatomic) long long fileNum; // @synthesize fileNum;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

