//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@interface C2CVideoStreamPlayerView
{
    CMessageWrap *m_oMessageWrap;
}

- (void).cxx_destruct;
- (_Bool)isStreamingPlayMode;
- (id)getFormalVideoPath;
- (void)genThumbIfNeed;
- (void)updateVideoArgs;
- (id)initWithFrame:(struct CGRect)arg1 MessageWrap:(id)arg2;

@end

