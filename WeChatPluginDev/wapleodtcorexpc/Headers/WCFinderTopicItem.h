//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderTopicItem : NSObject
{
}

+ (id)topicColorStyle;
+ (_Bool)xmlIsAllTopicContentWithTopicsArray:(id)arg1 content:(id)arg2;
+ (id)appendParamsDic:(id)arg1 toUrl:(id)arg2;
+ (id)connectUrl:(id)arg1 url:(id)arg2;
+ (id)removeHeadRearWellSymbol:(id)arg1;
+ (unsigned long long)getPrefixWellSymbolCount:(id)arg1;
+ (id)handlePureContentParseLogic:(id)arg1 highlightRangeObjectArray:(id)arg2 curContent:(id)arg3;
+ (id)filterPreURLByContent:(id)arg1;
+ (id)parseFromTid:(id)arg1 XMLString:(id)arg2 contentTitle:(id)arg3;
+ (id)genTextToXML:(id)arg1 bindRangeArray:(id)arg2;
+ (id)handleTextToXML:(id)arg1;
+ (id)handleTextToXML:(id)arg1 bindArray:(id)arg2;
+ (id)checkBinds:(id)arg1 inText:(id)arg2;

@end

