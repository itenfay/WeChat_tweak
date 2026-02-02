//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderGetPostRecommendTitleContext, NSData, NSString;

@interface WCFinderGetPostRecommendWordingCGI
{
    int _scene;
    NSData *_lastBuffer;
    NSData *_seqBuffer;
    FinderGetPostRecommendTitleContext *_titleContext;
    NSString *_finderUserName;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(copy, nonatomic) FinderGetPostRecommendTitleContext *titleContext; // @synthesize titleContext=_titleContext;
@property(copy, nonatomic) NSData *seqBuffer; // @synthesize seqBuffer=_seqBuffer;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithScene:(int)arg1 lastBuffer:(id)arg2 seqBuffer:(id)arg3 titleContext:(id)arg4 finderUserName:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

