//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface OMCTimelineMutation : NSObject
{
    NSArray *_addedMutationInfos;
    NSArray *_removedMutationInfos;
    NSArray *_changedMutationInfos;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *changedMutationInfos; // @synthesize changedMutationInfos=_changedMutationInfos;
@property(readonly, nonatomic) NSArray *removedMutationInfos; // @synthesize removedMutationInfos=_removedMutationInfos;
@property(readonly, nonatomic) NSArray *addedMutationInfos; // @synthesize addedMutationInfos=_addedMutationInfos;
- (id)description;
- (id)initWithBackingMutationInfo:(const void *)arg1;

@end

