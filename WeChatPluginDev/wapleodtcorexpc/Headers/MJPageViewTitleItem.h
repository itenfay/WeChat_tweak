//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, NSObject;

@interface MJPageViewTitleItem
{
    _Bool _selected;
    long long _index;
    MMUILabel *_label;
    MMUIImageView *_imageView;
    NSObject *_selectedObject;
    NSObject *_unselectedObject;
}

+ (id)itemWith:(id)arg1 fontSize:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *unselectedObject; // @synthesize unselectedObject=_unselectedObject;
@property(retain, nonatomic) NSObject *selectedObject; // @synthesize selectedObject=_selectedObject;
@property(retain, nonatomic) MMUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void)changeLabelHidden:(_Bool)arg1 imageViewHidden:(_Bool)arg2;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 selected:(id)arg2 unselected:(id)arg3;

@end

