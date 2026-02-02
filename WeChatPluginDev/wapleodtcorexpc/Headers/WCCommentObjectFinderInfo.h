//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCommentObjectFinderInfo : NSObject
{
    NSString *_objectId;
    NSString *_nonceId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;

@end

