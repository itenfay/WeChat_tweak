//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCFinderLiveUpdateSongListCGI
{
    unsigned long long _seq;
    NSMutableArray *_songNameList;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSMutableArray *songNameList; // @synthesize songNameList=_songNameList;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
- (id)transferToSongItemList:(id)arg1;
- (id)transferToSongNameList:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 songList:(id)arg2 seq:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

