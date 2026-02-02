//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdSupportCapabilityInfo : NSObject
{
    unsigned int _supportH265;
    unsigned int _supportWebP;
    unsigned int _supportAVIF;
}

+ (id)compatibleInfo;
+ (id)defaultInfo;
@property(nonatomic) unsigned int supportAVIF; // @synthesize supportAVIF=_supportAVIF;
@property(nonatomic) unsigned int supportWebP; // @synthesize supportWebP=_supportWebP;
@property(nonatomic) unsigned int supportH265; // @synthesize supportH265=_supportH265;
- (id)fetchCacheKey;
- (id)toJsonString;

@end

