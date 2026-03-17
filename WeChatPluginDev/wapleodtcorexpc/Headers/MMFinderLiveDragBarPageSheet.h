//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveShopShelfDragBar;

@interface MMFinderLiveDragBarPageSheet : NSObject
{
    MMLiveShopShelfDragBar *_dragBar;
}

@property(retain, nonatomic) MMLiveShopShelfDragBar *dragBar; // @synthesize dragBar=_dragBar;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)setDetailView:(id)arg1;
- (void)layoutSubviews;
- (id)getDragBarAsView;

@end

