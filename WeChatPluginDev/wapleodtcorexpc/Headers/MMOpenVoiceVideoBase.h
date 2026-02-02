//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;

@interface MMOpenVoiceVideoBase : UIView
{
    unsigned int _videoId;
    int _memberId;
    int _viewType;
    NSString *_openId;
}

- (void).cxx_destruct;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(nonatomic) int memberId; // @synthesize memberId=_memberId;
@property(nonatomic) unsigned int videoId; // @synthesize videoId=_videoId;
- (int)getViewType;
- (id)getOpenId;
- (int)getMemberId;
- (_Bool)isScreen;
- (_Bool)isVideo;
- (_Bool)isCamera;
- (void)updateViewType:(int)arg1;
- (void)updateMemberId:(int)arg1;
- (void)uintView;
- (void)render:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 rotation:(int)arg5;
- (int)updateView:(int)arg1 dic:(id)arg2;
- (int)initView:(int)arg1 openId:(id)arg2 dic:(id)arg3 queue:(id)arg4;
- (id)init;

@end

