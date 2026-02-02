//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MultiTalkMemberInfo : NSObject
{
    unsigned int _remoteWxVer;
    NSString *_remoteSourceDevice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *remoteSourceDevice; // @synthesize remoteSourceDevice=_remoteSourceDevice;
@property(nonatomic) unsigned int remoteWxVer; // @synthesize remoteWxVer=_remoteWxVer;

@end

