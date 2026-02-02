//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdvertiseDynamicKeyInfo : NSObject
{
    NSString *_key;
    NSString *_keyPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

