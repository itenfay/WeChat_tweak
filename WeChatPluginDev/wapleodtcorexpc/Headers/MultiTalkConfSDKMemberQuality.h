//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MultiTalkConfSDKMemberQuality : NSObject
{
    unsigned int memberId;
    unsigned int quality;
    NSString *userName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) unsigned int quality; // @synthesize quality;
@property(nonatomic) unsigned int memberId; // @synthesize memberId;

@end

