//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveSongItem;

@interface WCFinderLiveGetSongListCGI
{
    _Bool _isAudience;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    MMFinderLiveSongItem *_singingSongItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveSongItem *singingSongItem; // @synthesize singingSongItem=_singingSongItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
- (id)transferToSongItemList:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 audience:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

