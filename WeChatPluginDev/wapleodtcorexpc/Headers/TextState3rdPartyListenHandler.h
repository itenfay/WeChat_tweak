//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class StatusFooterJumpListen, TextStateListenMediaView;

@interface TextState3rdPartyListenHandler
{
    StatusFooterJumpListen *_jumpInfo;
    TextStateListenMediaView *_mediaView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TextStateListenMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) StatusFooterJumpListen *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
- (id)generatePlayerConfiguration;
- (id)mediaCoverView;
- (id)mediaContentView;
- (_Bool)supportCustomMedia;
- (_Bool)useCoverForContent;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (unsigned int)type;

@end

