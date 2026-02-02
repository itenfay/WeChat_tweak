//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FaceRecogPayConfigLogic, NSData, NSString;

@protocol FaceRecogPayHandlerProtocol <NSObject>
@property(retain, nonatomic) NSString *faceVerifyTitle;
@property(nonatomic) _Bool hasClickBizButton;
@property(retain, nonatomic) NSString *otherVerifyTitle;
@property(retain, nonatomic) NSData *resultHash;
@property(retain, nonatomic) FaceRecogPayConfigLogic *config;
@end

