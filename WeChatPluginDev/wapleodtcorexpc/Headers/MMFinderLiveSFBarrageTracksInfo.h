//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveSFBarrageItemInfo, NSArray, NSMutableArray;

@interface MMFinderLiveSFBarrageTracksInfo : NSObject
{
    NSArray *_trackPositionYPercentList;
    NSMutableArray *_allTracksInfo;
    NSMutableArray *_allBarrageList;
    MMFinderLiveSFBarrageItemInfo *_currentTappedBarrageItem;
    NSMutableArray *_listOfBarrageAfterTapped;
    double _barrageContentWidth;
    double _barrageContentHeight;
    unsigned long long _trackCount;
    CDUnknownBlockType _invokeReRunBlock;
    CDUnknownBlockType _hasBarrageMovingAtTrackCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hasBarrageMovingAtTrackCallback; // @synthesize hasBarrageMovingAtTrackCallback=_hasBarrageMovingAtTrackCallback;
@property(copy, nonatomic) CDUnknownBlockType invokeReRunBlock; // @synthesize invokeReRunBlock=_invokeReRunBlock;
@property(nonatomic) unsigned long long trackCount; // @synthesize trackCount=_trackCount;
@property(nonatomic) double barrageContentHeight; // @synthesize barrageContentHeight=_barrageContentHeight;
@property(nonatomic) double barrageContentWidth; // @synthesize barrageContentWidth=_barrageContentWidth;
@property(retain, nonatomic) NSMutableArray *listOfBarrageAfterTapped; // @synthesize listOfBarrageAfterTapped=_listOfBarrageAfterTapped;
@property(retain, nonatomic) MMFinderLiveSFBarrageItemInfo *currentTappedBarrageItem; // @synthesize currentTappedBarrageItem=_currentTappedBarrageItem;
@property(retain, nonatomic) NSMutableArray *allBarrageList; // @synthesize allBarrageList=_allBarrageList;
@property(retain, nonatomic) NSMutableArray *allTracksInfo; // @synthesize allTracksInfo=_allTracksInfo;
@property(retain, nonatomic) NSArray *trackPositionYPercentList; // @synthesize trackPositionYPercentList=_trackPositionYPercentList;
- (void)updateTrackPositionYPercentList:(id)arg1;
- (_Bool)hasAvailableTrackInfo;
- (id)getCurrentVisibleSortedBarrageItemList;
- (void)updateBarrageTrackInfosPositionY;
- (id)createSingleTrack:(double)arg1;
- (void)configBarrageTrackInfos;
- (id)initWithContentSize:(struct CGSize)arg1 trackPosYPercentList:(id)arg2;

@end

