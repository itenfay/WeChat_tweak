//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveHonCoverCacheInfo : NSObject
{
    _Bool _received;
    _Bool _honCoverReceive;
    unsigned int _full;
    unsigned long long _liveId;
    NSString *_honCoverUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_full;
+ (void)PBArrayAdd_honCoverReceive;
+ (void)PBArrayAdd_received;
+ (void)PBArrayAdd_honCoverUrl;
+ (void)PBArrayAdd_liveId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int full; // @synthesize full=_full;
@property(nonatomic) _Bool honCoverReceive; // @synthesize honCoverReceive=_honCoverReceive;
@property(nonatomic) _Bool received; // @synthesize received=_received;
@property(retain, nonatomic) NSString *honCoverUrl; // @synthesize honCoverUrl=_honCoverUrl;
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

