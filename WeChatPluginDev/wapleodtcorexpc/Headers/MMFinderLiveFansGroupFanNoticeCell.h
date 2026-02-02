//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupInvisibleTipView, MMUILabel, MMWebImageView;

@interface MMFinderLiveFansGroupFanNoticeCell
{
    CDUnknownBlockType _onViewImageCallback;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    MMWebImageView *_noticeImageView;
    MMFinderLiveFansGroupInvisibleTipView *_invisibleTipView;
}

+ (double)cellHeightWithDesc:(id)arg1 imageUrlString:(id)arg2 maxWidth:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFansGroupInvisibleTipView *invisibleTipView; // @synthesize invisibleTipView=_invisibleTipView;
@property(retain, nonatomic) MMWebImageView *noticeImageView; // @synthesize noticeImageView=_noticeImageView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onViewImageCallback; // @synthesize onViewImageCallback=_onViewImageCallback;
- (void)onTapImageView:(id)arg1;
- (void)initUI;
- (void)layoutSubviews;
- (void)setInvisible:(_Bool)arg1 invisibleTips:(id)arg2;
- (void)configWithDesc:(id)arg1 imageUrlString:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

