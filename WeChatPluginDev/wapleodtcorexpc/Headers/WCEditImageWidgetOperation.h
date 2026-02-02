//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageWidgetTool;

@interface WCEditImageWidgetOperation
{
    unsigned long long _widgetOperationType;
    EditImageWidgetTool *_widget;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EditImageWidgetTool *widget; // @synthesize widget=_widget;
@property(nonatomic) unsigned long long widgetOperationType; // @synthesize widgetOperationType=_widgetOperationType;

@end

