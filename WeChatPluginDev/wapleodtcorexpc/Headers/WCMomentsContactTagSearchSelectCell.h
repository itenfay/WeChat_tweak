//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagData, MMUILabel, NSString, UIImageView, UIView;

@interface WCMomentsContactTagSearchSelectCell
{
    unsigned long long _checkType;
    UIView *_seperatorLine;
    UIImageView *_leftCheckMark;
    MMUILabel *_nameLabel;
    MMUILabel *_memberCountLabel;
    ContactTagData *_tagData;
    NSString *_query;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) ContactTagData *tagData; // @synthesize tagData=_tagData;
@property(retain, nonatomic) MMUILabel *memberCountLabel; // @synthesize memberCountLabel=_memberCountLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *leftCheckMark; // @synthesize leftCheckMark=_leftCheckMark;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(nonatomic) unsigned long long checkType; // @synthesize checkType=_checkType;
- (void)updateNameLabelText;
- (void)updateWithCheckType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)initSeperatorLine;
- (void)initMemberCountLabel;
- (void)initNameLabel;
- (void)initLeftCheckMark;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithTagData:(id)arg1 checkType:(unsigned long long)arg2 query:(id)arg3;

@end

