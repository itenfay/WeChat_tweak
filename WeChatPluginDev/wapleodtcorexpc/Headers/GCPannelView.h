//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GCCollectionViewManager, GCLabelDynamicLayout, UIButton, UICollectionView, UILabel;
@protocol GCPannelProtocol;

@interface GCPannelView : UIView
{
    UILabel *_titleLabel;
    UIButton *_leftDownBtn;
    id <GCPannelProtocol> _pannelDelegate;
    UIView *_titleView;
    UICollectionView *_bottomCollectionView;
    GCLabelDynamicLayout *_itemLabelLayout;
    GCCollectionViewManager *_clvManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCCollectionViewManager *clvManager; // @synthesize clvManager=_clvManager;
@property(retain, nonatomic) GCLabelDynamicLayout *itemLabelLayout; // @synthesize itemLabelLayout=_itemLabelLayout;
@property(retain, nonatomic) UICollectionView *bottomCollectionView; // @synthesize bottomCollectionView=_bottomCollectionView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <GCPannelProtocol> pannelDelegate; // @synthesize pannelDelegate=_pannelDelegate;
@property(retain, nonatomic) UIButton *leftDownBtn; // @synthesize leftDownBtn=_leftDownBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)configureWithPannelItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

