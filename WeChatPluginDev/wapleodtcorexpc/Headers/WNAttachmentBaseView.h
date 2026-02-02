//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, FavFullScreenImageViewController, NSString, UIImageView, UITextField, UIView, WNTextAttachment;
@protocol WNAttachmentBaseViewDelegate;

@interface WNAttachmentBaseView
{
    id <WNAttachmentBaseViewDelegate> _wnDelegate;
    WNTextAttachment *_wnAttachment;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_borderView;
    CAShapeLayer *_borderLayer;
    UIImageView *_thumbImageView;
    UITextField *_titleLabel;
    UITextField *_descLabel;
    FavFullScreenImageViewController *_favImageVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak FavFullScreenImageViewController *favImageVC; // @synthesize favImageVC=_favImageVC;
@property(retain, nonatomic) UITextField *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UITextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WNTextAttachment *wnAttachment; // @synthesize wnAttachment=_wnAttachment;
@property(nonatomic) __weak id <WNAttachmentBaseViewDelegate> wnDelegate; // @synthesize wnDelegate=_wnDelegate;
- (_Bool)isVideoNeedLazyDownload:(id)arg1;
- (void)tryToDownloadVideoWith:(id)arg1;
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(id)arg2;
- (id)getOriginImageViewWithSimpleImgInfo:(id)arg1;
- (void)didAddToSuperview;
- (id)getColor:(id)arg1 andReplaceColor:(id)arg2;
- (id)getColorFromName:(id)arg1 withTransparent:(_Bool)arg2;
- (id)getColorFromName:(id)arg1;
- (struct CGRect)getImageViewFrame;
- (id)getImage;
- (id)getDescription;
- (id)getTitle;
- (_Bool)ifLayoutViewByBase;
- (void)openImageWithEdit:(_Bool)arg1;
- (void)flashBackgroundView;
- (void)layoutDescLabel;
- (void)layoutTitleLabel;
- (void)layoutThumbImageView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutViewBorder;
- (void)layoutView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

