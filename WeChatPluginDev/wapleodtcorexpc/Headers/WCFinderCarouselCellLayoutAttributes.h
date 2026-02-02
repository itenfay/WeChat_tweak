//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface WCFinderCarouselCellLayoutAttributes : UICollectionViewLayoutAttributes
{
    long long _cardPos;
    double _animationProgress;
}

@property(nonatomic) double animationProgress; // @synthesize animationProgress=_animationProgress;
@property(nonatomic) long long cardPos; // @synthesize cardPos=_cardPos;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

