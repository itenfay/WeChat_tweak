//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, MMLiveBaseTask;
@protocol MMFinderLiveTaskFunctionPlugin;

@interface MMLiveTaskBaseFunctionPlugin : NSObject
{
    MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *_liveTask;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *liveTask; // @synthesize liveTask=_liveTask;
@property(readonly, nonatomic) _Bool isLiveRoom;
@property(readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
- (id)initWithLiveTask:(id)arg1;

@end

