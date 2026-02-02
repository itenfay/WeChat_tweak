//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <AVFoundation/AVPlayerItem.h>

@class WCAudioInfo;

@interface WCAudioPlayerAVItem : AVPlayerItem
{
    WCAudioInfo *_audioInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAudioInfo *audioInfo; // @synthesize audioInfo=_audioInfo;

@end

