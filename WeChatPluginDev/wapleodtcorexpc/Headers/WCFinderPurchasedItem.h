//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEcObject, FinderMixObject, NSString, WCFinderDataItem;

@interface WCFinderPurchasedItem : NSObject
{
    WCFinderDataItem *_dataItem;
    FinderMixObject *_mixObject;
}

+ (id)itemWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderMixObject *mixObject; // @synthesize mixObject=_mixObject;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) NSString *itemId;
@property(readonly, nonatomic) _Bool isValid;
- (id)validItem;
@property(readonly, nonatomic) FinderEcObject *ecObject;
@property(readonly, nonatomic) int type;

@end

