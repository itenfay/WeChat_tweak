//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GCAtModel : NSObject
{
    NSString *_userName;
    NSString *_displayName;
    NSString *_userIcon;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userIcon; // @synthesize userIcon=_userIcon;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)displayNameWithAt;

@end

