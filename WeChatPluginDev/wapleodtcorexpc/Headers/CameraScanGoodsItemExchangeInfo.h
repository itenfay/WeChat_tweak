//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CameraScanGoodsItemExchangeInfo : NSObject
{
    _Bool _needPoi;
    NSString *_title;
    long long _itemStatus;
    long long _itemCategoryId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needPoi; // @synthesize needPoi=_needPoi;
@property(nonatomic) long long itemCategoryId; // @synthesize itemCategoryId=_itemCategoryId;
@property(nonatomic) long long itemStatus; // @synthesize itemStatus=_itemStatus;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

