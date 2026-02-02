//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CEmoticonWrap, NSString;

@interface RelatedEmoticonReportObject : NSObject
{
    NSString *_sessionId;
    NSString *_chatID;
    NSString *_searchID;
    CEmoticonWrap *_sourceEmoticonWrap;
    unsigned long long _maxRowCount;
}

+ (void)reportSessionId:(id)arg1 action:(unsigned int)arg2 sourcePid:(id)arg3 sourceMd5:(id)arg4 pid:(id)arg5 md5:(id)arg6 index:(unsigned int)arg7 maxRowCount:(unsigned int)arg8 isFree:(id)arg9 type:(id)arg10 isLocal:(id)arg11 chatID:(id)arg12 searchID:(id)arg13;
+ (void)reportLongPressMessageMenuFromMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxRowCount; // @synthesize maxRowCount=_maxRowCount;
@property(retain, nonatomic) CEmoticonWrap *sourceEmoticonWrap; // @synthesize sourceEmoticonWrap=_sourceEmoticonWrap;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(retain, nonatomic) NSString *chatID; // @synthesize chatID=_chatID;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)reportTabWeSearchMoreEmoticon;
- (void)reportTapEmoticonWithEmojiInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reportEmoticonExporsureWithEmojiInfos:(id)arg1;
- (void)reportTapRelatedEmoticonMenuItem;

@end

