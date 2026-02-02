//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSMutableDictionary;

@interface MMFinderLiveGiftNewCustomizationCommitLogic : NSObject
{
    MMFinderLiveTaskId *_finderTaskId;
    NSMutableDictionary *_committingDict;
    NSMutableDictionary *_pendingDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pendingDict; // @synthesize pendingDict=_pendingDict;
@property(retain, nonatomic) NSMutableDictionary *committingDict; // @synthesize committingDict=_committingDict;
@property(retain, nonatomic) MMFinderLiveTaskId *finderTaskId; // @synthesize finderTaskId=_finderTaskId;
- (id)enqueueCommitTaskWithGiftProductId:(id)arg1;
- (void)tryCommitNextTaskWithGiftProductId:(id)arg1;
- (void)commitGiftNewCustomizationWithGiftProductId:(id)arg1 modifyNewCustomText:(_Bool)arg2 newCustomText:(id)arg3 componentKeyList:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)initWithTaskId:(id)arg1;

@end

