//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPlayerConfig : NSObject
{
    _Bool _hiddenCloseBtn;
    _Bool _hiddenIconView;
    _Bool _hiddenBottomTool;
    _Bool _hiddenAttachBtn;
    _Bool _bForbidProgressBarAutoHidden;
    _Bool _bPassTouchThroughControlView;
    NSString *_attachButtonTitle;
    double _bottomToolBottomPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomToolBottomPadding; // @synthesize bottomToolBottomPadding=_bottomToolBottomPadding;
@property(retain, nonatomic) NSString *attachButtonTitle; // @synthesize attachButtonTitle=_attachButtonTitle;
@property(nonatomic) _Bool bPassTouchThroughControlView; // @synthesize bPassTouchThroughControlView=_bPassTouchThroughControlView;
@property(nonatomic) _Bool bForbidProgressBarAutoHidden; // @synthesize bForbidProgressBarAutoHidden=_bForbidProgressBarAutoHidden;
@property(nonatomic) _Bool hiddenAttachBtn; // @synthesize hiddenAttachBtn=_hiddenAttachBtn;
@property(nonatomic) _Bool hiddenBottomTool; // @synthesize hiddenBottomTool=_hiddenBottomTool;
@property(nonatomic) _Bool hiddenIconView; // @synthesize hiddenIconView=_hiddenIconView;
@property(nonatomic) _Bool hiddenCloseBtn; // @synthesize hiddenCloseBtn=_hiddenCloseBtn;

@end

