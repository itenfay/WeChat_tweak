//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class EmoticonStoreItem, MMEmoticonStoreDownloadLogic, MMWebImageView, NSString, UIImageView, UILabel, UIView;

@interface MMStoreEmotionHotCell : UICollectionViewCell
{
    long long _type;
    long long _scene;
    EmoticonStoreItem *_item;
    MMEmoticonStoreDownloadLogic *_downloadLogic;
    long long _cellType;
    MMWebImageView *_emotionButton;
    UILabel *_emotionTitleLabel;
    UIView *_imageBackgroundView;
    MMWebImageView *_tagImageView;
    UIImageView *_tagImageViewNew;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *tagImageViewNew; // @synthesize tagImageViewNew=_tagImageViewNew;
@property(retain, nonatomic) MMWebImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(retain, nonatomic) UILabel *emotionTitleLabel; // @synthesize emotionTitleLabel=_emotionTitleLabel;
@property(retain, nonatomic) MMWebImageView *emotionButton; // @synthesize emotionButton=_emotionButton;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(retain, nonatomic) EmoticonStoreItem *item; // @synthesize item=_item;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (void)onDownloadFinished;
- (_Bool)isEmoticonDownloaded;
- (void)showFreeLabel;
- (void)setupLabel;
- (void)setupButton;
- (void)setupDownloadView;
- (void)loadTagImageView;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setScene:(long long)arg1 andType:(long long)arg2;
- (void)setCellBackgroundColor:(id)arg1;
- (void)setPersonalCellStyle;
- (void)hideFreeLabel;
- (void)setupEmotionStoreItem:(id)arg1 Entrance:(unsigned int)arg2 andType:(long long)arg3;
- (void)setupLabelWithTitle:(id)arg1;
- (void)setupButtonImageURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

