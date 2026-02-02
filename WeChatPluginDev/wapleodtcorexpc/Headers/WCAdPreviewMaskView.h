//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, WCDataItem;

@interface WCAdPreviewMaskView
{
    WCDataItem *_dataItem;
    MMUIImageView *_maskImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2;

@end

