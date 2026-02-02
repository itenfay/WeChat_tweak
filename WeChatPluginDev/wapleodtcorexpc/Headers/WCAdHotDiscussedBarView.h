//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, MMUILabel, MMUIView, WCAdHotDiscussedBarInfo, WCDataItem;

@interface WCAdHotDiscussedBarView
{
    WCDataItem *_dataItem;
    WCAdHotDiscussedBarInfo *_barInfo;
    unsigned long long _itemScene;
    MMUILabel *_labelTextView;
    MMUILabel *_titleLabel;
    MMUIView *_headImagesContainer;
    MMUIImageView *_rightArrow;
    MMUILabel *_discussedNumberLabel;
    MMUIButton *_clickActionButton;
}

+ (double)viewHeight;
+ (double)bottomMargin;
+ (double)topMargin;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *clickActionButton; // @synthesize clickActionButton=_clickActionButton;
@property(retain, nonatomic) MMUILabel *discussedNumberLabel; // @synthesize discussedNumberLabel=_discussedNumberLabel;
@property(retain, nonatomic) MMUIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) MMUIView *headImagesContainer; // @synthesize headImagesContainer=_headImagesContainer;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *labelTextView; // @synthesize labelTextView=_labelTextView;
@property(nonatomic) unsigned long long itemScene; // @synthesize itemScene=_itemScene;
@property(retain, nonatomic) WCAdHotDiscussedBarInfo *barInfo; // @synthesize barInfo=_barInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDataItem:(id)arg1;
- (double)maxLabelTextWidth;
- (double)maxTitleWidth;
- (double)headImagesContainerMaxWidth;
- (id)genRoundHeadImageViewWithIndex:(long long)arg1;
- (long long)maxHeadImageNumber;
- (void)genHeadImagesContainer;
- (void)onActionButtonClicked;
- (void)adjustSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 delegate:(id)arg4;

@end

