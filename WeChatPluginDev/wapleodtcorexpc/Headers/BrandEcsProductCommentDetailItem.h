//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BrandEcsProductShareWeappItem, NSString;

@interface BrandEcsProductCommentDetailItem : NSObject
{
    BrandEcsProductShareWeappItem *_fakeNativeWeAppItem;
    NSString *_messageExtraData;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFakeNativeWeAppItem:(id)arg1 messageExtraData:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(retain, nonatomic) BrandEcsProductShareWeappItem *fakeNativeWeAppItem; // @synthesize fakeNativeWeAppItem=_fakeNativeWeAppItem;
- (id)toList;

@end

