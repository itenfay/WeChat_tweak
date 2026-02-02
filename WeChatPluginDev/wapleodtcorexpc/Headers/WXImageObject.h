//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXImageObject : NSObject
{
    NSData *imageData;
    NSString *_imgDataHash;
    NSString *_miniprogramAppid;
    NSString *_miniprogramPath;
}

+ (id)object;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *miniprogramPath; // @synthesize miniprogramPath=_miniprogramPath;
@property(copy, nonatomic) NSString *miniprogramAppid; // @synthesize miniprogramAppid=_miniprogramAppid;
@property(copy, nonatomic) NSString *imgDataHash; // @synthesize imgDataHash=_imgDataHash;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData;
- (id)init;

@end

