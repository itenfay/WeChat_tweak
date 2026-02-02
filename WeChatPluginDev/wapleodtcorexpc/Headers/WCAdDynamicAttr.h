//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdBulletScreenInfo, WCAdCommonConfig, WCAdDynamicFeedInfluentDataInfo;

@interface WCAdDynamicAttr : NSObject
{
    WCAdCommonConfig *_commonConfig;
    WCAdDynamicFeedInfluentDataInfo *_influentData;
    WCAdBulletScreenInfo *_adBulletScreenInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdBulletScreenInfo *adBulletScreenInfo; // @synthesize adBulletScreenInfo=_adBulletScreenInfo;
@property(retain, nonatomic) WCAdDynamicFeedInfluentDataInfo *influentData; // @synthesize influentData=_influentData;
@property(retain, nonatomic) WCAdCommonConfig *commonConfig; // @synthesize commonConfig=_commonConfig;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

