//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView;

@interface MMSightCameraFilterBtn
{
    UIView *_colorView;
    UILabel *_filterTitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *filterTitleLabel; // @synthesize filterTitleLabel=_filterTitleLabel;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
- (void)setSelected:(_Bool)arg1;
- (void)updateWithFilterItem:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

