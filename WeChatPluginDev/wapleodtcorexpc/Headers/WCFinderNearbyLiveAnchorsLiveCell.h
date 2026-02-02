//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class WCFinderLiveIconImageView;

@interface WCFinderNearbyLiveAnchorsLiveCell : UICollectionViewCell
{
    CDUnknownBlockType _clickStartLiveBlock;
    WCFinderLiveIconImageView *_iconImageView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveIconImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType clickStartLiveBlock; // @synthesize clickStartLiveBlock=_clickStartLiveBlock;
- (void)startLive;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

