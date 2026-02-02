//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMOpenVoiceMember : NSObject
{
    int memberId;
    NSString *openId;
    unsigned int status;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) int memberId; // @synthesize memberId;
@property(retain, nonatomic) NSString *openId; // @synthesize openId;

@end

