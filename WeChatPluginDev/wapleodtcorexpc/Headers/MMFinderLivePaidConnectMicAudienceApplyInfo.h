//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLivePaidConnectMicAudienceApplyInfo : NSObject
{
    _Bool _isAnonymous;
    _Bool _usingVideo;
    NSString *_consultContent;
    unsigned long long _applyPrice;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long applyPrice; // @synthesize applyPrice=_applyPrice;
@property(nonatomic) _Bool usingVideo; // @synthesize usingVideo=_usingVideo;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(retain, nonatomic) NSString *consultContent; // @synthesize consultContent=_consultContent;

@end

