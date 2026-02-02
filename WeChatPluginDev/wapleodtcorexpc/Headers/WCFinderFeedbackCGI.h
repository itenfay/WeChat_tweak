//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCFinderFeedbackCGI
{
    int _scene;
    int _satisfactionQuestSubType;
    unsigned long long _objectID;
    unsigned long long _feedbackType;
    long long _subType;
    NSMutableArray *_subTypeList;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_nonceID;
    NSString *_sessionBuffer;
    unsigned long long _liveScene;
}

- (void).cxx_destruct;
@property(nonatomic) int satisfactionQuestSubType; // @synthesize satisfactionQuestSubType=_satisfactionQuestSubType;
@property(nonatomic) unsigned long long liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSMutableArray *subTypeList; // @synthesize subTypeList=_subTypeList;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned long long feedbackType; // @synthesize feedbackType=_feedbackType;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFeedbackType:(unsigned long long)arg1 subType:(long long)arg2 subTypeList:(id)arg3 objectID:(unsigned long long)arg4 nonceID:(id)arg5 sessionBuffer:(id)arg6 scene:(int)arg7 liveScene:(unsigned long long)arg8 sessionExtraKey:(id)arg9 satisfactionQuestSubType:(int)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;

@end

