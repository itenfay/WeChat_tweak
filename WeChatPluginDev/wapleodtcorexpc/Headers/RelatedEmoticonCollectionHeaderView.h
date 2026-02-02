//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class CEmoticonWrap, MMEmoticonView, UILabel;

@interface RelatedEmoticonCollectionHeaderView : UICollectionReusableView
{
    _Bool _showBottomTextAndSeparateLine;
    CEmoticonWrap *_emoticonWrap;
    UILabel *_bottomTextLabel;
    MMEmoticonView *_emoticonView;
    struct CGSize _emoticonSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) UILabel *bottomTextLabel; // @synthesize bottomTextLabel=_bottomTextLabel;
@property(nonatomic) struct CGSize emoticonSize; // @synthesize emoticonSize=_emoticonSize;
@property(nonatomic) _Bool showBottomTextAndSeparateLine; // @synthesize showBottomTextAndSeparateLine=_showBottomTextAndSeparateLine;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

