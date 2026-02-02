//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface WAShareAppMessageContextSpecialWeishiModel : NSObject
{
    NSString *_appID;
    NSString *_appName;
    NSString *_sourceDisplayname;
    NSString *_sourceUsername;
    NSNumber *_videoThumbMsgSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *videoThumbMsgSize; // @synthesize videoThumbMsgSize=_videoThumbMsgSize;
@property(copy, nonatomic) NSString *sourceUsername; // @synthesize sourceUsername=_sourceUsername;
@property(copy, nonatomic) NSString *sourceDisplayname; // @synthesize sourceDisplayname=_sourceDisplayname;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;

@end

