//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface DeviceAutoLoginToastWrap : NSObject
{
    unsigned int _iconType;
    NSData *_deviceId;
    NSString *_wording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) NSData *deviceId; // @synthesize deviceId=_deviceId;

@end

