//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKXMLPayRedDot : NSObject
{
    NSString *_reddotId;
    long long _expireTime;
    NSString *_wording;
}

+ (id)KXMLPayRedDotWithReddotId:(id)arg1 expireTime:(long long)arg2 wording:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(readonly, nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(readonly, nonatomic) NSString *reddotId; // @synthesize reddotId=_reddotId;
- (id)description;
- (id)initWithReddotId:(id)arg1 expireTime:(long long)arg2 wording:(id)arg3;

@end

