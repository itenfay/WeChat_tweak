//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MMScrollActionSheetDelegate;

@interface ScrollActionSheetConfig : NSObject
{
    id <MMScrollActionSheetDelegate> _delegate;
    NSMutableArray *_itemTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *itemTypes; // @synthesize itemTypes=_itemTypes;
@property(nonatomic) __weak id <MMScrollActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addItemTypes:(id)arg1;
- (void)addItemType:(int)arg1;
- (id)initWithDelegate:(id)arg1 itemTypes:(id)arg2;
- (id)init;

@end

