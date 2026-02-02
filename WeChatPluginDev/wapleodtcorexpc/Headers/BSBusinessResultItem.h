//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BSBusinessCommonItem, BSBusinessContactItem, BSBusinessProductItem;

@interface BSBusinessResultItem : NSObject
{
    unsigned int _type;
    unsigned long long _docId;
    BSBusinessContactItem *_contactItem;
    BSBusinessCommonItem *_commonItem;
    BSBusinessProductItem *_productItem;
}

+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BSBusinessProductItem *productItem; // @synthesize productItem=_productItem;
@property(retain, nonatomic) BSBusinessCommonItem *commonItem; // @synthesize commonItem=_commonItem;
@property(retain, nonatomic) BSBusinessContactItem *contactItem; // @synthesize contactItem=_contactItem;
@property(nonatomic) unsigned long long docId; // @synthesize docId=_docId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

