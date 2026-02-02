//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFootageReplayModel, NSData;

@interface WCFinderLiveGetLiveMsgWithOffsetCGI
{
    _Bool _isContinualRequest;
    unsigned int _offsetInSecond;
    int _scenario;
    NSData *_lastBuffer;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    MMFinderLiveFootageReplayModel *_footageReplayModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFootageReplayModel *footageReplayModel; // @synthesize footageReplayModel=_footageReplayModel;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) int scenario; // @synthesize scenario=_scenario;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool isContinualRequest; // @synthesize isContinualRequest=_isContinualRequest;
@property(nonatomic) unsigned int offsetInSecond; // @synthesize offsetInSecond=_offsetInSecond;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createTargetedFootageReplayRequest;
- (void)createGenericRequest;
- (id)initWithFootageReplayModel:(id)arg1 timeOffset:(unsigned int)arg2 isContinualRequest:(_Bool)arg3 lastBuffer:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (id)initWithTaskId:(id)arg1 timeOffset:(unsigned int)arg2 isContinualRequest:(_Bool)arg3 lastBuffer:(id)arg4 scenario:(int)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

