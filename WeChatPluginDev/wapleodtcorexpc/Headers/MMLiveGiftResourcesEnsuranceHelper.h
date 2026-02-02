//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId;

@interface MMLiveGiftResourcesEnsuranceHelper : NSObject
{
    MMFinderLiveTaskId *_liveTaskId;
    CDUnknownBlockType _giftFetchingWorkItem;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType giftFetchingWorkItem; // @synthesize giftFetchingWorkItem=_giftFetchingWorkItem;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)validateAvailabilityOfResources:(id)arg1 correlationId:(id)arg2;
- (void)invokeResourceDownloadWorkItems:(id)arg1 resourceDescriptors:(id)arg2 correlationId:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)ensureGiftResourcesEx:(id)arg1 correlationId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)ensureGiftResources:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithLiveTaskId:(id)arg1;

@end

