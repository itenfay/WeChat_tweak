//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSCache, NSMutableArray;

@interface WAEJFont : NSObject
{
    NSMutableArray *textures;
    float txLineX;
    float txLineY;
    float txLineH;
    _Bool useSingleGlyphTextures;
    float pointSize;
    float ascent;
    float descent;
    float leading;
    float contentScale;
    float glyphPadding;
    float xHeight;
    _Bool fill;
    float lineWidth;
    struct __CTFont *ctMainFont;
    unsigned short *glyphsBuffer;
    struct CGPoint *positionsBuffer;
    long long *indexBuffer;
    NSCache *layoutCache;
    _Bool isWgfxMode;
    struct unordered_map<unsigned long long, EJFontGlyphInfo, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, EJFontGlyphInfo>>> glyphInfoMap;
    float lineHeight;
}

+ (struct OpaqueJSValue *)loadFontData:(struct OpaqueJSContext *)arg1 fontData:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_869f9c67)measureString:(id)arg1 forContext:(id)arg2;
- (void)drawString:(id)arg1 toContext:(id)arg2 x:(float)arg3 y:(float)arg4;
- (float)getYOffsetForBaseline:(int)arg1;
- (id)getTextures;
- (id)getLayoutForString:(id)arg1;
- (_Bool)isEmoji:(id)arg1;
- (unsigned short)createGlyph:(unsigned short)arg1 unicode:(unsigned long long)arg2 withFont:(struct __CTFont *)arg3;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1 fill:(_Bool)arg2 lineWidth:(float)arg3 contentScale:(float)arg4 isWgfxMode:(_Bool)arg5;

@end

