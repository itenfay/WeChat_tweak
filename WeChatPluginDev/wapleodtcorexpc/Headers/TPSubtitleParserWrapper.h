//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPSubtitleParserWrapper : NSObject
{
    struct ITPSubtitleParser *_subtitleParser;
    struct TPSubtitleParserCallbackWrapper *_subtitleCb;
}

- (void)stop;
- (void)setRenderParams:(CDStruct_92d0be38)arg1;
- (map_5b36435d)getSubtitleText:(long long)arg1;
- (int)selectTracksAsync:(vector_cd3186ef)arg1 opaque:(long long)arg2;
- (int)selectTrackAsync:(int)arg1 opaque:(long long)arg2;
- (vector_fdf80d0c)getTrackInfo;
- (void)pauseAsync;
- (void)startAsync;
- (void)loadAsync;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 httpHeader:(id)arg2 callback:(id)arg3 outputType:(int)arg4;

@end

