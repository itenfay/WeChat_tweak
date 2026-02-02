//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderGoodsInfo : NSObject
{
    NSString *_goodsTitle;
    NSString *_goodsProductID;
    NSString *_goodsMiniAppId;
    NSString *_goodsMiniAppPath;
}

+ (id)goodsInfoWithMiniAppCompleteParams:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *goodsMiniAppPath; // @synthesize goodsMiniAppPath=_goodsMiniAppPath;
@property(copy, nonatomic) NSString *goodsMiniAppId; // @synthesize goodsMiniAppId=_goodsMiniAppId;
@property(copy, nonatomic) NSString *goodsProductID; // @synthesize goodsProductID=_goodsProductID;
@property(copy, nonatomic) NSString *goodsTitle; // @synthesize goodsTitle=_goodsTitle;

@end

