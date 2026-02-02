//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdFinderFollowInfo : NSObject
{
    NSString *_finderUsername;
    NSString *_finderAvatar;
    NSString *_finderNickname;
    NSString *_finderDesc;
    NSString *_finderFollowingBtnTitle;
    NSString *_finderExportId;
    NSString *_finderObjectNonceId;
    long long _friendFollowCount;
    long long _finderFeedCount;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long finderFeedCount; // @synthesize finderFeedCount=_finderFeedCount;
@property(nonatomic) long long friendFollowCount; // @synthesize friendFollowCount=_friendFollowCount;
@property(retain, nonatomic) NSString *finderObjectNonceId; // @synthesize finderObjectNonceId=_finderObjectNonceId;
@property(retain, nonatomic) NSString *finderExportId; // @synthesize finderExportId=_finderExportId;
@property(retain, nonatomic) NSString *finderFollowingBtnTitle; // @synthesize finderFollowingBtnTitle=_finderFollowingBtnTitle;
@property(retain, nonatomic) NSString *finderDesc; // @synthesize finderDesc=_finderDesc;
@property(retain, nonatomic) NSString *finderNickname; // @synthesize finderNickname=_finderNickname;
@property(retain, nonatomic) NSString *finderAvatar; // @synthesize finderAvatar=_finderAvatar;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

