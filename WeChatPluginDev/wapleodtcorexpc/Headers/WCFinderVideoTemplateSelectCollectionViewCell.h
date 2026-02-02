//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIActivityIndicatorView, MMWebImageView, NSString;

@interface WCFinderVideoTemplateSelectCollectionViewCell : UICollectionViewCell
{
    MMWebImageView *_imageView;
    MMUIActivityIndicatorView *_customLoadingView;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *customLoadingView; // @synthesize customLoadingView=_customLoadingView;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)onLoadImageOK:(id)arg1;
- (void)showBorder:(_Bool)arg1;
- (void)setCoverUrl:(id)arg1;
- (void)setTemplate:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

