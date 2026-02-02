//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLbsLocation, NSData, NSString;

@interface WCFinderGetLbsListCgi
{
    int _requestScene;
    NSString *_keyword;
    NSData *_lastBuffer;
    FinderLbsLocation *_lbsLocation;
    long long _entryTime;
    long long _isAutoQuery;
    FinderLbsLocation *_materialLbsLocation;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) FinderLbsLocation *materialLbsLocation; // @synthesize materialLbsLocation=_materialLbsLocation;
@property(nonatomic) long long isAutoQuery; // @synthesize isAutoQuery=_isAutoQuery;
@property(nonatomic) long long entryTime; // @synthesize entryTime=_entryTime;
@property(retain, nonatomic) FinderLbsLocation *lbsLocation; // @synthesize lbsLocation=_lbsLocation;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) int requestScene; // @synthesize requestScene=_requestScene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithRequestScene:(int)arg1 lastBuffer:(id)arg2 lbsLocation:(id)arg3 keyword:(id)arg4 entryTime:(long long)arg5 isAutoQuery:(long long)arg6 materialLbsLocation:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;

@end

