//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, UIImageView;

@interface MMRenderVideoFrame : NSObject
{
    UIImageView *_localVideoView1;
    NSMutableDictionary *_userVideoViews1;
    NSMutableArray *_remoteVideoQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *remoteVideoQueue; // @synthesize remoteVideoQueue=_remoteVideoQueue;
@property(retain, nonatomic) NSMutableDictionary *userVideoViews1; // @synthesize userVideoViews1=_userVideoViews1;
@property(retain, nonatomic) UIImageView *localVideoView1; // @synthesize localVideoView1=_localVideoView1;
- (id)getRemoteVideo:(id)arg1;
- (void)onRenderVideoFrame:(id)arg1 userId:(id)arg2 streamType:(long long)arg3;
- (void)addUser:(id)arg1 videoView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

