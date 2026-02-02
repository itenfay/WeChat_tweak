//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, MMWebImageView, WCFinderDataItem, WCFinderFeedImageCDNView, WCFinderHeadImageView, WCFinderPurchasedItem;

@interface MMFinderLivePurchasedFeedCell
{
    MMUIView *_bubbleContentView;
    WCFinderFeedImageCDNView *_coverImageView;
    WCFinderHeadImageView *_anchorHeadImageView;
    MMUILabel *_anchorNameLabel;
    MMWebImageView *_authIconView;
    MMUILabel *_contentDescLabel;
    MMUILabel *_createTimeLabel;
    MMUILabel *_statusLabel;
    WCFinderDataItem *_dataItem;
    WCFinderPurchasedItem *_purchasedItem;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPurchasedItem *purchasedItem; // @synthesize purchasedItem=_purchasedItem;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) MMUILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) MMUILabel *createTimeLabel; // @synthesize createTimeLabel=_createTimeLabel;
@property(retain, nonatomic) MMUILabel *contentDescLabel; // @synthesize contentDescLabel=_contentDescLabel;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMUILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView; // @synthesize anchorHeadImageView=_anchorHeadImageView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) MMUIView *bubbleContentView; // @synthesize bubbleContentView=_bubbleContentView;
- (void)willAppear;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithDataItem:(id)arg1;
- (void)clearCoverImage;
- (void)updateWithECObject:(id)arg1;
- (void)updateWithPurchasedItem:(id)arg1;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

