//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MMWebImageView, NSString, UIImage, UIImageView, UILabel;

@interface MMMusicBlurCardView : UIControl
{
    unsigned long long _bizScene;
    MMWebImageView *_coverImageView;
    UIImageView *_blurBgView;
    UIImageView *_blurCoverView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    NSString *_titleStr;
    NSString *_descStr;
    NSString *_coverUrl;
    UIImage *_coverImg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *coverImg; // @synthesize coverImg=_coverImg;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *descStr; // @synthesize descStr=_descStr;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutSubviews;
- (id)blurEffectAlbumImage;
- (void)updateBlurBgView;
- (void)updateCoverImage;
- (void)initDescLabel;
- (void)initTitleLabel;
- (void)initCoverImageView;
- (void)reload;
- (id)initWithBizScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

