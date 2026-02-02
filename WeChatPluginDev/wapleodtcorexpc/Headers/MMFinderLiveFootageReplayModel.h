//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveFootageReplayModel : NSObject
{
    _Bool _rotationEnabled;
    unsigned int _startOffset;
    unsigned int _endOffset;
    NSString *_replayUri;
    unsigned long long _replayLiveId;
    NSString *_replayFinderUsername;
    unsigned long long _replayObjectId;
    NSString *_replayObjectNonceId;
    NSString *_reportSongId;
    NSString *_reportSongName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportSongName; // @synthesize reportSongName=_reportSongName;
@property(retain, nonatomic) NSString *reportSongId; // @synthesize reportSongId=_reportSongId;
@property(retain, nonatomic) NSString *replayObjectNonceId; // @synthesize replayObjectNonceId=_replayObjectNonceId;
@property(nonatomic) unsigned long long replayObjectId; // @synthesize replayObjectId=_replayObjectId;
@property(retain, nonatomic) NSString *replayFinderUsername; // @synthesize replayFinderUsername=_replayFinderUsername;
@property(nonatomic) unsigned long long replayLiveId; // @synthesize replayLiveId=_replayLiveId;
@property(nonatomic) _Bool rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
@property(nonatomic) unsigned int endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) unsigned int startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) NSString *replayUri; // @synthesize replayUri=_replayUri;

@end

