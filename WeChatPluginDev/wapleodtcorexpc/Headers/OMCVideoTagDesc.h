//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMCVideoTagDesc : NSObject
{
    _Bool _isPositionNormalized;
    NSString *_text;
    struct CGPoint _position;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPositionNormalized; // @synthesize isPositionNormalized=_isPositionNormalized;
@property(readonly, nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (id)initWithText:(id)arg1 position:(struct CGPoint)arg2 isPositionNormalized:(_Bool)arg3;
- (id)initWithText:(id)arg1 normalizedPosition:(struct CGPoint)arg2;
- (id)initWithText:(id)arg1 position:(struct CGPoint)arg2;

@end

