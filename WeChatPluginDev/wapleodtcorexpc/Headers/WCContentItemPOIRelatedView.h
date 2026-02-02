//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UILabel, WCContentItemPOIRelatedViewModel;

@interface WCContentItemPOIRelatedView
{
    WCContentItemPOIRelatedViewModel *_viewModel;
    MMWebImageView *_contentImageView;
    UILabel *_poiTitleLabel;
    UILabel *_poiDesclabel;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *poiDesclabel; // @synthesize poiDesclabel=_poiDesclabel;
@property(retain, nonatomic) UILabel *poiTitleLabel; // @synthesize poiTitleLabel=_poiTitleLabel;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) WCContentItemPOIRelatedViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)throwUrlMessage;
- (void)udpateSubViewsLayout;
- (id)initWithWCDataItem:(id)arg1;

@end

