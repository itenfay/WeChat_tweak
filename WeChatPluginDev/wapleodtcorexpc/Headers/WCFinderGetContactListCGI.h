//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderGetContactListCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _fromScene;
    CDUnknownBlockType _respSuccessBlock;
    unsigned long long _requestContactCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestContactCount; // @synthesize requestContactCount=_requestContactCount;
@property(copy, nonatomic) CDUnknownBlockType respSuccessBlock; // @synthesize respSuccessBlock=_respSuccessBlock;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)setRequest:(id)arg1;
- (id)initWithUsername:(id)arg1 relationInfo:(id)arg2 finderUsername:(id)arg3 commentScene:(int)arg4 scene:(unsigned int)arg5 successBlock:(CDUnknownBlockType)arg6;
- (id)initWithFinderContactCommentLikeInfoArray:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (id)initWithStrangerInfoArray:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (id)initWithLocalSearchUsernameArray:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (id)initWithFinderUsername:(id)arg1 msgInfoArrary:(id)arg2 commentScene:(int)arg3;
- (id)initWithContact:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (id)initWithFansInfo:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (id)initWithComment:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (id)initWithAuthorUsernameArray:(id)arg1 commentScene:(int)arg2;
- (id)initWithUsernameArray:(id)arg1 contactType:(int)arg2 finderUsername:(id)arg3 commentScene:(int)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (id)initWithUsername:(id)arg1 relationInfo:(id)arg2 finderUsername:(id)arg3 commentScene:(int)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (id)initWithReq:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

