//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSMutableDictionary, NSString, WCMomentsClickOptions;

@interface WCMomentsClickContext : NSObject
{
    int _contactScene;
    WCMomentsClickOptions *_clickOptions;
    NSString *_username;
    CContact *_contact;
    NSMutableDictionary *_urlExtraInfo;
}

+ (id)clickContextFromClickOptions:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *urlExtraInfo; // @synthesize urlExtraInfo=_urlExtraInfo;
@property(nonatomic) int contactScene; // @synthesize contactScene=_contactScene;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCMomentsClickOptions *clickOptions; // @synthesize clickOptions=_clickOptions;

@end

