//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class EmoticonCustomManageView, EmoticonCustomManageWrap, UIImageView;

@interface EmoticonCustomManageCell : UICollectionViewCell
{
    _Bool _isScaled;
    _Bool _shouldShowDvider;
    EmoticonCustomManageWrap *_emoticonWrap;
    EmoticonCustomManageView *_manageView;
    UIImageView *_syncingImg;
    double _currentWidth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowDvider; // @synthesize shouldShowDvider=_shouldShowDvider;
@property(nonatomic) _Bool isScaled; // @synthesize isScaled=_isScaled;
@property(nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
@property(retain, nonatomic) UIImageView *syncingImg; // @synthesize syncingImg=_syncingImg;
@property(retain, nonatomic) EmoticonCustomManageView *manageView; // @synthesize manageView=_manageView;
@property(retain, nonatomic) EmoticonCustomManageWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)updateLayoutForAttr;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)doFlashAnimation;
- (id)showingEmoticonMd5;
- (void)updateLayoutWithEmoticonWrap:(id)arg1;
- (void)updateEmoticonWrap:(id)arg1 delegate:(id)arg2 edge:(double)arg3;

@end

