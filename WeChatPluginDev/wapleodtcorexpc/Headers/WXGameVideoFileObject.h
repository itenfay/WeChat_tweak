//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXGameVideoFileObject : NSObject
{
    NSData *videoFileData;
    NSString *videoUrl;
    NSString *thumbUrl;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl;
@property(retain, nonatomic) NSData *videoFileData; // @synthesize videoFileData;
- (id)init;

@end

