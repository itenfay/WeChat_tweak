//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCADShareInfo : NSObject
{
    NSString *userName;
    unsigned int memberCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int memberCount; // @synthesize memberCount;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (id)init;

@end

