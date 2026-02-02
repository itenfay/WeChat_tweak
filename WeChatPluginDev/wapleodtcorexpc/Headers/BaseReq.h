//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BaseReq : NSObject
{
    int type;
    NSString *openID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *openID; // @synthesize openID;
@property(nonatomic) int type; // @synthesize type;
- (id)init;

@end

