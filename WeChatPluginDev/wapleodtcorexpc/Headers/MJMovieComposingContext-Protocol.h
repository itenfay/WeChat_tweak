//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJAudioFileManager, MJSpeechManager;

@protocol MJMovieComposingContext <NSObject>
@property(readonly, nonatomic) MJSpeechManager *speechManager;
@property(readonly, nonatomic) MJAudioFileManager *audioFileManager;
@end

