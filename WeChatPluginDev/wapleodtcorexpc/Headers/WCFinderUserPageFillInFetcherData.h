//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderUserPageResponse, NSMutableArray, NSMutableSet, WCFinderContact;

@interface WCFinderUserPageFillInFetcherData : NSObject
{
    FinderUserPageResponse *_resp;
    WCFinderContact *_contact;
    NSMutableArray *_dataItems;
    NSMutableSet *_ids;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *ids; // @synthesize ids=_ids;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) FinderUserPageResponse *resp; // @synthesize resp=_resp;

@end

