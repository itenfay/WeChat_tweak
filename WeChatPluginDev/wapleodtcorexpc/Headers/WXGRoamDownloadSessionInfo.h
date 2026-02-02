//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXGRoamDownloadSessionInfo : NSObject
{
    NSString *_userName;
    unsigned long long _sessionSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sessionSize; // @synthesize sessionSize=_sessionSize;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

