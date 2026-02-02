//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface TSPacket : NSObject
{
    NSData *_data;
}

+ (int)uniqueTag;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

@end

