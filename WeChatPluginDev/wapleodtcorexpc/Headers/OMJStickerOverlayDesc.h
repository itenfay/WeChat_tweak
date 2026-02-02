//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface OMJStickerOverlayDesc
{
    unsigned long long _stickerType;
    unsigned long long _timingFillMode;
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) unsigned long long timingFillMode; // @synthesize timingFillMode=_timingFillMode;
@property(readonly, nonatomic) unsigned long long stickerType; // @synthesize stickerType=_stickerType;
- (id)initWithStickerType:(unsigned long long)arg1 timingFillMode:(unsigned long long)arg2 filePath:(id)arg3 spatialInfo:(id)arg4;

@end

