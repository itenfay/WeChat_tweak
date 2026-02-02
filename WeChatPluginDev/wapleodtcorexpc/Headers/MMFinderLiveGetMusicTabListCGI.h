//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface MMFinderLiveGetMusicTabListCGI
{
    unsigned int _tabType;
    CDUnknownBlockType _success;
    CDUnknownBlockType _fail;
    NSData *_lastBuffer;
    NSData *_liveCookies;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) CDUnknownBlockType fail; // @synthesize fail=_fail;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 lastBuffer:(id)arg2 liveCookies:(id)arg3 tabType:(unsigned int)arg4 success:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;

@end

