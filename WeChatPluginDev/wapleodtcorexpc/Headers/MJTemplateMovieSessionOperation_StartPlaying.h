//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MJTemplateMovieSessionOperation_StartPlaying
{
    NSString *_specificSegmentId;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) NSString *specificSegmentId; // @synthesize specificSegmentId=_specificSegmentId;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)boundTemplateId;
- (void)start;
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

