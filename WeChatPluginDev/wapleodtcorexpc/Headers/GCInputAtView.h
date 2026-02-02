//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UICollectionView, UILabel;

@interface GCInputAtView : UIView
{
    UICollectionView *_atCollectionView;
    UILabel *_noResultView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *noResultView; // @synthesize noResultView=_noResultView;
@property(retain, nonatomic) UICollectionView *atCollectionView; // @synthesize atCollectionView=_atCollectionView;
- (void)setIsEmpty:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

