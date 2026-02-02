//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class WCFinderDiscoveryNearbyLiveCollectionViewCell, WCFinderLiveCompleteElementModel;
@protocol WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate;

@interface WCFinderLiveRecommendCollectionViewCell : UICollectionViewCell
{
    WCFinderLiveCompleteElementModel *_elementModel;
    WCFinderDiscoveryNearbyLiveCollectionViewCell *_recommendItemView;
    CDUnknownBlockType _onTap;
    id <WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
@property(retain, nonatomic) WCFinderDiscoveryNearbyLiveCollectionViewCell *recommendItemView; // @synthesize recommendItemView=_recommendItemView;
@property(retain, nonatomic) WCFinderLiveCompleteElementModel *elementModel; // @synthesize elementModel=_elementModel;
- (void)updateCellWithItem:(id)arg1 delegate:(id)arg2 styleInfo:(id)arg3 openAudienceNewLiveRecomend:(_Bool)arg4;
- (void)layoutSubviews;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)onTapItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

