//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TRTCParams;

@interface MMLivePushParams : NSObject
{
    _Bool _isAudience;
    _Bool _forceUseTRTCAudioDevice;
    TRTCParams *_trtcParams;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceUseTRTCAudioDevice; // @synthesize forceUseTRTCAudioDevice=_forceUseTRTCAudioDevice;
@property(retain, nonatomic) TRTCParams *trtcParams; // @synthesize trtcParams=_trtcParams;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;

@end

