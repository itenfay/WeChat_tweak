//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface MMGroupView : UIView
{
    NSMutableArray *_arrGroupViews;
    unsigned int _groupViewDirection;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int groupViewDirection; // @synthesize groupViewDirection=_groupViewDirection;
@property(retain, nonatomic) NSMutableArray *arrGroupViews; // @synthesize arrGroupViews=_arrGroupViews;
- (_Bool)isAllHidden;
- (void)layoutSubviews;
- (id)init;

@end

