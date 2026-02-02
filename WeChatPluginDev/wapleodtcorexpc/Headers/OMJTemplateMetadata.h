//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJTemplateMetadata : NSObject
{
    NSString *_identifier;
    unsigned long long _descVersion;
    NSString *_descDownloadURL;
    unsigned long long _minimumiOSSDKVersion;
    unsigned long long _minimumAndroidSDKVersion;
    NSString *_aiModelType;
}

+ (id)metaDataWithOMJTemplate:(id)arg1;
+ (id)metaDataWithMJTemplate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *aiModelType; // @synthesize aiModelType=_aiModelType;
@property(readonly, nonatomic) unsigned long long minimumAndroidSDKVersion; // @synthesize minimumAndroidSDKVersion=_minimumAndroidSDKVersion;
@property(readonly, nonatomic) unsigned long long minimumiOSSDKVersion; // @synthesize minimumiOSSDKVersion=_minimumiOSSDKVersion;
@property(readonly, nonatomic) NSString *descDownloadURL; // @synthesize descDownloadURL=_descDownloadURL;
@property(readonly, nonatomic) unsigned long long descVersion; // @synthesize descVersion=_descVersion;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 descVersion:(unsigned long long)arg2 descDownloadURL:(id)arg3 minimumiOSSDKVersion:(unsigned long long)arg4 minimumAndroidSDKVersion:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 descVersion:(unsigned long long)arg2 descDownloadURL:(id)arg3 minimumiOSSDKVersion:(unsigned long long)arg4 minimumAndroidSDKVersion:(unsigned long long)arg5 aiModelType:(id)arg6;

@end

