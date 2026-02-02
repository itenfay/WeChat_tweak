//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableArray, NSString, UIColor;

@interface BrandNotificationCellViewModel
{
    CContact *_brandContact;
    NSMutableArray *_messageLabelStyles;
    NSString *_messageText;
    NSMutableArray *_contactLabelStyles;
    double _viewHeight;
    struct CGSize _messageLabelSize;
    struct CGSize _contactLabelSize;
}

+ (_Bool)canCreateViewModelWithMsgWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) struct CGSize contactLabelSize; // @synthesize contactLabelSize=_contactLabelSize;
@property(retain, nonatomic) NSMutableArray *contactLabelStyles; // @synthesize contactLabelStyles=_contactLabelStyles;
@property(retain, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(nonatomic) struct CGSize messageLabelSize; // @synthesize messageLabelSize=_messageLabelSize;
@property(retain, nonatomic) NSMutableArray *messageLabelStyles; // @synthesize messageLabelStyles=_messageLabelStyles;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
- (id)headerImgUrl;
- (id)textForMsgLabelWithSender:(id)arg1 messageWrap:(id)arg2;
@property(readonly, nonatomic) UIColor *contactLabelColor;
@property(readonly, nonatomic) NSString *contactLabelStr;
- (double)labelMaxWidth;
- (void)updateBrandContact;
- (id)initWithMessage:(id)arg1 viewWidth:(double)arg2;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, nonatomic) double viewWidth;

@end

