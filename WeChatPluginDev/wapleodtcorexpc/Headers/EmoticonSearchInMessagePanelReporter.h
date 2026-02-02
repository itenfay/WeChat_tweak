//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonSearchInMessagePanelReporter : NSObject
{
    unsigned int _source;
    unsigned int _sourceScene;
    NSString *_searchID;
    NSString *_sessionID;
    NSString *_chatId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatId; // @synthesize chatId=_chatId;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
- (void)doReportSearchEntranceClick:(unsigned int)arg1;
- (void)doReport:(id)arg1 actionType:(unsigned int)arg2 md5s:(id)arg3 total:(unsigned int)arg4 position:(unsigned int)arg5 maxIndex:(unsigned int)arg6;
- (void)beginSession;
- (id)initWithChatId:(id)arg1 sessionId:(id)arg2;
- (id)initWithChatId:(id)arg1;

@end

