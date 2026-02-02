//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NewLifeThumbUpLogic : NSObject
{
    NSMutableDictionary *_feedThumbUpTempInfo;
    NSMutableDictionary *_feedThumbUpOperationQueue;
}

+ (id)thumbUpRequestFromOperation:(id)arg1;
+ (id)revertMonotonicDataFromLocalDataItem:(id)arg1;
+ (id)tempMonotonicDataFromLocalDataItem:(id)arg1 isThumbUp:(_Bool)arg2;
+ (void)updateMonotonicDataWithLocalDataItem:(id)arg1 thumbUp:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *feedThumbUpOperationQueue; // @synthesize feedThumbUpOperationQueue=_feedThumbUpOperationQueue;
@property(retain, nonatomic) NSMutableDictionary *feedThumbUpTempInfo; // @synthesize feedThumbUpTempInfo=_feedThumbUpTempInfo;
- (void)removeTempInfoForFeedId:(id)arg1;
- (void)insertTempInfoForOperation:(id)arg1;
- (void)performThumbUpOperation:(id)arg1 localDataItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkThumbUpOperation:(id)arg1;
- (void)enqueueThumbUpOperation:(id)arg1;
- (id)isTempThumbUpForFeedId:(id)arg1;
- (void)dealloc;
- (id)init;

@end

