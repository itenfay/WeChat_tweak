//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMConfSDKMemberInfoCache : NSObject
{
    int _reliable;
    NSString *_userName;
    NSString *_openId;
}

- (void).cxx_destruct;
@property(nonatomic) int reliable; // @synthesize reliable=_reliable;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

