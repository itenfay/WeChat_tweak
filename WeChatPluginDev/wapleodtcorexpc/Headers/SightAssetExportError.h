//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSError.h>

@interface SightAssetExportError : NSError
{
    _Bool _failAtVideoTrack;
    _Bool _failAtAudioTrack;
}

@property(nonatomic) _Bool failAtAudioTrack; // @synthesize failAtAudioTrack=_failAtAudioTrack;
@property(nonatomic) _Bool failAtVideoTrack; // @synthesize failAtVideoTrack=_failAtVideoTrack;
- (id)initWithError:(id)arg1 failAtVideo:(_Bool)arg2 failAtAudio:(_Bool)arg3;

@end

