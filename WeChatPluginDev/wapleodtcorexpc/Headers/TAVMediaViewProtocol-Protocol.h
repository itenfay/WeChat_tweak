//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVPlayer;

@protocol TAVMediaViewProtocol <NSObject>
@property(nonatomic) _Bool shouldAnimation;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(nonatomic) unsigned long long fillMode;
@property(nonatomic) __weak AVPlayer *player;
- (void)refreshView;
@end

