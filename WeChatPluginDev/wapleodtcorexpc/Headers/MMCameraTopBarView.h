//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface MMCameraTopBarView : UIView
{
    NSMutableArray *_btnArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
- (void)layoutButtonElem;
- (void)removeBtn:(id)arg1;
- (void)addBtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

