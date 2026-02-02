//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdVideoPlayModeInfo, WCMediaItem;

@interface WCAdBreakFrameAlphaVideoInfo : NSObject
{
    int _videoCompositeType;
    WCAdVideoPlayModeInfo *_playModeInfo;
    WCMediaItem *_mediaItem;
    WCMediaItem *_oneToOneHighMediaItem;
    WCMediaItem *_oneToOneLowMediaItem;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMediaItem *oneToOneLowMediaItem; // @synthesize oneToOneLowMediaItem=_oneToOneLowMediaItem;
@property(retain, nonatomic) WCMediaItem *oneToOneHighMediaItem; // @synthesize oneToOneHighMediaItem=_oneToOneHighMediaItem;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) int videoCompositeType; // @synthesize videoCompositeType=_videoCompositeType;
@property(retain, nonatomic) WCAdVideoPlayModeInfo *playModeInfo; // @synthesize playModeInfo=_playModeInfo;
- (id)fetchAvailableMediaItem;
- (id)fetchBreakFrameMediaId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

