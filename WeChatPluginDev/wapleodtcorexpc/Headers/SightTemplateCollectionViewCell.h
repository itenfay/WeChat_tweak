//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIActivityIndicatorView, MMWebImageView, NSString;

@interface SightTemplateCollectionViewCell : UICollectionViewCell
{
    MMWebImageView *_customImageView;
    MMUIActivityIndicatorView *_customLoadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *customLoadingView; // @synthesize customLoadingView=_customLoadingView;
@property(retain, nonatomic) MMWebImageView *customImageView; // @synthesize customImageView=_customImageView;
- (void)onLoadImageOK:(id)arg1;
- (void)updateWithTemplateInfo:(id)arg1;
- (void)reLayoutViews;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

