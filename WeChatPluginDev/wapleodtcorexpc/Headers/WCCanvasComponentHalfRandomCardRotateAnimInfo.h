//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentHalfRandomCardRotateAnimInfo
{
    NSString *_animationImg;
    double _imgWidth;
    double _imgHeight;
    NSString *_animationColor;
    double _animationColorAlpha;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3;
- (void).cxx_destruct;
@property(nonatomic) double animationColorAlpha; // @synthesize animationColorAlpha=_animationColorAlpha;
@property(retain, nonatomic) NSString *animationColor; // @synthesize animationColor=_animationColor;
@property(nonatomic) double imgHeight; // @synthesize imgHeight=_imgHeight;
@property(nonatomic) double imgWidth; // @synthesize imgWidth=_imgWidth;
@property(retain, nonatomic) NSString *animationImg; // @synthesize animationImg=_animationImg;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

