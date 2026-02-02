//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonStoreItem;

@interface EmoticonStoreBasePurchaseLogic : NSObject
{
    EmoticonStoreItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonStoreItem *item; // @synthesize item=_item;
- (unsigned long long)startPurchase;
- (id)initWithStoreItem:(id)arg1;

@end

