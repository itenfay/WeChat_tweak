//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveSEIConnectMicMsg;

@interface MMLiveCachedConnectMicInfoBeforeSwitchCdnOrTrtc : NSObject
{
    _Bool _isCdn;
    MMLiveSEIConnectMicMsg *_seiMicMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveSEIConnectMicMsg *seiMicMsg; // @synthesize seiMicMsg=_seiMicMsg;
@property(nonatomic) _Bool isCdn; // @synthesize isCdn=_isCdn;

@end

