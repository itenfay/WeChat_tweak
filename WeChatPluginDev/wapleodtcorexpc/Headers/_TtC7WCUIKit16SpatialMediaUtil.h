//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, NSString;

@interface _TtC7WCUIKit16SpatialMediaUtil : NSObject
{
}

+ (void)isSpatialVideoWithAsset:(AVAsset *)arg1 completionHandler:(void (^)(_Bool))arg2;
+ (void)isSpatialVideoWithPath:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
+ (_Bool)isSpatialImageWithData:(id)arg1;
+ (_Bool)isSpatialImageWithPath:(id)arg1;
- (id)init;

@end

