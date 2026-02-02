//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CircleProcessView, EmoticonLensInfo, MMUILabel, NSString, UIColor, UIImageView, UIView;

@interface EmoticonLensCollectionCell : UICollectionViewCell
{
    _Bool _isShowIconBackground;
    _Bool _showSelectedBorder;
    _Bool _showSelectedStatus;
    EmoticonLensInfo *_emoticonLensItem;
    unsigned long long _scenes;
    UIColor *_titleColor;
    UIView *_iconBgView;
    UIImageView *_iconImageView;
    MMUILabel *_descLabel;
    UIView *_selectedView;
    CircleProcessView *_progressView;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CircleProcessView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *iconBgView; // @synthesize iconBgView=_iconBgView;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) _Bool showSelectedStatus; // @synthesize showSelectedStatus=_showSelectedStatus;
@property(nonatomic) _Bool showSelectedBorder; // @synthesize showSelectedBorder=_showSelectedBorder;
@property(nonatomic) _Bool isShowIconBackground; // @synthesize isShowIconBackground=_isShowIconBackground;
@property(nonatomic) unsigned long long scenes; // @synthesize scenes=_scenes;
@property(retain, nonatomic) EmoticonLensInfo *emoticonLensItem; // @synthesize emoticonLensItem=_emoticonLensItem;
- (void)onEmoticonLensIconDownloadSuccess:(id)arg1;
- (void)onEmoticonLensPkgDownloadFail:(id)arg1;
- (void)onEmoticonLensPkgDownloadSuccess:(id)arg1;
- (void)onEmoticonLensPkgDownloadProgress:(double)arg1 lensId:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

