//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTextStateMediaItem, MMTextStateVideoItem, NSString;

@interface TextStatePublishMediaInfo : NSObject
{
    _Bool _mediaBlur;
    _Bool _canEditBlur;
    _Bool _canEditLive;
    unsigned int _mediaSource;
    unsigned int _mediaType;
    unsigned int _textStateCreateTime;
    MMTextStateMediaItem *_imageLocalItem;
    MMTextStateVideoItem *_videoLocalItem;
    MMTextStateMediaItem *_mediaItem;
    NSString *_textStateUsername;
    unsigned long long _mediaDuration;
    struct CGSize _mediaScreenSize;
}

+ (id)mediaInfoFromLivePhotoItem:(id)arg1;
+ (id)mediaInfoFromVideoItem:(id)arg1;
+ (id)mediaInfoFromImageItem:(id)arg1;
+ (id)mediaInfoFromUsername:(id)arg1 textState:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool canEditLive; // @synthesize canEditLive=_canEditLive;
@property(nonatomic) _Bool canEditBlur; // @synthesize canEditBlur=_canEditBlur;
@property(nonatomic) unsigned long long mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(retain, nonatomic) NSString *textStateUsername; // @synthesize textStateUsername=_textStateUsername;
@property(nonatomic) unsigned int textStateCreateTime; // @synthesize textStateCreateTime=_textStateCreateTime;
@property(nonatomic) struct CGSize mediaScreenSize; // @synthesize mediaScreenSize=_mediaScreenSize;
@property(nonatomic) _Bool mediaBlur; // @synthesize mediaBlur=_mediaBlur;
@property(retain, nonatomic) MMTextStateMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) MMTextStateVideoItem *videoLocalItem; // @synthesize videoLocalItem=_videoLocalItem;
@property(retain, nonatomic) MMTextStateMediaItem *imageLocalItem; // @synthesize imageLocalItem=_imageLocalItem;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned int mediaSource; // @synthesize mediaSource=_mediaSource;
- (id)generatePublishedTextState;
- (id)init;

@end

