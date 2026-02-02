//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayProfession : NSObject
{
    NSString *_professionName;
    long long _professionType;
}

- (void).cxx_destruct;
@property(nonatomic) long long professionType; // @synthesize professionType=_professionType;
@property(copy, nonatomic) NSString *professionName; // @synthesize professionName=_professionName;

@end

