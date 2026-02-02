//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveRemoteTrtcCustomRenderUser : NSObject
{
    unsigned long long _renderSrc;
    NSString *_sdkUserId;
    NSString *_userName;
    struct CGRect _normalizeFrame;
}

+ (id)genCustomRenderUserWithUserId:(id)arg1 userName:(id)arg2 renderSrc:(unsigned long long)arg3 normalizeFrame:(struct CGRect)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) struct CGRect normalizeFrame; // @synthesize normalizeFrame=_normalizeFrame;
@property(retain, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
@property(nonatomic) unsigned long long renderSrc; // @synthesize renderSrc=_renderSrc;
- (_Bool)isValid;

@end

