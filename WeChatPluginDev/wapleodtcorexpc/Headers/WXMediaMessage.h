//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXMediaMessage : NSObject
{
    NSString *title;
    NSString *description;
    NSData *thumbData;
    NSString *mediaTagName;
    id mediaObject;
    NSString *messageExt;
    NSString *messageAction;
    NSString *_thumbDataHash;
    NSString *_msgSignature;
}

+ (id)message;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *msgSignature; // @synthesize msgSignature=_msgSignature;
@property(copy, nonatomic) NSString *thumbDataHash; // @synthesize thumbDataHash=_thumbDataHash;
@property(retain, nonatomic) NSString *messageAction; // @synthesize messageAction;
@property(retain, nonatomic) NSString *messageExt; // @synthesize messageExt;
@property(retain, nonatomic) id mediaObject; // @synthesize mediaObject;
@property(retain, nonatomic) NSString *mediaTagName; // @synthesize mediaTagName;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData;
@property(retain, nonatomic) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void)setThumbImage:(id)arg1;
- (id)init;

@end

