//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GCCollectionViewManager, NSMutableArray, NSString, UICollectionView;
@protocol GCChannelTitleDelegate;

@interface GCChannelTitleView : UIView
{
    UICollectionView *_collectionView;
    GCCollectionViewManager *_collectionViewManager;
    NSMutableArray *_titleArray;
    unsigned long long _selectIndex;
    id <GCChannelTitleDelegate> _channelTitleDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GCChannelTitleDelegate> channelTitleDelegate; // @synthesize channelTitleDelegate=_channelTitleDelegate;
@property(nonatomic) unsigned long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) GCCollectionViewManager *collectionViewManager; // @synthesize collectionViewManager=_collectionViewManager;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)selectIndex:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureWithTitleArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

