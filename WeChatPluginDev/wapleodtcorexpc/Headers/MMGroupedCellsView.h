//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImage;

@interface MMGroupedCellsView : UIView
{
    UIImage *_image;
    long long _count;
    double _scale;
    UIView *_topCellView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topCellView; // @synthesize topCellView=_topCellView;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)getTopCellView;
- (void)addShadow:(id)arg1;
- (void)initView;
- (id)initWithTopCellImage:(id)arg1 count:(long long)arg2 scale:(double)arg3;

@end

