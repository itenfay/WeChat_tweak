//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayout.h>

@interface WCFinderFlowLayout : UICollectionViewLayout
{
    struct map<long, SectionInfo, std::less<long>, std::allocator<std::pair<const long, SectionInfo>>> sectionInfos;
    long long _sectionNumber;
    long long _behavior;
    long long _flag;
    struct CGSize _contentSize;
}

+ (Class)invalidationContextClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(nonatomic) long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) long long sectionNumber; // @synthesize sectionNumber=_sectionNumber;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)_calculateLayout;
- (id)flowDelegate;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)init;

@end

