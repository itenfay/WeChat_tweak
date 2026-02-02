//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveSFBarrageItemInfo, NSMutableArray;

@interface MMFinderLiveSFBarrageSingleTrackInfo : NSObject
{
    _Bool _unValid;
    _Bool _isAvailable;
    double _positionY;
    double _positionYPercent;
    NSMutableArray *_currVisibleBarrageItemList;
    CDUnknownBlockType _hasBarrageMovingCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hasBarrageMovingCallback; // @synthesize hasBarrageMovingCallback=_hasBarrageMovingCallback;
@property(retain, nonatomic) NSMutableArray *currVisibleBarrageItemList; // @synthesize currVisibleBarrageItemList=_currVisibleBarrageItemList;
@property(nonatomic) double positionYPercent; // @synthesize positionYPercent=_positionYPercent;
@property(nonatomic) double positionY; // @synthesize positionY=_positionY;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) _Bool unValid; // @synthesize unValid=_unValid;
- (void)removeBarrageItem:(id)arg1;
- (void)addBarrageItem:(id)arg1;
@property(readonly, nonatomic) _Bool canUsed;
@property(readonly, nonatomic) MMFinderLiveSFBarrageItemInfo *lastMovingBarrageItemInfo;
@property(readonly, nonatomic) MMFinderLiveSFBarrageItemInfo *lastBarrageItemInfo;

@end

