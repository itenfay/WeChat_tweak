//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ilinkConfSDKMember : NSObject
{
    int _memberId;
    NSString *_userName;
    NSString *_callerName;
}

- (void).cxx_destruct;
@property(nonatomic) int memberId; // @synthesize memberId=_memberId;
@property(copy, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

