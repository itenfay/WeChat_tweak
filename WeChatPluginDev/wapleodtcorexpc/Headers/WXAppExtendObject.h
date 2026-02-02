//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXAppExtendObject : NSObject
{
    NSString *extInfo;
    NSData *fileData;
    NSString *url;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
- (id)init;

@end

