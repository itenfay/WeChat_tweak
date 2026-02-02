//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@interface AuthorizeCheckBox : UIImageView
{
    _Bool _selected;
    CDUnknownBlockType _selectBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addSelectAction:(CDUnknownBlockType)arg1;
- (void)internalInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

