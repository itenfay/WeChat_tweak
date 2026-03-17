//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextSelectionRect.h>

@interface YYTextSelectionRect : UITextSelectionRect
{
    _Bool _containsStart;
    _Bool _containsEnd;
    _Bool _isVertical;
    long long _writingDirection;
    struct CGRect _rect;
}

@property(nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd=_containsEnd;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart=_containsStart;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection=_writingDirection;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

