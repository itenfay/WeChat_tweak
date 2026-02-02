//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderAdWordingInfo : NSObject
{
    NSString *_imageUrl;
    NSString *_recommendReason;
    NSString *_wording;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;

@end

