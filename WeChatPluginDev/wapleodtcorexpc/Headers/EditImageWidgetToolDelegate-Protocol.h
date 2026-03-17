//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageDeleteBarView, EditImageModView, EditImageUIView, EditImageWidgetTool;

@protocol EditImageWidgetToolDelegate <NSObject>
@property(retain, nonatomic) EditImageDeleteBarView *_deleteBar;
- (void)deleteBarDeselected;
- (void)deleteBarSelected;
- (void)dragaAndDropWidget;
- (void)addNewWidget:(EditImageWidgetTool *)arg1;
- (double)scrollViewZoomScale;
- (int)checkToolType;
- (void)updateViewIndex;
- (void)bringWidgetviewBack:(EditImageWidgetTool *)arg1;
- (void)bringWidgetviewToFront:(EditImageWidgetTool *)arg1;
- (void)removeSubview:(EditImageUIView *)arg1;
- (void)widgetToolBecomeFirstResponder:(EditImageWidgetTool *)arg1;
- (void)endGesture:(EditImageModView *)arg1;
- (void)startGesture;
@end

