//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasComponentItem;

@interface WCCanvasComponentVideoFloatBarInfo
{
    _Bool _isFullClickable;
    NSString *_descText;
    NSString *_descColor;
    WCCanvasComponentItem *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentItem *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) _Bool isFullClickable; // @synthesize isFullClickable=_isFullClickable;
@property(retain, nonatomic) NSString *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) NSString *descText; // @synthesize descText=_descText;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

