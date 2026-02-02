//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicVideoStatusOpenParams, TextStateListenMediaView;

@interface TextState3rdPartyMusicTingTakeOverHandler
{
    MMMusicVideoStatusOpenParams *_params;
    TextStateListenMediaView *_mediaView;
}

+ (id)openParamsFormMusicBuffer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TextStateListenMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) MMMusicVideoStatusOpenParams *params; // @synthesize params=_params;
- (id)reportActivityId;
- (id)getMusicInfo;
- (id)musicInfo;
- (id)coverUrlString;
- (id)mediaCoverView;
- (id)mediaContentView;
- (_Bool)supportCustomMedia;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (id)convertSongInfoToMMMusicInfo:(id)arg1;
- (_Bool)useCoverForContent;
- (unsigned int)type;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;

@end

