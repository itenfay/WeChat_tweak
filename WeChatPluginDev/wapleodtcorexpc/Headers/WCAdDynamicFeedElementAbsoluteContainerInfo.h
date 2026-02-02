//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdDynamicFeedElementPromotionInfo, WCAdDynamicFeedElementRollTextInfo;

@interface WCAdDynamicFeedElementAbsoluteContainerInfo : NSObject
{
    WCAdDynamicFeedElementPromotionInfo *_promotionInfo;
    WCAdDynamicFeedElementRollTextInfo *_rollTextInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementRollTextInfo *rollTextInfo; // @synthesize rollTextInfo=_rollTextInfo;
@property(retain, nonatomic) WCAdDynamicFeedElementPromotionInfo *promotionInfo; // @synthesize promotionInfo=_promotionInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

