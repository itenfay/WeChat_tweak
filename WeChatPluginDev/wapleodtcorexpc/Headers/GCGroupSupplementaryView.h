//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface GCGroupSupplementaryView : NSObject
{
    UILabel *_groupNameLabel;
}

@property(retain, nonatomic) UILabel *groupNameLabel; // @synthesize groupNameLabel=_groupNameLabel;
- (void)configureWithSectionModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

