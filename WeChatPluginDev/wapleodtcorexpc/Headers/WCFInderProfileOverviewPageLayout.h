//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface WCFInderProfileOverviewPageLayout : UICollectionViewFlowLayout
{
    struct vector<SectionFrame, std::allocator<SectionFrame>> sectionInfos;
    long long _flag;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
- (struct UIEdgeInsets)_getEdgeInsetForSection:(long long)arg1 pos:(long long)arg2;
- (struct UIEdgeInsets)_contentInsetsSeperator:(long long)arg1 pos:(long long)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)_calculateLayout;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutDelegate;
- (id)init;

@end

