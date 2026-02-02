//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXTalkRoomMember : NSObject
{
    unsigned int memberId;
    NSString *username;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int memberId; // @synthesize memberId;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

