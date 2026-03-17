//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface MJTimelineViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    _Bool _initiatedFromChangeScale;
    _Bool _initiatedFromChangeMode;
}

@property(nonatomic) _Bool initiatedFromChangeMode; // @synthesize initiatedFromChangeMode=_initiatedFromChangeMode;
@property(nonatomic) _Bool initiatedFromChangeScale; // @synthesize initiatedFromChangeScale=_initiatedFromChangeScale;

@end

