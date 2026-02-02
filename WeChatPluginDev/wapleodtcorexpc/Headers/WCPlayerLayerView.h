//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVPlayerLayer;

@interface WCPlayerLayerView : UIView
{
    unsigned int _taskId;
    AVPlayerLayer *_playerLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)resetView;
- (void)setVideoGravity:(id)arg1;
- (void)layoutSubviews;
- (void)setPlayer:(id)arg1;
- (id)getPlayerLayer;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)arg1;
- (_Bool)isReadyForDisplay;
- (id)initWithFrame:(struct CGRect)arg1;

@end

