//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ContactInfo, NSNumber;

@interface OftenReadAccountInfo : NSObject
{
    ContactInfo *_contactInfo;
    NSNumber *_hasUnreadDot;
    NSNumber *_lastMsgTime;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithContactInfo:(id)arg1 hasUnreadDot:(id)arg2 lastMsgTime:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *lastMsgTime; // @synthesize lastMsgTime=_lastMsgTime;
@property(retain, nonatomic) NSNumber *hasUnreadDot; // @synthesize hasUnreadDot=_hasUnreadDot;
@property(retain, nonatomic) ContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
- (id)toList;

@end

