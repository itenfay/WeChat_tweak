//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCQualityInfo : NSObject
{
    NSString *_userId;
    long long _quality;
}

- (void).cxx_destruct;
@property(nonatomic) long long quality; // @synthesize quality=_quality;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end

