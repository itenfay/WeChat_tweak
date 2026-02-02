//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact, WCFinderStreamProfileExtInfo;

@interface WCFinderUserPageContactInfo : NSObject
{
    _Bool _isPrivateLock;
    WCFinderContact *_contact;
    WCFinderStreamProfileExtInfo *_extInfo;
    NSString *_accountInfoUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accountInfoUrl; // @synthesize accountInfoUrl=_accountInfoUrl;
@property(nonatomic) _Bool isPrivateLock; // @synthesize isPrivateLock=_isPrivateLock;
@property(retain, nonatomic) WCFinderStreamProfileExtInfo *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;

@end

