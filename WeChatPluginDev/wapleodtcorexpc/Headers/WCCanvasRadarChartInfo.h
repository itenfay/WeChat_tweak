//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCCanvasRadarChartInfo
{
    NSString *_coverColor;
    NSString *_borderImg;
    NSString *_maskImg;
    NSArray *_itemList;
    NSString *_labelFontColor;
    NSString *_scoreFontColor;
    double _labelFontSize;
    double _scoreFontSize;
    double _borderImgWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double borderImgWidth; // @synthesize borderImgWidth=_borderImgWidth;
@property(nonatomic) double scoreFontSize; // @synthesize scoreFontSize=_scoreFontSize;
@property(nonatomic) double labelFontSize; // @synthesize labelFontSize=_labelFontSize;
@property(retain, nonatomic) NSString *scoreFontColor; // @synthesize scoreFontColor=_scoreFontColor;
@property(retain, nonatomic) NSString *labelFontColor; // @synthesize labelFontColor=_labelFontColor;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSString *maskImg; // @synthesize maskImg=_maskImg;
@property(retain, nonatomic) NSString *borderImg; // @synthesize borderImg=_borderImg;
@property(retain, nonatomic) NSString *coverColor; // @synthesize coverColor=_coverColor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

