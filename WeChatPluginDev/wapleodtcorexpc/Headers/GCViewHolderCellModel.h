//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface GCViewHolderCellModel
{
    UIView *_targetView;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)cellReuseIdentifier;
- (struct CGSize)cellSizeForCollectionView:(id)arg1;
- (id)initWithTargetView:(id)arg1;

@end

