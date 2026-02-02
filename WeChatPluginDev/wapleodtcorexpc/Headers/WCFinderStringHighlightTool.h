//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderStringHighlightTool : NSObject
{
}

+ (id)highlightArrayWithString:(id)arg1 pattern:(id)arg2;
+ (id)customLinkMentionStringWithText:(id)arg1 mentionCount:(unsigned long long *)arg2;
+ (id)emojiRegular;
+ (id)ignoreRegular;
+ (id)mentionRegular;
+ (id)linkStringWithString:(id)arg1 pattern:(id)arg2 ignoreRegex:(id)arg3;
+ (id)linkStringWithString:(id)arg1 pattern:(id)arg2 ignore:(id)arg3;
+ (id)highlightAttrStrWithString:(id)arg1 pattern:(id)arg2 ignore:(id)arg3 font:(id)arg4 normalColor:(id)arg5 highlightColor:(id)arg6 customAttrRester:(CDUnknownBlockType)arg7;
+ (id)getMentionInputStopTakenList;

@end

