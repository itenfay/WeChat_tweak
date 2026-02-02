//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, UIImageView, UILabel;

@interface MMLiveRoomSelectButton
{
    NSArray *_roomContacts;
    double _maxWidth;
    UIImageView *_iconView;
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(copy, nonatomic) NSArray *roomContacts; // @synthesize roomContacts=_roomContacts;
- (void)adjustSubViewsCenterY;
- (void)sizeToFit;
- (void)updateWithRoomContacts:(id)arg1;
- (id)initWithStyle:(long long)arg1;

@end

