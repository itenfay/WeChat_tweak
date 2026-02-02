//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCOutPhoneContact, WCOutRecentCallItem;

@interface WCOutRecentCallItemAndContactArchive : NSObject
{
    WCOutRecentCallItem *_lastCallItem;
    WCOutPhoneContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCOutPhoneContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCOutRecentCallItem *lastCallItem; // @synthesize lastCallItem=_lastCallItem;

@end

