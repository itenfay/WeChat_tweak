//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WCFinderLiveKtvGetMusicBoardCGI
{
    unsigned int _boardType;
    unsigned int _subBoardType;
    unsigned int _scene;
    NSData *_lastBuffer;
    NSData *_liveCookies;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int subBoardType; // @synthesize subBoardType=_subBoardType;
@property(nonatomic) unsigned int boardType; // @synthesize boardType=_boardType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)parseBoardTypeList:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 boardType:(unsigned int)arg2 subBoardType:(unsigned int)arg3 lastBuffer:(id)arg4 liveCookies:(id)arg5 scene:(unsigned int)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

@end

