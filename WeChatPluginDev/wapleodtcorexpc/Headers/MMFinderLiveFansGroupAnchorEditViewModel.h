//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLiveFansGroupAnchorEditViewModel : NSObject
{
    NSString *_groupName;
    NSArray *_customizableGiftItems;
}

+ (id)viewModelWithGroupName:(id)arg1 customizableGifts:(id)arg2 customizationInfo:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *customizableGiftItems; // @synthesize customizableGiftItems=_customizableGiftItems;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, nonatomic) _Bool hasCustomizableGifts;

@end

