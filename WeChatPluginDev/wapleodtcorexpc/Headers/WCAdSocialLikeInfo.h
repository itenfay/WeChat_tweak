//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdContinuousLikeInfo, WCAdFireworkCheerInfo, WCAdSocialLikeAttractingInfo, WCAdSocialLikePatInfo, WCMultiLanguageItem;

@interface WCAdSocialLikeInfo : NSObject
{
    _Bool _notShowPag;
    WCMultiLanguageItem *_cheerText;
    WCMultiLanguageItem *_cheerFinishText;
    WCMultiLanguageItem *_commentText;
    NSString *_cheerIcon;
    NSString *_cheerIconDark;
    NSString *_likedIcon;
    NSString *_likedIconDark;
    NSString *_pagAnimationUrl;
    NSString *_pagAnimationMD5;
    WCAdSocialLikeAttractingInfo *_attractingInfo;
    WCAdContinuousLikeInfo *_continuousLikeInfo;
    WCAdFireworkCheerInfo *_fireworkCheerInfo;
    WCAdSocialLikePatInfo *_patInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdSocialLikePatInfo *patInfo; // @synthesize patInfo=_patInfo;
@property(retain, nonatomic) WCAdFireworkCheerInfo *fireworkCheerInfo; // @synthesize fireworkCheerInfo=_fireworkCheerInfo;
@property(retain, nonatomic) WCAdContinuousLikeInfo *continuousLikeInfo; // @synthesize continuousLikeInfo=_continuousLikeInfo;
@property(retain, nonatomic) WCAdSocialLikeAttractingInfo *attractingInfo; // @synthesize attractingInfo=_attractingInfo;
@property(retain, nonatomic) NSString *pagAnimationMD5; // @synthesize pagAnimationMD5=_pagAnimationMD5;
@property(retain, nonatomic) NSString *pagAnimationUrl; // @synthesize pagAnimationUrl=_pagAnimationUrl;
@property(retain, nonatomic) NSString *likedIconDark; // @synthesize likedIconDark=_likedIconDark;
@property(retain, nonatomic) NSString *likedIcon; // @synthesize likedIcon=_likedIcon;
@property(retain, nonatomic) NSString *cheerIconDark; // @synthesize cheerIconDark=_cheerIconDark;
@property(retain, nonatomic) NSString *cheerIcon; // @synthesize cheerIcon=_cheerIcon;
@property(nonatomic) _Bool notShowPag; // @synthesize notShowPag=_notShowPag;
@property(retain, nonatomic) WCMultiLanguageItem *commentText; // @synthesize commentText=_commentText;
@property(retain, nonatomic) WCMultiLanguageItem *cheerFinishText; // @synthesize cheerFinishText=_cheerFinishText;
@property(retain, nonatomic) WCMultiLanguageItem *cheerText; // @synthesize cheerText=_cheerText;
- (id)fetchCheerIconEscapingForXML;
- (id)fetchCheerIcon;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

