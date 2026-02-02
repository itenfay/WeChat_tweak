//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UICollectionView;

@interface MMLiveCommentCollectionCellModel : NSObject
{
    _Bool _needPefixSpace;
    _Bool _ignoreLastLineSpace;
    _Bool _isCellFrameMarginBottomWhenOnly;
    double _cellWidth;
    long long _cellType;
    unsigned long long _index;
    NSMutableArray *_firstShortPubbleCellFrameArr;
    NSMutableArray *_secondShortPubbleCellFrameArr;
    NSMutableArray *_firstLongPubbleCellFrameArr;
    NSMutableArray *_secondLongPubbleCellFrameArr;
    NSMutableArray *_officialPubbleCellFrameArr;
    NSMutableArray *_mostLikePubbleCellFrameArr;
    NSArray *_commentDataArr;
    UICollectionView *_collectionView;
    NSMutableArray *_lastAppendShortPubbleCellFrameArr;
    NSMutableArray *_lastAppendLongPubbleCellFrameArr;
    NSMutableArray *_touchCellFrameArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *touchCellFrameArr; // @synthesize touchCellFrameArr=_touchCellFrameArr;
@property(retain, nonatomic) NSMutableArray *lastAppendLongPubbleCellFrameArr; // @synthesize lastAppendLongPubbleCellFrameArr=_lastAppendLongPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *lastAppendShortPubbleCellFrameArr; // @synthesize lastAppendShortPubbleCellFrameArr=_lastAppendShortPubbleCellFrameArr;
@property(nonatomic) _Bool isCellFrameMarginBottomWhenOnly; // @synthesize isCellFrameMarginBottomWhenOnly=_isCellFrameMarginBottomWhenOnly;
@property(nonatomic) _Bool ignoreLastLineSpace; // @synthesize ignoreLastLineSpace=_ignoreLastLineSpace;
@property(nonatomic) _Bool needPefixSpace; // @synthesize needPefixSpace=_needPefixSpace;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *commentDataArr; // @synthesize commentDataArr=_commentDataArr;
@property(retain, nonatomic) NSMutableArray *mostLikePubbleCellFrameArr; // @synthesize mostLikePubbleCellFrameArr=_mostLikePubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *officialPubbleCellFrameArr; // @synthesize officialPubbleCellFrameArr=_officialPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *secondLongPubbleCellFrameArr; // @synthesize secondLongPubbleCellFrameArr=_secondLongPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *firstLongPubbleCellFrameArr; // @synthesize firstLongPubbleCellFrameArr=_firstLongPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *secondShortPubbleCellFrameArr; // @synthesize secondShortPubbleCellFrameArr=_secondShortPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *firstShortPubbleCellFrameArr; // @synthesize firstShortPubbleCellFrameArr=_firstShortPubbleCellFrameArr;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(readonly, nonatomic) unsigned long long commentCount;
@property(readonly, nonatomic) double cellHeight;
- (void)handleTouchHitOnLocation:(struct CGPoint)arg1 callBack:(CDUnknownBlockType)arg2;
- (_Bool)isCommentShort:(id)arg1;
- (_Bool)isCellFrameMostLikeType:(id)arg1;
- (_Bool)isCellFrameOfficelOrAnchorType:(id)arg1;
- (_Bool)isCellFrameUserType:(id)arg1;
- (double)currentMaxFirstCellFrameOriginX;
- (double)getFirstCellFrameOriginX;
- (double)pubbleCellStandardHeightAndSpace;
- (void)initCellWidth;
- (void)addTouchCellFrameFrom:(id)arg1;
- (void)initTouchCellFrameArr;
- (unsigned long long)allPubbleCount;
- (_Bool)isOnlyPubbleCellBottom;
- (void)updateCellFrameOriginY;
- (void)appendMostLikeCellFrame:(id)arg1;
- (void)appendOfficialCellFrame:(id)arg1;
- (void)appendLongCellFrame:(id)arg1;
- (void)appendShortCellFrame:(id)arg1;
- (void)appendCommentPubbleCellFrame:(id)arg1;
- (void)createCommentPubbleCellFrames;
- (void)initCommentData:(id)arg1;
- (id)initWithCellWidth:(double)arg1 inCollectionView:(id)arg2;

@end

