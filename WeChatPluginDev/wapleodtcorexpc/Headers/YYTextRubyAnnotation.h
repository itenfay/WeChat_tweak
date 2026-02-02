//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface YYTextRubyAnnotation : NSObject
{
    unsigned char _alignment;
    unsigned char _overhang;
    double _sizeFactor;
    NSString *_textBefore;
    NSString *_textAfter;
    NSString *_textInterCharacter;
    NSString *_textInline;
}

+ (id)rubyWithCTRubyRef:(struct __CTRubyAnnotation *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *textInline; // @synthesize textInline=_textInline;
@property(copy, nonatomic) NSString *textInterCharacter; // @synthesize textInterCharacter=_textInterCharacter;
@property(copy, nonatomic) NSString *textAfter; // @synthesize textAfter=_textAfter;
@property(copy, nonatomic) NSString *textBefore; // @synthesize textBefore=_textBefore;
@property(nonatomic) double sizeFactor; // @synthesize sizeFactor=_sizeFactor;
@property(nonatomic) unsigned char overhang; // @synthesize overhang=_overhang;
@property(nonatomic) unsigned char alignment; // @synthesize alignment=_alignment;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CTRubyAnnotation *)CTRubyAnnotation;
- (id)init;

@end

