//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, WCAdAlphaButton, WCAdConsultBarCarouselInfo, WCAdConsultBarInfo, WCAdURLImageView, WCDataItem;

@interface WCAdConsultBarView
{
    WCDataItem *_dataItem;
    WCAdConsultBarCarouselInfo *_consultCarouselInfo;
    unsigned long long _itemScene;
    WCAdAlphaButton *_titleButton;
    MMUILabel *_currentTitleLabel;
    MMUILabel *_nextTitleLabel;
    WCAdAlphaButton *_consultButton;
    WCAdURLImageView *_iconImageView;
    long long _currentIndex;
    WCAdConsultBarInfo *_currentConsultBarInfo;
}

+ (double)viewHeight;
+ (double)bottomMargin;
+ (double)topMargin;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdConsultBarInfo *currentConsultBarInfo; // @synthesize currentConsultBarInfo=_currentConsultBarInfo;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) WCAdURLImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) WCAdAlphaButton *consultButton; // @synthesize consultButton=_consultButton;
@property(retain, nonatomic) MMUILabel *nextTitleLabel; // @synthesize nextTitleLabel=_nextTitleLabel;
@property(retain, nonatomic) MMUILabel *currentTitleLabel; // @synthesize currentTitleLabel=_currentTitleLabel;
@property(retain, nonatomic) WCAdAlphaButton *titleButton; // @synthesize titleButton=_titleButton;
@property(nonatomic) unsigned long long itemScene; // @synthesize itemScene=_itemScene;
@property(retain, nonatomic) WCAdConsultBarCarouselInfo *consultCarouselInfo; // @synthesize consultCarouselInfo=_consultCarouselInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)consultBarLogic;
- (void)onConsultButtonClicked:(id)arg1;
- (void)onTitleButtonClicked:(id)arg1;
- (void)updateConsultButton;
- (void)updateTitleButtonUI;
- (void)updateConsultBarToIndex:(long long)arg1;
- (id)createTitleLabelWithIndex:(long long)arg1;
- (double)titleButtonWidth;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 delegate:(id)arg4;

@end

