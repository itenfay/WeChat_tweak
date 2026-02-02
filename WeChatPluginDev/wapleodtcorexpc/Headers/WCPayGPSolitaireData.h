//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, SolitaireObj;

@interface WCPayGPSolitaireData : NSObject
{
    NSString *_launchTheme;
    NSDictionary *_solitaireItems;
    NSArray *_contactList;
    NSDictionary *_user2Content;
    NSArray *_confirmContactList;
    NSArray *_launchSolitaireItems;
    SolitaireObj *_solitaireOriginData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SolitaireObj *solitaireOriginData; // @synthesize solitaireOriginData=_solitaireOriginData;
@property(retain, nonatomic) NSArray *launchSolitaireItems; // @synthesize launchSolitaireItems=_launchSolitaireItems;
@property(retain, nonatomic) NSArray *confirmContactList; // @synthesize confirmContactList=_confirmContactList;
@property(retain, nonatomic) NSDictionary *user2Content; // @synthesize user2Content=_user2Content;
@property(retain, nonatomic) NSArray *contactList; // @synthesize contactList=_contactList;
@property(retain, nonatomic) NSDictionary *solitaireItems; // @synthesize solitaireItems=_solitaireItems;
@property(retain, nonatomic) NSString *launchTheme; // @synthesize launchTheme=_launchTheme;

@end

