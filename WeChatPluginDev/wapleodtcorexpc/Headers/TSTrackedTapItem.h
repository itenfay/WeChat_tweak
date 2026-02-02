//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TSTrackedTapItem
{
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) struct CGPoint pointRangeOnView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTouches:(id)arg1 rectage:(struct CGRect)arg2;

@end

