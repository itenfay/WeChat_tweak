//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCanvasCommonUtil : NSObject
{
}

+ (_Bool)tryToOpenAdCanvasFromCombineShareExtraParams:(id)arg1;
+ (id)convertCanvasCombineShareExtraParamsToCanvasXml:(id)arg1;
+ (id)convertCanvasXmlToCanvasCombineShareExtraParams:(id)arg1;
+ (id)fetchShareWebUrl:(id)arg1;
+ (id)fetchMusicId:(id)arg1;
+ (id)appendParamsToUrl:(id)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3 sharedUxinfo:(id)arg4;
+ (double)realCanvasInsetsTop:(_Bool)arg1;
+ (double)realSafeAreaInsetsBottom;
+ (double)realSafeAreaInsetsTop;
+ (id)getTempSessionExtInfoWithUxInfo:(id)arg1;
+ (id)appendParams:(id)arg1 toWebViewUrl:(id)arg2;
+ (id)getReqWebviewUrl:(id)arg1 withUxInfo:(id)arg2 adInfo:(id)arg3;
+ (id)getPreloadH5Urls:(id)arg1 withUxInfo:(id)arg2 adInfo:(id)arg3;
+ (unsigned int)fetchSpecialTransitioningTypeForAdInfo:(id)arg1 fromScene:(int)arg2;
+ (_Bool)shouldGameShareCanvasJumpToCanvasView;
+ (_Bool)isInGameShareJumpWayExp;
+ (id)resizeImage:(id)arg1 toMinSideLen:(long long)arg2;
+ (_Bool)setItem:(id)arg1 value:(id)arg2 forDynamic:(id)arg3;
+ (_Bool)shouldNotifyAppearFactor:(double)arg1 lastFactorNum:(id)arg2;
+ (id)getCanvasBackGroundWithCanvasInfo:(id)arg1;
+ (id)getTitleFontForComponentItem:(id)arg1;
+ (_Bool)isCurSectionBlackMoreThanWhite:(long long)arg1 canvasInfo:(id)arg2;
+ (id)getCanvasComponentItemAtIndexPath:(id)arg1 canvasInfo:(id)arg2;
+ (id)getCellIdentifierAtIndexPath:(id)arg1 canvasInfo:(id)arg2;
+ (double)heightForFirstPageWith:(id)arg1 orientation:(long long)arg2;
+ (_Bool)isFirstCellInSection:(id)arg1 canvasInfo:(id)arg2;
+ (_Bool)isLastCellInSection:(id)arg1 canvasInfo:(id)arg2;
+ (id)getBackGroundColorAtSection:(long long)arg1 canvasInfo:(id)arg2;
+ (id)getBackGroundColorWhenLoading:(long long)arg1 canvasInfo:(id)arg2;
+ (_Bool)isUrlNeedAddUxInfo:(id)arg1 adInfo:(id)arg2;
+ (_Bool)isBtnUrlNeedJumpCard:(id)arg1;
+ (_Bool)isBtnSchemaJumpDoubleLink:(id)arg1;
+ (_Bool)isBtnUrlNeedJumpAppstore:(id)arg1;
+ (_Bool)isUrlNeedAddSessionData:(id)arg1 adInfo:(id)arg2;
+ (_Bool)isSameIndexPathBetween:(id)arg1 WithIndexPath:(id)arg2;
+ (id)mergeCanvasShareWithStaticXml:(id)arg1 andDynamicXml:(id)arg2;
+ (id)genCanvasShareInfoXml:(id)arg1 adInfo:(id)arg2;
+ (id)fetchXmlNode:(id)arg1 fromXml:(id)arg2 onlyContent:(_Bool)arg3;
+ (id)fetchXmlNode:(id)arg1 fromXml:(id)arg2;
+ (struct _NSRange)fetchXmlNodeRange:(id)arg1 fromXml:(id)arg2 onlyContent:(_Bool)arg3;
+ (struct _NSRange)fetchXmlNodeRange:(id)arg1 fromXml:(id)arg2;
+ (id)replaceXmlNode:(id)arg1 originXml:(id)arg2 targetXml:(id)arg3;
+ (id)filterXMLNode:(id)arg1 fromString:(id)arg2;
+ (id)processFowardAdXML:(id)arg1 withRedEnvelopInfo:(id)arg2;
+ (id)genForwardSKAdItemsFromAdInfo:(id)arg1;
+ (id)genForwardCanvasExtFromAdInfo:(id)arg1;
+ (id)genFowardAdXMLByDataItem:(id)arg1 adXML:(id)arg2 adInfo:(id)arg3;
+ (id)getChsWordingFor:(id)arg1;
+ (unsigned int)getComponentCountInCanvasInfo:(id)arg1;
+ (id)getImage:(id)arg1;
+ (id)duplicate2:(id)arg1;

@end

