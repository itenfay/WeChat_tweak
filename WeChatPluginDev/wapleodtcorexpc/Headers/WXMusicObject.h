//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXMusicObject : NSObject
{
    NSString *musicUrl;
    NSString *musicLowBandUrl;
    NSString *musicDataUrl;
    NSString *musicLowBandDataUrl;
    NSString *_songAlbumUrl;
    NSString *_songLyric;
}

+ (id)object;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *songLyric; // @synthesize songLyric=_songLyric;
@property(copy, nonatomic) NSString *songAlbumUrl; // @synthesize songAlbumUrl=_songAlbumUrl;
@property(retain, nonatomic) NSString *musicLowBandDataUrl; // @synthesize musicLowBandDataUrl;
@property(retain, nonatomic) NSString *musicDataUrl; // @synthesize musicDataUrl;
@property(retain, nonatomic) NSString *musicLowBandUrl; // @synthesize musicLowBandUrl;
@property(retain, nonatomic) NSString *musicUrl; // @synthesize musicUrl;
- (id)init;

@end

