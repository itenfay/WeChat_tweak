//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MegaVideoWatchLaterServiceCpp
{
}

+ (id)sharedInstance;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)clearAllLocalFeeds;
- (_Bool)isInLocalFeeds:(id)arg1;
- (id)localFeed:(id)arg1;
- (void)localFeeds:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)modifyFeedWatchLaterStatus:(id)arg1 params:(id)arg2 commentScene:(int)arg3 callback:(CDUnknownBlockType)arg4;
- (void)fetchData:(_Bool)arg1 ignoreCache:(_Bool)arg2 cleanUpExisting:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

