//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ScanUserItem : NSObject
{
    NSString *_username;
    NSString *_nickname;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

