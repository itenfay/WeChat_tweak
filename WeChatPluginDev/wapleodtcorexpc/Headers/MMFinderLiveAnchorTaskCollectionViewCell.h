//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderLiveQuestActivity, MMWebImageView, NSString;

@interface MMFinderLiveAnchorTaskCollectionViewCell : UICollectionViewCell
{
    FinderLiveQuestActivity *_activity;
    MMWebImageView *_anchorTaskImgView;
}

+ (double)collectionCellHeight;
+ (double)collectionCellWidth;
+ (double)collectionCellSpacing;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *anchorTaskImgView; // @synthesize anchorTaskImgView=_anchorTaskImgView;
@property(retain, nonatomic) FinderLiveQuestActivity *activity; // @synthesize activity=_activity;
- (void)onLoadImageOK:(id)arg1;
- (id)accessibilityLabel;
- (void)updateAnchorTaskImgView;
- (void)layoutAnchorTaskImgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

