//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, NSString, UIImage;
@protocol QBrandPromotionImageDownloader;

@protocol QBrandPromotionImageOwner <NSObject>
- (void)brandPromotionImageDownloader:(id <QBrandPromotionImageDownloader>)arg1 failure:(NSError *)arg2;
- (void)brandPromotionImageDownloader:(id <QBrandPromotionImageDownloader>)arg1 success:(UIImage *)arg2;
- (_Bool)isNight;
- (double)connerRadius;
- (struct CGSize)imageSize;
- (NSString *)imageURLKey;
- (NSString *)imageURLString;
@end

