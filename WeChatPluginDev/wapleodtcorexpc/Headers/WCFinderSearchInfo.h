//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderContact;

@interface WCFinderSearchInfo : NSObject
{
    WCFinderContact *_contact;
    NSString *_normalNickName;
    NSMutableArray *_nameHightkeywords;
    NSString *_normalSignature;
    NSMutableArray *_signatureHightkeywords;
    unsigned long long _fansCount;
    unsigned long long _friendFollowCount;
    NSString *_normalAuthProfession;
    NSMutableArray *_professionHightkeywords;
}

+ (id)finderSearchInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *professionHightkeywords; // @synthesize professionHightkeywords=_professionHightkeywords;
@property(retain, nonatomic) NSString *normalAuthProfession; // @synthesize normalAuthProfession=_normalAuthProfession;
@property(nonatomic) unsigned long long friendFollowCount; // @synthesize friendFollowCount=_friendFollowCount;
@property(nonatomic) unsigned long long fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) NSMutableArray *signatureHightkeywords; // @synthesize signatureHightkeywords=_signatureHightkeywords;
@property(retain, nonatomic) NSString *normalSignature; // @synthesize normalSignature=_normalSignature;
@property(retain, nonatomic) NSMutableArray *nameHightkeywords; // @synthesize nameHightkeywords=_nameHightkeywords;
@property(retain, nonatomic) NSString *normalNickName; // @synthesize normalNickName=_normalNickName;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)processHighlightProfession:(id)arg1;
- (void)processHighlightSignature:(id)arg1;
- (void)processHighlightNickName:(id)arg1;

@end

