//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderMSActivityCells : NSObject
{
}

+ (id)getItemIdentifier:(id)arg1;
+ (id)wrapItemIdentifier:(id)arg1 commentId:(id)arg2 tid:(id)arg3;
+ (id)wrapItemIdentifier:(id)arg1 tid:(id)arg2;
+ (struct CGSize)calculateSizeForContentVM:(id)arg1 cellIdentifier:(id)arg2 size:(struct CGSize)arg3;
+ (unsigned long long)calculateCommentIndexForContentVM:(id)arg1 cellIdentifier:(id)arg2;
+ (void)registerCellClassForTableView:(id)arg1 reuseQueue:(id)arg2;
+ (id)makeCellIdentifiers:(id)arg1;
+ (id)supportCellClasses;

@end

