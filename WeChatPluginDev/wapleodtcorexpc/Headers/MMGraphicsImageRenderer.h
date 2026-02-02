//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIGraphicsImageRendererFormat;

@interface MMGraphicsImageRenderer : NSObject
{
    _Bool _useBounds;
    UIGraphicsImageRendererFormat *_format;
    struct CGSize _size;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIGraphicsImageRendererFormat *format; // @synthesize format=_format;
@property(nonatomic) _Bool useBounds; // @synthesize useBounds=_useBounds;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)genFormat;
- (id)genRenderer;
- (id)JPEGDataWithCompressionQuality:(double)arg1 actions:(CDUnknownBlockType)arg2;
- (id)PNGDataWithActions:(CDUnknownBlockType)arg1;
- (id)imageWithActions:(CDUnknownBlockType)arg1;
- (id)initWithBounds:(struct CGRect)arg1 format:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1 format:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2 scale:(double)arg3;
- (id)initWithSize:(struct CGSize)arg1;

@end

