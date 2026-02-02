//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MusicCommentJumpInfo : NSObject
{
    unsigned long long _refCommentId;
    NSString *_entityId;
    NSString *_appName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(nonatomic) unsigned long long refCommentId; // @synthesize refCommentId=_refCommentId;

@end

