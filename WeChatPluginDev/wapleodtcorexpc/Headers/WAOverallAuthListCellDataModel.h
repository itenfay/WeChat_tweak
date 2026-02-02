//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAAuthorizationItemData, WAContact;

@interface WAOverallAuthListCellDataModel : NSObject
{
    WAAuthorizationItemData *_authItem;
    WAContact *_contact;
}

+ (id)createByAuthItem:(id)arg1 contact:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WAAuthorizationItemData *authItem; // @synthesize authItem=_authItem;

@end

