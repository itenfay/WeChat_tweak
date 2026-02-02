//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WCFinderContact;

@interface WCFinderLivePurchaseApplyMicParam : NSObject
{
    _Bool _usingVideo;
    _Bool _isAnonymous;
    unsigned int _applyType;
    unsigned int _coinAmount;
    NSData *_liveCookies;
    NSString *_sessionId;
    WCFinderContact *_toFinderContact;
    NSString *_consultContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *consultContent; // @synthesize consultContent=_consultContent;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(retain, nonatomic) WCFinderContact *toFinderContact; // @synthesize toFinderContact=_toFinderContact;
@property(nonatomic) _Bool usingVideo; // @synthesize usingVideo=_usingVideo;
@property(nonatomic) unsigned int coinAmount; // @synthesize coinAmount=_coinAmount;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int applyType; // @synthesize applyType=_applyType;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;

@end

