//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImageView, WAPlayerHttpMediaWrap, WCPlayerConfigControlView, WCPlayerPlayArgs, WCPlayerView;

@interface WAMediaPreviewItem : NSObject
{
    NSString *_url;
    unsigned long long _type;
    NSString *_thumb;
    WAPlayerHttpMediaWrap *_mediaWrap;
    WCPlayerPlayArgs *_playerInfo;
    WCPlayerConfigControlView *_playerControlView;
    WCPlayerView *_playerView;
    UIImageView *_thumbImageView;
    unsigned long long _downloadCompleteOperateType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long downloadCompleteOperateType; // @synthesize downloadCompleteOperateType=_downloadCompleteOperateType;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCPlayerConfigControlView *playerControlView; // @synthesize playerControlView=_playerControlView;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WAPlayerHttpMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(copy, nonatomic) NSString *thumb; // @synthesize thumb=_thumb;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

