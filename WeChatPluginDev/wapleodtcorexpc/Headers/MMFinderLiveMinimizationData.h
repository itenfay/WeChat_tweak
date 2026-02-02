//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderDataItem, WCFinderLiveShareItem;

@interface MMFinderLiveMinimizationData
{
    unsigned long long _liveId;
    WCFinderDataItem *_finderDataItem;
    WCFinderLiveShareItem *_finderLiveShareItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_finderLiveShareItem;
+ (void)PBArrayAdd_finderDataItem;
+ (void)PBArrayAdd_liveId;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveShareItem *finderLiveShareItem; // @synthesize finderLiveShareItem=_finderLiveShareItem;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)initWithLiveId:(unsigned long long)arg1 dataItem:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

