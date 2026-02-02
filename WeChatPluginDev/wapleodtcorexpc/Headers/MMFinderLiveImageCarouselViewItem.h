//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, NSString;

@interface MMFinderLiveImageCarouselViewItem : UICollectionViewCell
{
    MMWebImageView *_bgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *bgView; // @synthesize bgView=_bgView;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutBgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

