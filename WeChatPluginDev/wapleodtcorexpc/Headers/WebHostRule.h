//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebHostRule : NSObject
{
    long long _type;
    NSString *_brandName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

