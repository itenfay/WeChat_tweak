//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCardPkgMsgActivity : NSObject
{
    unsigned int activityType;
    unsigned int activityEndTime;
    NSString *activityText;
    NSString *activityUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int activityEndTime; // @synthesize activityEndTime;
@property(retain, nonatomic) NSString *activityUrl; // @synthesize activityUrl;
@property(retain, nonatomic) NSString *activityText; // @synthesize activityText;
@property(nonatomic) unsigned int activityType; // @synthesize activityType;
- (_Bool)IsActivityValid;

@end

