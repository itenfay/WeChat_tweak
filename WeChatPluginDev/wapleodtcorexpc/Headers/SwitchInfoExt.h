//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SwitchInfo;

@interface SwitchInfoExt : NSObject
{
    SwitchInfo *_switchInfo;
    NSString *_bizDesc;
    long long _bizId;
}

- (void).cxx_destruct;
@property(nonatomic) long long bizId; // @synthesize bizId=_bizId;
@property(copy, nonatomic) NSString *bizDesc; // @synthesize bizDesc=_bizDesc;
@property(retain, nonatomic) SwitchInfo *switchInfo; // @synthesize switchInfo=_switchInfo;

@end

