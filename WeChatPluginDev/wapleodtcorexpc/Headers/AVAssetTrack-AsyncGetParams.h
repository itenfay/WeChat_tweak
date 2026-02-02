//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <AVFoundation/AVAssetTrack.h>

@interface AVAssetTrack (AsyncGetParams)
+ (id)getAssetInfoDict;
- (void)asyncGetParamsWithOption:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)syncGetParams:(id)arg1 timeout:(float)arg2;
- (id)syncGetParams:(id)arg1;
- (id)syncGetAudioSubType;
- (const struct AudioStreamBasicDescription *)syncGetAudioDescription;
- (struct opaqueCMFormatDescription *)syncGetAudioFormatDescription;
- (long long)syncGetAudioChannel;
- (float)syncGetFramerate;
- (float)syncGetBitrate;
- (id)tav_trackKey;
@end

