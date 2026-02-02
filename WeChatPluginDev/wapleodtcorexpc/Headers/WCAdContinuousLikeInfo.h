//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdContinuousLikeBannerInfo, WCAdContinuousLikeButtonInfo, WCAdContinuousLikeTagInfo;

@interface WCAdContinuousLikeInfo : NSObject
{
    WCAdContinuousLikeButtonInfo *_buttonInfo;
    WCAdContinuousLikeTagInfo *_tagInfo;
    WCAdContinuousLikeBannerInfo *_bannerInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdContinuousLikeBannerInfo *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
@property(retain, nonatomic) WCAdContinuousLikeTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) WCAdContinuousLikeButtonInfo *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

