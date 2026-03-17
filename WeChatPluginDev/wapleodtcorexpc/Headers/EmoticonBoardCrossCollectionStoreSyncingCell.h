//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIActivityIndicatorView;

@interface EmoticonBoardCrossCollectionStoreSyncingCell : UICollectionViewCell
{
    MMUIActivityIndicatorView *_indicator;
}

@property(retain, nonatomic) MMUIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
- (void)startLoading;
- (void)initPackSyncTipWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

