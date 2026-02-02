//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCXmlParser : NSObject
{
}

+ (_Bool)SetABTestInfo:(id)arg1 ABTestItem:(id)arg2;
+ (_Bool)SetBGStorage:(id)arg1 ByXml:(id)arg2 preferLang:(id)arg3;
+ (_Bool)setReportDataByInputAction:(id)arg1;
+ (id)WCBGStorageToXML:(id)arg1;
+ (_Bool)SetDataItem:(id)arg1 ByXml:(id)arg2;
+ (id)albumListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)bgAlbumFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)bgAuthorFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)bgGroupListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)bgGroupFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)mediaListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)mediaItemFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)urlFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (void)setGameShareCardInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setLiteAppInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setMusicShareItem:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setAppMsgShareInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setWeAppInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setStreamVideoInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setMusicInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setActionInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setAppInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setTemplateInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setLocationInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (id)xmlOfGameShareCardInfo:(id)arg1;
+ (id)xmlOfLiteAppInfo:(id)arg1;
+ (id)xmlOfStreamVideoInfo:(id)arg1;
+ (id)xmlOfWeAppInfo:(id)arg1;
+ (id)xmlOfMusicInfo:(id)arg1;
+ (id)xmlOfAppInfo:(id)arg1;
+ (id)xmlOfLocationInfo:(id)arg1;
+ (void)setWCContentItem:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (id)generateXMLFromUploadMedia:(id)arg1 nodeName:(id)arg2 extensionBlock:(CDUnknownBlockType)arg3;
+ (id)generateXMLFromUploadMedia:(id)arg1 extensionBlock:(CDUnknownBlockType)arg2;
+ (id)generateXMLFromUploadMedia:(id)arg1 nodeName:(id)arg2;
+ (id)generateXMLFromUploadMedia:(id)arg1;
+ (id)generateXMLFromUploadMediaContainer:(id)arg1;
+ (id)WCUploadTaskToXML:(id)arg1;
+ (id)storyUploadTaskToXML:(id)arg1;
+ (_Bool)setStoryDataItem:(id)arg1 byXml:(id)arg2;
+ (id)storyMediaListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)storyMediaItemFromXmlNode:(struct XmlReaderNode_t *)arg1;

@end

