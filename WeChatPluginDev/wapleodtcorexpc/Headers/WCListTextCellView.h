//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCListTextCellView
{
}

+ (double)contentLabelHeightWithDataItem:(id)arg1 contentLabelWidth:(double)arg2;
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
- (id)customAccessibilityComponents;
- (void)updateAccessibility;
- (_Bool)handleShouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)onClickEvent;
- (void)initView;

@end

