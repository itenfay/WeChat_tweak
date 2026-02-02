//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, UIButton, UILabel, UIView;
@protocol WCContactItemDeleteViewDelegate;

@interface WCContactItemDeleteView
{
    UILabel *_displayNameLabel;
    UIView *_headImageView;
    UIButton *_deleteButton;
    CContact *_contact;
    id <WCContactItemDeleteViewDelegate> _deleteViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCContactItemDeleteViewDelegate> deleteViewDelegate; // @synthesize deleteViewDelegate=_deleteViewDelegate;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (id)initWithContact:(id)arg1;
- (void)onClickDeleteButton;
- (void)onClickHeadImage;
- (void)initDisplayName;
- (void)initHeadImage;
- (void)initDeleteButton;

@end

