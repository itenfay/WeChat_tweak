//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, NSString, UILabel, UIView;

@interface MJStickerPickerCell : UICollectionViewCell
{
    _Bool _bSelect;
    UIView *_loadingView;
    MMWebImageView *_previewImageView;
    UILabel *_contentLabel;
    UIView *_borderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMWebImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(nonatomic) _Bool bSelect; // @synthesize bSelect=_bSelect;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
- (void)updateSelectionStyle:(_Bool)arg1;
- (void)clearContent;
- (void)layoutWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)mj_loadingContainerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

