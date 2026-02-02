//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXWeWorkObject : NSObject
{
    int _subType;
    NSData *_data;
    NSString *_extInfo;
}

+ (id)object;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

@end

