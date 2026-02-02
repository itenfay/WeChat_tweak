//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface MJTimelineViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _disableImplicitAnimation;
    struct CGRect _modelFrame;
    struct CGRect _leadingMaskFrame;
    struct CGRect _trailingMaskFrame;
}

@property(nonatomic) struct CGRect trailingMaskFrame; // @synthesize trailingMaskFrame=_trailingMaskFrame;
@property(nonatomic) struct CGRect leadingMaskFrame; // @synthesize leadingMaskFrame=_leadingMaskFrame;
@property(nonatomic) struct CGRect modelFrame; // @synthesize modelFrame=_modelFrame;
@property(nonatomic) _Bool disableImplicitAnimation; // @synthesize disableImplicitAnimation=_disableImplicitAnimation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

