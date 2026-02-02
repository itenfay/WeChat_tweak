//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFeedStickerInfo : NSObject
{
    NSString *_wording;
    NSString *_productId;
}

+ (id)stickerInfoFromInfoString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (id)covertToJsonString;

@end

