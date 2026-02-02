//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OpenBusinessViewContext : NSObject
{
    NSString *_envVersion;
    NSString *_businessType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *envVersion; // @synthesize envVersion=_envVersion;

@end

