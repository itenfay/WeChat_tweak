//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingMusicSquareDataServiceCpp
{
}

+ (id)sharedInstance;
- (void)saveCachedData:(id)arg1;
- (id)getCachedData;
- (void)updateSingleDiscoverItem:(id)arg1 line:(id)arg2;
- (int)getLoadingStatus;
- (id)getSquareData;
- (void)stopFetching;
- (id)fetchData:(id)arg1;
- (_Bool)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

