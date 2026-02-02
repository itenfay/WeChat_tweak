//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAAuthManagerBottomViewModel : NSObject
{
    _Bool _isEdit;
    double _viewHeight;
    CDUnknownBlockType _editButtonClickAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType editButtonClickAction; // @synthesize editButtonClickAction=_editButtonClickAction;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
- (id)initWithViewHeight:(double)arg1 isEdit:(_Bool)arg2;

@end

