//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJRecordingResultTraits : NSObject
{
    _Bool _hasFaceSticker;
    _Bool _hasOverlaySticker;
    _Bool _has3DLayer;
    unsigned long long _faceTimePercentage;
    unsigned long long _likelyDefective;
}

@property(readonly, nonatomic) unsigned long long likelyDefective; // @synthesize likelyDefective=_likelyDefective;
@property(readonly, nonatomic) unsigned long long faceTimePercentage; // @synthesize faceTimePercentage=_faceTimePercentage;
@property(readonly, nonatomic) _Bool has3DLayer; // @synthesize has3DLayer=_has3DLayer;
@property(readonly, nonatomic) _Bool hasOverlaySticker; // @synthesize hasOverlaySticker=_hasOverlaySticker;
@property(readonly, nonatomic) _Bool hasFaceSticker; // @synthesize hasFaceSticker=_hasFaceSticker;
- (id)initWithHasFaceSticker:(_Bool)arg1 hasOverlaySticker:(_Bool)arg2 has3DLayer:(_Bool)arg3 faceTimePercentage:(unsigned long long)arg4 likelyDefective:(unsigned long long)arg5;

@end

