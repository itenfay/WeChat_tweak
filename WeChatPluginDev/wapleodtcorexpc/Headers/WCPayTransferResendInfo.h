//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayTransferResendInfo : NSObject
{
    NSString *_title;
    NSString *_pic;
    NSString *_desc;
    NSString *_leftBtnWording;
    NSString *_rightBtnWording;
}

+ (id)genFromUnion:(id)arg1;
+ (id)genFromDict:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rightBtnWording; // @synthesize rightBtnWording=_rightBtnWording;
@property(retain, nonatomic) NSString *leftBtnWording; // @synthesize leftBtnWording=_leftBtnWording;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

