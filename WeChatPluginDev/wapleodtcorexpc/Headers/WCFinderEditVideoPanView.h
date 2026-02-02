//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCFinderEditVideoPanView : UIView
{
    unsigned long long _type;
    unsigned long long _index;
    UIView *_line;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

