//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentPureImageInfo
{
    _Bool _enableQRScan;
    _Bool _needUpdateQrUrl;
    NSString *_pureImageUrl;
    double _pureImageWidth;
    double _pureImageHeight;
    NSString *_bgColor;
    double _bgColorAlpha;
    double _cornerRadius;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(nonatomic) _Bool needUpdateQrUrl; // @synthesize needUpdateQrUrl=_needUpdateQrUrl;
@property(nonatomic) _Bool enableQRScan; // @synthesize enableQRScan=_enableQRScan;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double bgColorAlpha; // @synthesize bgColorAlpha=_bgColorAlpha;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) double pureImageHeight; // @synthesize pureImageHeight=_pureImageHeight;
@property(nonatomic) double pureImageWidth; // @synthesize pureImageWidth=_pureImageWidth;
@property(retain, nonatomic) NSString *pureImageUrl; // @synthesize pureImageUrl=_pureImageUrl;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

