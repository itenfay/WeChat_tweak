//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;
@protocol TextStateCollectionViewLayoutHistoryCalendarDelegate;

@interface TextStateCollectionViewLayoutHistoryCalendar : UICollectionViewLayout
{
    _Bool _showStoryEntry;
    id <TextStateCollectionViewLayoutHistoryCalendarDelegate> _delegate;
    unsigned long long _itemCountPerRow;
    double _contentWidth;
    double _padding;
    double _contentHeight;
    NSMutableArray *_sectionRangeList;
    NSMutableArray *_sectionItemCountList;
    CDUnknownBlockType _sectionBeginComparator;
    CDUnknownBlockType _sectionEndComparator;
}

+ (double)yearHeight;
+ (double)sectionHeaderWidth;
+ (struct CGSize)itemSize;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sectionEndComparator; // @synthesize sectionEndComparator=_sectionEndComparator;
@property(copy, nonatomic) CDUnknownBlockType sectionBeginComparator; // @synthesize sectionBeginComparator=_sectionBeginComparator;
@property(retain, nonatomic) NSMutableArray *sectionItemCountList; // @synthesize sectionItemCountList=_sectionItemCountList;
@property(retain, nonatomic) NSMutableArray *sectionRangeList; // @synthesize sectionRangeList=_sectionRangeList;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(nonatomic) _Bool showStoryEntry; // @synthesize showStoryEntry=_showStoryEntry;
@property(nonatomic) unsigned long long itemCountPerRow; // @synthesize itemCountPerRow=_itemCountPerRow;
@property(nonatomic) __weak id <TextStateCollectionViewLayoutHistoryCalendarDelegate> delegate; // @synthesize delegate=_delegate;
- (double)storyEntryBeginY;
- (struct CGPoint)offsetForItemAtIndex:(long long)arg1;
- (struct CGPoint)originForFirstItemAtSection:(long long)arg1;
- (struct CGRect)sectionFrameAtIndex:(long long)arg1;
- (unsigned long long)sectionIndexForY:(double)arg1;
- (struct CGRect)endRowRectForSection:(unsigned long long)arg1;
- (struct CGRect)formerRowsRectForSection:(unsigned long long)arg1;
- (_Bool)shouldShowYearForSection:(unsigned long long)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)clearLayout;
- (void)prepareLayout;
- (id)dataSource;
- (id)collectionView;
- (void)initComparator;
- (id)init;

@end

