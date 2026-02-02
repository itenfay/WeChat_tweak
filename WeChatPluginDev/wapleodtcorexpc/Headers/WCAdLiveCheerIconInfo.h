//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdLiveCheerIconInfo : NSObject
{
    int _sampleRate;
    NSString *_iconUrl;
}

- (void).cxx_destruct;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

