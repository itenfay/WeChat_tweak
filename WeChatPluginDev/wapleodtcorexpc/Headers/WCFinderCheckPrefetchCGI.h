//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray;

@interface WCFinderCheckPrefetchCGI
{
    int _prefetchType;
    int _commentScene;
    NSMutableArray *_tidList;
    NSData *_lastBuffer;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) int prefetchType; // @synthesize prefetchType=_prefetchType;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *tidList; // @synthesize tidList=_tidList;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTidList:(id)arg1 lastBuffer:(id)arg2 prefetchType:(int)arg3 scene:(int)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

