//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderLiveStartLotteryProductInfo : NSObject
{
    NSString *_imgUrl;
    NSString *_title;
    NSString *_productId;
    NSString *_platform;
    NSData *_productJumpInfo;
}

+ (id)getProductInfoWithNSDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *productJumpInfo; // @synthesize productJumpInfo=_productJumpInfo;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;

@end

