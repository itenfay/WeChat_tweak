//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GCCollectionView, GCMessageViewModel, GCMinContentSizeFlowLayout;

@interface GCMessageView : UIView
{
    GCMessageViewModel *_viewModel;
    GCCollectionView *_messageCollectionView;
    double _notificationBarHeight;
    GCMinContentSizeFlowLayout *_layout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCMinContentSizeFlowLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) double notificationBarHeight; // @synthesize notificationBarHeight=_notificationBarHeight;
@property(retain, nonatomic) GCCollectionView *messageCollectionView; // @synthesize messageCollectionView=_messageCollectionView;
@property(nonatomic) __weak GCMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)updateFlowLayoutMinContentSize;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

