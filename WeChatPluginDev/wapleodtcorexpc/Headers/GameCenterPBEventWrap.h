//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameCenterPBEventWrap
{
    unsigned int _eventId;
    NSString *_svrpath;
    CDUnknownBlockType _completion;
}

+ (void)sendPBRequest:(id)arg1 command:(unsigned int)arg2 svrPath:(id)arg3 responseClass:(Class)arg4 longPolling:(_Bool)arg5 additionalInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)sendPBRequest:(id)arg1 command:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *svrpath; // @synthesize svrpath=_svrpath;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;

@end

