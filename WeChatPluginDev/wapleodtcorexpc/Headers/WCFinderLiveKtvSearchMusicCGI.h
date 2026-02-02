//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderLiveKtvSearchMusicCGI
{
    unsigned int _scene;
    NSData *_lastBuffer;
    NSData *_liveCookies;
    NSString *_searchID;
    NSString *_searchKey;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 searchId:(id)arg2 searchKey:(id)arg3 lastBuffer:(id)arg4 liveCookies:(id)arg5 scene:(unsigned int)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

@end

