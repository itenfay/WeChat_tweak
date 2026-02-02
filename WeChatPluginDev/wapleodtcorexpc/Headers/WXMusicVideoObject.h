//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXMusicVideoObject : NSObject
{
    unsigned int _duration;
    NSString *_musicUrl;
    NSString *_musicDataUrl;
    NSString *_singerName;
    NSString *_songLyric;
    NSData *_hdAlbumThumbData;
    NSString *_hdAlbumThumbFileHash;
    NSString *_albumName;
    NSString *_musicGenre;
    unsigned long long _issueDate;
    NSString *_identification;
    NSString *_musicOperationUrl;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *musicOperationUrl; // @synthesize musicOperationUrl=_musicOperationUrl;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *identification; // @synthesize identification=_identification;
@property(nonatomic) unsigned long long issueDate; // @synthesize issueDate=_issueDate;
@property(copy, nonatomic) NSString *musicGenre; // @synthesize musicGenre=_musicGenre;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *hdAlbumThumbFileHash; // @synthesize hdAlbumThumbFileHash=_hdAlbumThumbFileHash;
@property(retain, nonatomic) NSData *hdAlbumThumbData; // @synthesize hdAlbumThumbData=_hdAlbumThumbData;
@property(copy, nonatomic) NSString *songLyric; // @synthesize songLyric=_songLyric;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(copy, nonatomic) NSString *musicDataUrl; // @synthesize musicDataUrl=_musicDataUrl;
@property(copy, nonatomic) NSString *musicUrl; // @synthesize musicUrl=_musicUrl;

@end

