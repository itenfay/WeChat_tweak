//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXFileObject : NSObject
{
    NSString *fileExtension;
    NSData *fileData;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension;
- (id)init;

@end

