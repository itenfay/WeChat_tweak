//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveMultiAngleCacheInfo : NSObject
{
    _Bool _show;
    unsigned long long _liveId;
}

+ (void)initialize;
+ (void)PBArrayAdd_show;
+ (void)PBArrayAdd_liveId;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

