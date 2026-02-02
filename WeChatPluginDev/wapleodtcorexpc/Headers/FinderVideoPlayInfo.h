//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FinderVideoPlayInfo : NSObject
{
    NSString *_finder_object_nonce_id;
    NSString *_finder_object_id;
    NSNumber *_videoScrWidth;
    NSNumber *_videoScrHeight;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFinder_object_nonce_id:(id)arg1 finder_object_id:(id)arg2 videoScrWidth:(id)arg3 videoScrHeight:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *videoScrHeight; // @synthesize videoScrHeight=_videoScrHeight;
@property(retain, nonatomic) NSNumber *videoScrWidth; // @synthesize videoScrWidth=_videoScrWidth;
@property(copy, nonatomic) NSString *finder_object_id; // @synthesize finder_object_id=_finder_object_id;
@property(copy, nonatomic) NSString *finder_object_nonce_id; // @synthesize finder_object_nonce_id=_finder_object_nonce_id;
- (id)toList;

@end

