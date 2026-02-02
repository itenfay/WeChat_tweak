//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface WXAVPlayerView : UIView
{
}

+ (Class)layerClass;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
@property(retain, nonatomic) AVPlayer *player;

@end

