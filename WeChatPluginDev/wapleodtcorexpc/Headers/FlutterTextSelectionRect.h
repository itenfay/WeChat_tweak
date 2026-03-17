//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextSelectionRect.h>

@interface FlutterTextSelectionRect : UITextSelectionRect
{
    _Bool _containsStart;
    _Bool _containsEnd;
    _Bool _isVertical;
    long long _writingDirection;
    unsigned long long _position;
    struct CGRect _rect;
}

+ (id)selectionRectWithRect:(struct CGRect)arg1 position:(unsigned long long)arg2 writingDirection:(long long)arg3;
+ (id)selectionRectWithRect:(struct CGRect)arg1 position:(unsigned long long)arg2;
+ (id)selectionRectWithRectAndInfo:(struct CGRect)arg1 position:(unsigned long long)arg2 writingDirection:(long long)arg3 containsStart:(_Bool)arg4 containsEnd:(_Bool)arg5 isVertical:(_Bool)arg6;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd=_containsEnd;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart=_containsStart;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection=_writingDirection;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (_Bool)isRTL;
- (id)initWithRectAndInfo:(struct CGRect)arg1 position:(unsigned long long)arg2 writingDirection:(long long)arg3 containsStart:(_Bool)arg4 containsEnd:(_Bool)arg5 isVertical:(_Bool)arg6;

@end

