//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class OMJMovieSession;

@interface MJTemplateMovieSessionOperation
{
    OMJMovieSession *_maasSession;
}

@property(readonly, nonatomic) OMJMovieSession *maasSession; // @synthesize maasSession=_maasSession;
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
