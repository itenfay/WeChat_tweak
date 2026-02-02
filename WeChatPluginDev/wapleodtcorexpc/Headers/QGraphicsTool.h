//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CATextLayer, NSMutableDictionary, NSString;

@interface QGraphicsTool : NSObject
{
    NSString *_fontName;
    NSString *_boldFontName;
    NSMutableDictionary *_dictionaryFontSizes;
    CATextLayer *_textLayer;
    NSMutableDictionary *_dictionaryImages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictionaryImages; // @synthesize dictionaryImages=_dictionaryImages;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) NSMutableDictionary *dictionaryFontSizes; // @synthesize dictionaryFontSizes=_dictionaryFontSizes;
@property(copy) NSString *boldFontName; // @synthesize boldFontName=_boldFontName;
@property(copy) NSString *fontName; // @synthesize fontName=_fontName;
- (id)getImageFromView:(id)arg1;
- (id)getTextAttributeString:(unsigned short *)arg1 count:(int)arg2 fontSize:(int)arg3 bold:(_Bool)arg4;
- (void)drawRoundRect:(struct CGContext *)arg1 width:(int)arg2 height:(int)arg3 radius:(double)arg4 borderWidth:(double)arg5;
- (struct TMBitmapContext *)generateRouteArrowTexture:(int)arg1;
- (struct TMBitmapContext *)generateRect:(id)arg1;
- (struct TMBitmapContext *)drawImage:(id)arg1 anchorPointX1:(float *)arg2 anchorPointY1:(float *)arg3;
- (struct TMSize)calcTextSize:(unsigned short *)arg1 count:(int)arg2 fontSize:(int)arg3 bold:(_Bool)arg4;
- (id)drawStringImage:(id)arg1 fontSize:(double)arg2 color:(id)arg3 strokeColor:(id)arg4 strokeWidth:(double)arg5;
- (void)drawString:(struct TMBitmapContext *)arg1 text:(unsigned short *)arg2 count:(int)arg3 fontSize:(int)arg4 bold:(_Bool)arg5 density:(float)arg6;
- (id)getFontName:(_Bool)arg1;
- (id)defaultBoldFontName;
- (id)defaultFontName;
- (id)init;

@end

