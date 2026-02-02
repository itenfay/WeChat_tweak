//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BTRecommendCardDataParser : NSObject
{
}

+ (void)parseFinderRecommendSectionDataWithRecCardWrapper:(id)arg1 currMsgData:(id)arg2;
+ (id)getAppMsgArrFromPbToModel:(id)arg1;
+ (id)getAccountDataArrFromBizInfoArr:(id)arg1;
+ (void)parseRecommendAriticleSectionDataWithRecCardWrapper:(id)arg1 currMsgData:(id)arg2;
+ (void)parseStyle0RecommendSectionDataWithRecCardWrapper:(id)arg1 currMsgData:(id)arg2;
+ (id)parseRecCardWrapperToRecommendSectionData:(id)arg1;
+ (id)parseWrapMsgToRecommendSectionData:(id)arg1;
+ (void)parseFinderCardFromNotifyNode:(struct XmlReaderNode_t *)arg1 currentRecCardWrapper:(id)arg2;
+ (id)parseAppMsgArrFromBizAccountNode:(struct XmlReaderNode_t *)arg1;
+ (id)parseBizInfoArrFromNotifyNode:(struct XmlReaderNode_t *)arg1;
+ (void)parseReaderStyleRecCardFromNotifyNode:(struct XmlReaderNode_t *)arg1 currentRecCardWrapper:(id)arg2;
+ (void)parseStyle0RecCardFromNotifyNode:(struct XmlReaderNode_t *)arg1 currentRecCardWrapper:(id)arg2;
+ (_Bool)parseBizRecommendExptFromXmlNode:(struct XmlReaderNode_t *)arg1 recCardWrapper:(id)arg2 createTime:(unsigned int)arg3;
+ (void)parseBizAccountRecommendFromXmlNode:(struct XmlReaderNode_t *)arg1 recCardWrapper:(id)arg2 createTime:(unsigned int)arg3;
+ (id)parseRecommendXmlContent:(id)arg1 msgSvrId:(unsigned long long)arg2 createTime:(unsigned int)arg3 recReason:(id)arg4 resortBuffer:(id)arg5;
+ (id)parseRecommendXmlContent:(id)arg1 recReason:(id)arg2 resortBuffer:(id)arg3;

@end

