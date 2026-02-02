//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCombineFollowBrandInfo, WCAdCombineFollowFinderInfo;

@interface WCAdCombineFollowInfo : NSObject
{
    int _allFollowedJumpType;
    int _allFollowSuccessJumpType;
    NSString *_headTitle;
    NSString *_headImageUrl;
    WCAdCombineFollowBrandInfo *_brandFollowInfo;
    WCAdCombineFollowFinderInfo *_finderFollowInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCombineFollowFinderInfo *finderFollowInfo; // @synthesize finderFollowInfo=_finderFollowInfo;
@property(retain, nonatomic) WCAdCombineFollowBrandInfo *brandFollowInfo; // @synthesize brandFollowInfo=_brandFollowInfo;
@property(nonatomic) int allFollowSuccessJumpType; // @synthesize allFollowSuccessJumpType=_allFollowSuccessJumpType;
@property(nonatomic) int allFollowedJumpType; // @synthesize allFollowedJumpType=_allFollowedJumpType;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

