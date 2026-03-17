//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class MJTemplateMoviePlayer;

@interface MJTemplateMoviePlayerOperation : NSObject
{
    MJTemplateMoviePlayer *_templateMoviePlayer;
}

@property(readonly, nonatomic) __weak MJTemplateMoviePlayer *templateMoviePlayer; // @synthesize templateMoviePlayer=_templateMoviePlayer;
- (_Bool)canStartTemplateMoviePlayerOperation;
- (id)initWithTemplateMoviePlayer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
