//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveFreeFloatMsgConfig : NSObject
{
    unsigned long long _stayTimeLimit;
    NSString *_iconUrl;
    NSString *_wording;
    unsigned long long _enableTimestamp;
    NSString *_guideWording;
}

+ (id)configFromFreeFloatMsgInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *guideWording; // @synthesize guideWording=_guideWording;
@property(nonatomic) unsigned long long enableTimestamp; // @synthesize enableTimestamp=_enableTimestamp;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned long long stayTimeLimit; // @synthesize stayTimeLimit=_stayTimeLimit;

@end

