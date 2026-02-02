//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface HLCarriorInfo : NSObject
{
    long long _netType;
    NSString *_carriorName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *carriorName; // @synthesize carriorName=_carriorName;
@property(nonatomic) long long netType; // @synthesize netType=_netType;
- (id)tag;

@end

