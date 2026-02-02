//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAJSEventHandler_operateVideoPlayer
{
    _Bool _shouldRouteToService;
    long long _dest;
}

@property(nonatomic) long long dest; // @synthesize dest=_dest;
@property(nonatomic) _Bool shouldRouteToService; // @synthesize shouldRouteToService=_shouldRouteToService;
- (_Bool)operateVideoPlayer:(id)arg1 videoId:(unsigned int)arg2;
- (id)getCurrentSnapshot;
- (void)handleJSEvent:(id)arg1;

@end

