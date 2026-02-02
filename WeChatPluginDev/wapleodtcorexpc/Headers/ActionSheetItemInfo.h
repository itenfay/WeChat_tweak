//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ActionSheetItemInfo : NSObject
{
    unsigned int _itemType;
    id _attachInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id attachInfo; // @synthesize attachInfo=_attachInfo;
@property(nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;

@end

