//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, MMUIView, MMWebImageView, NSString, UIView;

@interface MJStyleEditStyleCommonCell : UICollectionViewCell
{
    MMWebImageView *_imageView;
    MMUILabel *_textLabel;
    UIView *_selectedView;
    MMUIView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (id)mj_loadingContainerView;
- (void)updateSelectionEnabled:(id)arg1;
- (void)updateSelected:(id)arg1;
- (void)updateImageWith:(id)arg1;
- (void)prepareForReuse;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

