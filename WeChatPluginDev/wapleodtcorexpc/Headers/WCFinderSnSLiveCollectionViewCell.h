//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView, WCFinderFeedContentVM, WCFinderFeedStaticCoverView;

@interface WCFinderSnSLiveCollectionViewCell : UICollectionViewCell
{
    WCFinderFeedStaticCoverView *_coverView;
    WCFinderFeedContentVM *_contentVM;
    UIView *_avatorContainerView;
    UILabel *_shareTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *shareTipsLabel; // @synthesize shareTipsLabel=_shareTipsLabel;
@property(retain, nonatomic) UIView *avatorContainerView; // @synthesize avatorContainerView=_avatorContainerView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderFeedStaticCoverView *coverView; // @synthesize coverView=_coverView;
- (id)generatorAvatorViewWithHeadUrl:(id)arg1;
- (void)updateAvatorContainerView;
- (void)updateUIWithContentVM:(id)arg1;
- (void)initSubView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

