//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, MMHeadImageView;

@interface WCOutSearchContactTableViewCell
{
    MMHeadImageView *_headImageView;
    AttributeLabel *_nameLabel;
    AttributeLabel *_phoneLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AttributeLabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) AttributeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)configureCellWithName:(id)arg1 phone:(id)arg2 mmusername:(id)arg3 headImageURL:(id)arg4 searchText:(id)arg5;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

