//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveCommonSEIMsg : NSObject
{
    unsigned long long _wxT;
    NSString *_d;
    NSString *_m;
    NSString *_mt;
    NSString *_am;
    NSString *_lm;
    NSString *_ks;
    NSString *_rs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rs; // @synthesize rs=_rs;
@property(retain, nonatomic) NSString *ks; // @synthesize ks=_ks;
@property(retain, nonatomic) NSString *lm; // @synthesize lm=_lm;
@property(retain, nonatomic) NSString *am; // @synthesize am=_am;
@property(retain, nonatomic) NSString *mt; // @synthesize mt=_mt;
@property(retain, nonatomic) NSString *m; // @synthesize m=_m;
@property(retain, nonatomic) NSString *d; // @synthesize d=_d;
@property(nonatomic) unsigned long long wxT; // @synthesize wxT=_wxT;

@end

