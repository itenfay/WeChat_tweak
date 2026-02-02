//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UICollectionView, UIView, WAAuthManagerListContainerViewModel, ZZFLEXAngel;

@interface WAAuthManagerListContainerCell : UICollectionViewCell
{
    WAAuthManagerListContainerViewModel *_viewDataModel;
    UICollectionView *_collectionView;
    ZZFLEXAngel *_angel;
    UIView *_maskView;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WAAuthManagerListContainerViewModel *viewDataModel; // @synthesize viewDataModel=_viewDataModel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMaskView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

