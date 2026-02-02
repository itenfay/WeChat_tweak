//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, UIButton, UILongPressGestureRecognizer, UIView;
@protocol EmoticonBoardCrossCollectionEmojiPageDelegate;

@interface EmoticonBoardCrossCollectionSystemEmojiPageCell
{
    NSMutableSet *_emojiHiddenSet;
    UIButton *_deleteButton;
    UIView *_buttonBackgroundView;
    double _bottomInset;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(retain, nonatomic) UIView *buttonBackgroundView; // @synthesize buttonBackgroundView=_buttonBackgroundView;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)getButtonBottomPadding;
- (unsigned long long)maximumNumberOfItemsInRow;
- (void)onLongPressToPreview:(id)arg1;
- (void)onTapDeleteButton;
- (struct CGRect)convertedButtonBackgroundViewFrameForIntersectionTest;
- (id)setForIndexPathsIntersectWithButtons;
- (void)setQQEmojiAlpha:(double)arg1 forCellAtIndexPath:(id)arg2;
- (double)getAlphaForQQEmojiCellAtIndexPath:(id)arg1 andConvertedButtonFrame:(struct CGRect)arg2;
- (void)updateQQEmojiHiddenAnimated:(_Bool)arg1;
- (void)updateButtonColor;
- (void)setDarkMode:(_Bool)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)refreshView;
- (void)configGestureRecognizer;
- (void)configButtons;
- (void)configCollectionViewWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <EmoticonBoardCrossCollectionEmojiPageDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

