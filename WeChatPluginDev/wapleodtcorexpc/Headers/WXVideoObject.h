//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXVideoObject : NSObject
{
    NSString *videoUrl;
    NSString *videoLowBandUrl;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoLowBandUrl; // @synthesize videoLowBandUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl;
- (id)init;

@end

