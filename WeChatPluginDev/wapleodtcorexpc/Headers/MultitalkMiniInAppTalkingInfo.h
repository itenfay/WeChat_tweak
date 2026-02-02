//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMConfSDKTalkingInfo, WCVideoRender;

@interface MultitalkMiniInAppTalkingInfo : NSObject
{
    MMConfSDKTalkingInfo *_talkingInfo;
    WCVideoRender *_videoRender;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCVideoRender *videoRender; // @synthesize videoRender=_videoRender;
@property(retain, nonatomic) MMConfSDKTalkingInfo *talkingInfo; // @synthesize talkingInfo=_talkingInfo;
- (id)description;
- (id)initWithTalkingInfo:(id)arg1;

@end

