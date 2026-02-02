//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo;

@interface WCAdContinuousLikeTagInfo : NSObject
{
    NSString *_numberRequestId;
    NSString *_numberDefaultTitle;
    NSString *_numberDesc;
    NSString *_numberCurrentTitle;
    NSString *_continuousLikeTitle;
    NSString *_continuousLikeTitleColorLight;
    NSString *_continuousLikeTitleColorDark;
    NSString *_jumpLinkTitle;
    NSString *_jumpLinkIconLight;
    NSString *_jumpLinkIconDark;
    WCAdCardBtnInfo *_jumpLinkActionInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *jumpLinkActionInfo; // @synthesize jumpLinkActionInfo=_jumpLinkActionInfo;
@property(retain, nonatomic) NSString *jumpLinkIconDark; // @synthesize jumpLinkIconDark=_jumpLinkIconDark;
@property(retain, nonatomic) NSString *jumpLinkIconLight; // @synthesize jumpLinkIconLight=_jumpLinkIconLight;
@property(retain, nonatomic) NSString *jumpLinkTitle; // @synthesize jumpLinkTitle=_jumpLinkTitle;
@property(retain, nonatomic) NSString *continuousLikeTitleColorDark; // @synthesize continuousLikeTitleColorDark=_continuousLikeTitleColorDark;
@property(retain, nonatomic) NSString *continuousLikeTitleColorLight; // @synthesize continuousLikeTitleColorLight=_continuousLikeTitleColorLight;
@property(retain, nonatomic) NSString *continuousLikeTitle; // @synthesize continuousLikeTitle=_continuousLikeTitle;
@property(retain, nonatomic) NSString *numberCurrentTitle; // @synthesize numberCurrentTitle=_numberCurrentTitle;
@property(retain, nonatomic) NSString *numberDesc; // @synthesize numberDesc=_numberDesc;
@property(retain, nonatomic) NSString *numberDefaultTitle; // @synthesize numberDefaultTitle=_numberDefaultTitle;
@property(retain, nonatomic) NSString *numberRequestId; // @synthesize numberRequestId=_numberRequestId;
- (id)fetchJumpLinkIconUrl;
- (id)fetchContinuousLikeTitleColor;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

