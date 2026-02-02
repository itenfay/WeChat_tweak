//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WXGImportAnalyseInfo : NSObject
{
    double _costTime;
    NSMutableDictionary *_allChatInfo;
    unsigned long long _textSize;
    unsigned long long _mediaSize;
    unsigned long long _totalMsgCount;
    unsigned long long _totalMediaCount;
    unsigned long long _totalMsgListCount;
    unsigned long long _totalSessionCount;
    NSMutableDictionary *_totalMediaType;
    double _startTime;
    NSString *_briefString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *briefString; // @synthesize briefString=_briefString;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableDictionary *totalMediaType; // @synthesize totalMediaType=_totalMediaType;
@property(nonatomic) unsigned long long totalSessionCount; // @synthesize totalSessionCount=_totalSessionCount;
@property(nonatomic) unsigned long long totalMsgListCount; // @synthesize totalMsgListCount=_totalMsgListCount;
@property(nonatomic) unsigned long long totalMediaCount; // @synthesize totalMediaCount=_totalMediaCount;
@property(nonatomic) unsigned long long totalMsgCount; // @synthesize totalMsgCount=_totalMsgCount;
@property(nonatomic) unsigned long long mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) unsigned long long textSize; // @synthesize textSize=_textSize;
@property(retain, nonatomic) NSMutableDictionary *allChatInfo; // @synthesize allChatInfo=_allChatInfo;
@property(nonatomic) double costTime; // @synthesize costTime=_costTime;
- (id)brief;
- (id)init;

@end

