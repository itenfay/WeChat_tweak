//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveBeautyResourcePackageModel : NSObject
{
    unsigned long long _packageType;
    NSString *_instanceId;
    NSString *_instancePath;
    NSString *_configurationPath;
    NSString *_uri;
    NSString *_md5Hash;
    NSString *_masterId;
    NSString *_masterPath;
    NSString *_manifestPath;
}

+ (id)packageWithType:(unsigned long long)arg1 uri:(id)arg2 md5Hash:(id)arg3 instanceId:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *manifestPath; // @synthesize manifestPath=_manifestPath;
@property(retain, nonatomic) NSString *masterPath; // @synthesize masterPath=_masterPath;
@property(retain, nonatomic) NSString *masterId; // @synthesize masterId=_masterId;
@property(retain, nonatomic) NSString *md5Hash; // @synthesize md5Hash=_md5Hash;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString *configurationPath; // @synthesize configurationPath=_configurationPath;
@property(retain, nonatomic) NSString *instancePath; // @synthesize instancePath=_instancePath;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) unsigned long long packageType; // @synthesize packageType=_packageType;
- (id)createFetcherTask;
- (id)initWithPackageType:(unsigned long long)arg1 uri:(id)arg2 md5Hash:(id)arg3 instanceId:(id)arg4;

@end

