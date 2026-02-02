//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCPlayerInfoUtility
{
}

+ (id)generateDownloadArgsWrapWithMediaWrap:(id)arg1 playerScene:(unsigned long long)arg2;
+ (unsigned long long)getMediaUrlNetTypeByVideoPath:(id)arg1;
+ (void)updateAVPlayerInfo:(id)arg1 withMediaWrap:(id)arg2;
+ (id)genDefaultAVPlayerInfoWithMediaWrap:(id)arg1 playerScene:(unsigned long long)arg2 videoPath:(id)arg3 initialTime:(double)arg4 bLoop:(_Bool)arg5;

@end

