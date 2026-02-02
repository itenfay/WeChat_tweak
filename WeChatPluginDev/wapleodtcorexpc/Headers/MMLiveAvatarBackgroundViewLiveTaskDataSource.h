//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, NSString;

@interface MMLiveAvatarBackgroundViewLiveTaskDataSource : NSObject
{
    MMFinderLiveTask *_liveTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(readonly, nonatomic) NSString *anchorIdentityId;
@property(readonly, nonatomic) _Bool isKtvMode;
@property(readonly, nonatomic) _Bool isAnchor;
@property(readonly, nonatomic) NSString *coverImageUri;
@property(readonly, nonatomic) NSString *adCoverImageUri;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

