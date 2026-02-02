//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WAAppItemData, WAContact;

@interface WAHomeTableViewCellViewModel : NSObject
{
    WAAppItemData *_appItem;
    NSMutableArray *_menuItemsArray;
    WAContact *_oContact;
}

+ (id)createByAppItem:(id)arg1 menuItemArray:(id)arg2 contact:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WAContact *oContact; // @synthesize oContact=_oContact;
@property(retain, nonatomic) NSMutableArray *menuItemsArray; // @synthesize menuItemsArray=_menuItemsArray;
@property(retain, nonatomic) WAAppItemData *appItem; // @synthesize appItem=_appItem;

@end

