//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSMutableDictionary;

@interface MMFinderLiveGiftCustomizationCommitLogic : NSObject
{
    NSMutableDictionary *_commitQueues;
}

@property(retain, nonatomic) NSMutableDictionary *commitQueues; // @synthesize commitQueues=_commitQueues;
- (void)commitChangesToGiftCustomizationModel:(id)arg1 withTaskId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
