//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, VideoRingNetProvider;

@interface RingToneSearchViewModel : NSObject
{
    _Bool _continueFlag;
    unsigned int _dataOffset;
    NSMutableArray *_rings;
    VideoRingNetProvider *_provider;
    unsigned long long _searchRequestID;
    NSString *_curQuery;
    NSMutableSet *_feedIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableSet *feedIDs; // @synthesize feedIDs=_feedIDs;
@property(copy, nonatomic) NSString *curQuery; // @synthesize curQuery=_curQuery;
@property(nonatomic) unsigned int dataOffset; // @synthesize dataOffset=_dataOffset;
@property(nonatomic) unsigned long long searchRequestID; // @synthesize searchRequestID=_searchRequestID;
@property(retain, nonatomic) VideoRingNetProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSMutableArray *rings; // @synthesize rings=_rings;
- (void)dealloc;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (id)searchMusicRing:(id)arg1;
- (void)clearData;
- (id)searchRing:(id)arg1 isFirstPage:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

