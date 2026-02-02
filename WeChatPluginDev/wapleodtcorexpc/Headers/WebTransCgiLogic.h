//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol WebTransCgiLogicDelegate;

@interface WebTransCgiLogic : NSObject
{
    int _hasRequestCgiNum;
    int _concurrentNum;
    int _minPackNodeCount;
    int _allRequestCgiNum;
    id <WebTransCgiLogicDelegate> _delegate;
    double _bounceDelayForNonFirstScreen;
    double _bounceDelayForFirstScreen;
    NSString *_curWebPageUrl;
    NSMutableArray *_cgiQueue;
    NSMutableArray *_returnedNodelistRepository;
    NSMutableArray *_returnedNodelistRepositoryForFirstScreen;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *returnedNodelistRepositoryForFirstScreen; // @synthesize returnedNodelistRepositoryForFirstScreen=_returnedNodelistRepositoryForFirstScreen;
@property(retain, nonatomic) NSMutableArray *returnedNodelistRepository; // @synthesize returnedNodelistRepository=_returnedNodelistRepository;
@property(retain, nonatomic) NSMutableArray *cgiQueue; // @synthesize cgiQueue=_cgiQueue;
@property(nonatomic) int allRequestCgiNum; // @synthesize allRequestCgiNum=_allRequestCgiNum;
@property(retain, nonatomic) NSString *curWebPageUrl; // @synthesize curWebPageUrl=_curWebPageUrl;
@property(nonatomic) double bounceDelayForFirstScreen; // @synthesize bounceDelayForFirstScreen=_bounceDelayForFirstScreen;
@property(nonatomic) double bounceDelayForNonFirstScreen; // @synthesize bounceDelayForNonFirstScreen=_bounceDelayForNonFirstScreen;
@property(nonatomic) int minPackNodeCount; // @synthesize minPackNodeCount=_minPackNodeCount;
@property(nonatomic) int concurrentNum; // @synthesize concurrentNum=_concurrentNum;
@property(nonatomic) int hasRequestCgiNum; // @synthesize hasRequestCgiNum=_hasRequestCgiNum;
@property(nonatomic) __weak id <WebTransCgiLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bounceForNonFirstScreen:(id)arg1;
- (void)bounceForFirstScreen:(id)arg1;
- (void)handleCgiReturn:(id)arg1;
- (void)requestCgiAndReturn:(id)arg1;
- (void)doRequestCgi;
- (void)sliceAndPack:(id)arg1;
- (void)slicePackAndSendCgi:(id)arg1 nodeCountPerPack:(long long)arg2 isFirstScreen:(_Bool)arg3;
- (id)nodeListToJSON:(id)arg1;
- (void)dealloc;
- (id)init;

@end

