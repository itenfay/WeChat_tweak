//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPDashFormat : NSObject
{
    int _width;
    int _height;
    int _bandwidth;
    int _audioChannels;
    int _audioSamplingRate;
    float _frameRate;
    NSString *_representationId;
    NSString *_codecs;
    NSString *_mimeType;
    NSString *_language;
}

- (void).cxx_destruct;
@property(nonatomic) float frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) int audioSamplingRate; // @synthesize audioSamplingRate=_audioSamplingRate;
@property(nonatomic) int audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) int bandwidth; // @synthesize bandwidth=_bandwidth;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *codecs; // @synthesize codecs=_codecs;
@property(copy, nonatomic) NSString *representationId; // @synthesize representationId=_representationId;
- (id)init;

@end

