//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdPassThroughPullRecords, WCAdTimelineAdLocalRecords;

@interface WCAdTimeLineRequestAdPassThroughInfo : NSObject
{
    NSString *_ua;
    NSString *_sessionKeyAd;
    NSString *_supportCapability;
    NSString *_commonDeviceId;
    WCAdPassThroughPullRecords *_adPullRecords;
    NSString *_vangoghLibVersion;
    WCAdTimelineAdLocalRecords *_localAdRecords;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdTimelineAdLocalRecords *localAdRecords; // @synthesize localAdRecords=_localAdRecords;
@property(retain, nonatomic) NSString *vangoghLibVersion; // @synthesize vangoghLibVersion=_vangoghLibVersion;
@property(retain, nonatomic) WCAdPassThroughPullRecords *adPullRecords; // @synthesize adPullRecords=_adPullRecords;
@property(retain, nonatomic) NSString *commonDeviceId; // @synthesize commonDeviceId=_commonDeviceId;
@property(retain, nonatomic) NSString *supportCapability; // @synthesize supportCapability=_supportCapability;
@property(retain, nonatomic) NSString *sessionKeyAd; // @synthesize sessionKeyAd=_sessionKeyAd;
@property(retain, nonatomic) NSString *ua; // @synthesize ua=_ua;

@end

