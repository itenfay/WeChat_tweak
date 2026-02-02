//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdBreakFramePlayStateInfo;

@interface WCAdVideoPlayModeInfo : NSObject
{
    int _playMode;
    double _startOffset;
    double _loopStartTime;
    double _loopEndTime;
    WCAdBreakFramePlayStateInfo *_playStateInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdBreakFramePlayStateInfo *playStateInfo; // @synthesize playStateInfo=_playStateInfo;
@property(nonatomic) double loopEndTime; // @synthesize loopEndTime=_loopEndTime;
@property(nonatomic) double loopStartTime; // @synthesize loopStartTime=_loopStartTime;
@property(nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) int playMode; // @synthesize playMode=_playMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

