//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSString;
@protocol EmoticonRecommendBoardCgiDelegate;

@interface EmoticonRecommendBoardCgi
{
    unsigned int _source;
    unsigned int _startTime;
    NSString *_queryString;
    NSString *_chatId;
    NSString *_sessionId;
    unsigned long long _scene;
    id <EmoticonRecommendBoardCgiDelegate> _delegate;
    NSArray *_recommendWraps;
    NSArray *_contexts;
    NSData *_pageBuffer;
    NSData *_localEmoji;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSData *localEmoji; // @synthesize localEmoji=_localEmoji;
@property(retain, nonatomic) NSData *pageBuffer; // @synthesize pageBuffer=_pageBuffer;
@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSArray *recommendWraps; // @synthesize recommendWraps=_recommendWraps;
@property(nonatomic) __weak id <EmoticonRecommendBoardCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *chatId; // @synthesize chatId=_chatId;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)doReportWithErrorCode:(int)arg1 isExpired:(_Bool)arg2;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequest;
- (_Bool)canStartRequest;
- (id)initWithQueryString:(id)arg1 scene:(unsigned long long)arg2 sessionId:(id)arg3 localEmoji:(id)arg4;
- (id)initWithQueryString:(id)arg1 scene:(unsigned long long)arg2 chatId:(id)arg3 sessionId:(id)arg4 contexts:(id)arg5;

@end

