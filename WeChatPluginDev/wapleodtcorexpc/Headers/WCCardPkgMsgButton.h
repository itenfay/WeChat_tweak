//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCardPkgMsgButton : NSObject
{
    unsigned int actionType;
    NSString *actionText;
    NSString *actionUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl;
@property(retain, nonatomic) NSString *actionText; // @synthesize actionText;
@property(nonatomic) unsigned int actionType; // @synthesize actionType;
- (_Bool)IsActionValid;

@end

