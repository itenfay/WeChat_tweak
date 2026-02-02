//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCCommentUniCommentInfo : NSObject
{
    int _bypassBufferType;
    NSString *_entityId;
    NSString *_appName;
    NSData *_bypassBuffer;
    NSString *_feedOwnerUsername;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *feedOwnerUsername; // @synthesize feedOwnerUsername=_feedOwnerUsername;
@property(nonatomic) int bypassBufferType; // @synthesize bypassBufferType=_bypassBufferType;
@property(retain, nonatomic) NSData *bypassBuffer; // @synthesize bypassBuffer=_bypassBuffer;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;

@end

