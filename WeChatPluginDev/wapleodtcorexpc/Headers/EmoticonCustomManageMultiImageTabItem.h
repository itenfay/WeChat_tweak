//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface EmoticonCustomManageMultiImageTabItem : UIView
{
    UIImageView *_imgView;
    UIView *_darkMaskView;
    UIView *_selectBGView;
    double _cellWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UIView *selectBGView; // @synthesize selectBGView=_selectBGView;
@property(retain, nonatomic) UIView *darkMaskView; // @synthesize darkMaskView=_darkMaskView;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

