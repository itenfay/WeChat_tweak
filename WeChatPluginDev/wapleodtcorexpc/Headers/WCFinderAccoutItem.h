//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderContact;

@interface WCFinderAccoutItem : NSObject
{
    WCFinderContact *_contact;
    NSMutableArray *_dataItems;
    NSString *_friendFollowCountText;
}

+ (id)itemWithAcctPageItem:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *friendFollowCountText; // @synthesize friendFollowCountText=_friendFollowCountText;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (id)initWithAcctPageItem:(id)arg1;

@end

