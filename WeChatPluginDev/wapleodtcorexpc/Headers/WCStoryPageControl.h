//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPageControl.h>

@class NSMutableArray, UIColor;

@interface WCStoryPageControl : UIPageControl
{
    UIColor *_normalPageColor;
    UIColor *_currentPageColor;
    UIColor *_highlightedPageColor;
    unsigned long long _hightlightIndexMask;
    NSMutableArray *_pageDotsForIOS14Plus;
}

+ (id)pageControlWithPageCount:(unsigned long long)arg1 normalPageColor:(id)arg2 currentPageColor:(id)arg3 highlightedPageColor:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pageDotsForIOS14Plus; // @synthesize pageDotsForIOS14Plus=_pageDotsForIOS14Plus;
@property(nonatomic) unsigned long long hightlightIndexMask; // @synthesize hightlightIndexMask=_hightlightIndexMask;
@property(retain, nonatomic) UIColor *highlightedPageColor; // @synthesize highlightedPageColor=_highlightedPageColor;
@property(retain, nonatomic) UIColor *currentPageColor; // @synthesize currentPageColor=_currentPageColor;
@property(retain, nonatomic) UIColor *normalPageColor; // @synthesize normalPageColor=_normalPageColor;
- (void)resetDotIndicator;
- (void)layoutPageDotsForIOS14Plus;
- (void)setupPageDotsForIOS14Plus;
- (void)updateDotFrame:(id)arg1 index:(int)arg2;
- (void)updatePageDots:(long long)arg1 dotViews:(id)arg2;
- (void)layoutSubviews;
- (void)updateDots;
- (void)setCurrentPage:(long long)arg1;
- (void)deletePageAtIndex:(unsigned long long)arg1;
- (_Bool)hasHighlightedIndex;
- (_Bool)isHighlightedAtIndex:(unsigned long long)arg1;
- (unsigned long long)firstHighlightedIndex;
- (_Bool)unHighlightedAllPage;
- (_Bool)unHighlightedPageAtIndex:(unsigned long long)arg1;
- (_Bool)highlightedAllPage;
- (_Bool)highlightedPageAtIndex:(unsigned long long)arg1;
- (_Bool)highlightedPageAtIndexs:(id)arg1;
- (void)setNumberOfPages:(long long)arg1;
- (id)initWithPageCount:(unsigned long long)arg1 normalPageColor:(id)arg2 currentPageColor:(id)arg3 highlightedPageColor:(id)arg4;

@end

