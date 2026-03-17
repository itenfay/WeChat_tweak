//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdXmlParser : NSObject
{
}

+ (id)fetchValueFromXml:(id)arg1 inSearchPath:(id)arg2;
+ (double)parseFloatSizeForName:(const char *)arg1 parent:(struct XmlReaderNode_t *)arg2 basicWidth:(int)arg3 basicFontSize:(int)arg4;
+ (double)parseRoundingSizeForName:(const char *)arg1 parent:(struct XmlReaderNode_t *)arg2 basicWidth:(int)arg3 basicFontSize:(int)arg4;
+ (int)parseNonZeroIntValueForName:(const char *)arg1 parent:(struct XmlReaderNode_t *)arg2 defaultValue:(int)arg3;
+ (int)parseBasicFontSizeForName:(const char *)arg1 parent:(struct XmlReaderNode_t *)arg2;
+ (int)parseBasicWidthForName:(const char *)arg1 parent:(struct XmlReaderNode_t *)arg2;
+ (id)replaceXMLNode:(id)arg1 toNode:(id)arg2 forString:(id)arg3;
+ (id)filterUselessXmlNodesForForwardWithAdXml:(id)arg1;
+ (id)filterUselessCanvasNodeForType:(id)arg1 fromOriginAdXml:(id)arg2;
+ (id)adXmlCanvasNodeFilterArray;
+ (_Bool)ExtractRecommendAdInfo:(id)arg1 ByAdMsgXml:(id)arg2;
+ (_Bool)ExtractRecommendMetaInfo:(id)arg1 ByRecXml:(id)arg2;
+ (id)getLiveCheerIconInfoListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)getClickActionInfoFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)clickActionInfoFromXmlNode:(struct XmlReaderNode_t *)arg1 childName:(const char *)arg2;
+ (id)videoFloatBarInfoFromXmlNode:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
+ (void)parseFloatActionBaseInfo:(id)arg1 canvasComponentItem:(id)arg2 fromXmlNode:(struct XmlReaderNode_t *)arg3 withSizeType:(long long)arg4 basicWidth:(int)arg5 basicRootFontSize:(int)arg6 widthRoundingType:(long long)arg7 heightRoundingType:(long long)arg8;
+ (void)setCanvasComponentItem:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2 withSizeType:(long long)arg3 basicWidth:(int)arg4 basicRootFontSize:(int)arg5 widthRoundingType:(long long)arg6 heightRoundingType:(long long)arg7;
+ (void)setAdCanvasPage:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2 withSizeType:(long long)arg3 basicWidth:(int)arg4 basicRootFontSize:(int)arg5 widthRoundingType:(long long)arg6 heightRoundingType:(long long)arg7;
+ (void)setAdCanvasInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (_Bool)SetAdvertiseXml:(id)arg1 ByAdXml:(id)arg2;
+ (_Bool)setSKAdItems:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (_Bool)setAdCanvasExtXml:(id)arg1 ByXmlNode:(struct XmlReaderNode_t *)arg2;
+ (_Bool)SetAdvertiseInfo:(id)arg1 ByAdInfoXml:(struct XmlReaderNode_t *)arg2;
+ (_Bool)SetAdvertiseInfo:(id)arg1 ByAdInfo:(id)arg2;

@end

