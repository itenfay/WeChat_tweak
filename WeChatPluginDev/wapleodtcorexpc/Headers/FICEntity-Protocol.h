//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol FICEntity <NSObject>
@property(nonatomic) unsigned int eliminationFactor;
@property(readonly, nonatomic) UIImage *sourceImage;
@property(readonly, nonatomic) NSString *formatName;
@property(readonly, nonatomic) NSString *sourceImageUUID;
@property(readonly, nonatomic) NSString *entityUUID;
- (void (^)(struct CGContext *, struct CGSize))drawingBlockForImage:(UIImage *)arg1;
@end

