//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface MultipleTextStateCardFooterDotsView : UIView
{
    _Bool _selected;
    unsigned long long _count;
    unsigned long long _index;
    NSMutableArray *_dotViewList;
    UIView *_backgroundBlurView;
    struct _NSRange _slidingWindow;
}

+ (double)height;
+ (id)generateDotView;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) NSMutableArray *dotViewList; // @synthesize dotViewList=_dotViewList;
@property(nonatomic) struct _NSRange slidingWindow; // @synthesize slidingWindow=_slidingWindow;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)updateDotViews;
- (long long)updateSlidingWindowWithOffset;
- (void)setIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)initDotViews;
- (void)initBackgroudView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

