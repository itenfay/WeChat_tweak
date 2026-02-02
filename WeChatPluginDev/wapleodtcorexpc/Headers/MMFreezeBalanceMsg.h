//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFreezeBalanceMsg : NSObject
{
    int _wordingSize;
    NSString *_wording;
    long long _wordingColor;
    long long _bgColor;
    NSString *_routeUrl;
    NSString *_leftIcon;
    NSString *_rightIcon;
}

+ (id)FreezeBalanceMsgWithWording:(id)arg1 wordingColor:(long long)arg2 wordingSize:(int)arg3 bgColor:(long long)arg4 routeUrl:(id)arg5 leftIcon:(id)arg6 rightIcon:(id)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(readonly, nonatomic) NSString *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(readonly, nonatomic) NSString *routeUrl; // @synthesize routeUrl=_routeUrl;
@property(readonly, nonatomic) long long bgColor; // @synthesize bgColor=_bgColor;
@property(readonly, nonatomic) int wordingSize; // @synthesize wordingSize=_wordingSize;
@property(readonly, nonatomic) long long wordingColor; // @synthesize wordingColor=_wordingColor;
@property(readonly, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (id)description;
- (id)initWithWording:(id)arg1 wordingColor:(long long)arg2 wordingSize:(int)arg3 bgColor:(long long)arg4 routeUrl:(id)arg5 leftIcon:(id)arg6 rightIcon:(id)arg7;

@end

