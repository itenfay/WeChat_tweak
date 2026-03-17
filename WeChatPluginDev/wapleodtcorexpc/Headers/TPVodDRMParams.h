//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPVodDRMParams : NSObject
{
    long long _drmType;
    long long _secureLevel;
    unsigned long long _prepareStimeMs;
    unsigned long long _prepareEtimeMs;
    unsigned long long _certificateStimeMs;
    unsigned long long _certificateEtimeMs;
    unsigned long long _licenseStimeMs;
    unsigned long long _licenseEtimeMs;
}

@property(nonatomic) unsigned long long licenseEtimeMs; // @synthesize licenseEtimeMs=_licenseEtimeMs;
@property(nonatomic) unsigned long long licenseStimeMs; // @synthesize licenseStimeMs=_licenseStimeMs;
@property(nonatomic) unsigned long long certificateEtimeMs; // @synthesize certificateEtimeMs=_certificateEtimeMs;
@property(nonatomic) unsigned long long certificateStimeMs; // @synthesize certificateStimeMs=_certificateStimeMs;
@property(nonatomic) unsigned long long prepareEtimeMs; // @synthesize prepareEtimeMs=_prepareEtimeMs;
@property(nonatomic) unsigned long long prepareStimeMs; // @synthesize prepareStimeMs=_prepareStimeMs;
@property(nonatomic) long long secureLevel; // @synthesize secureLevel=_secureLevel;
@property(nonatomic) long long drmType; // @synthesize drmType=_drmType;
- (id)init;

@end

