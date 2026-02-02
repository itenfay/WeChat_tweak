//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor;
@protocol WCCardGiftViewDelegate;

@interface WCCardGiftView
{
    NSString *_userName;
    NSString *_displayName;
    NSString *_detail;
    _Bool _bIsMemberCard;
    id <WCCardGiftViewDelegate> delegate;
    UIColor *_displayColor;
    UIColor *_detailColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(retain, nonatomic) UIColor *displayColor; // @synthesize displayColor=_displayColor;
@property(nonatomic) _Bool bIsMemberCard; // @synthesize bIsMemberCard=_bIsMemberCard;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak id <WCCardGiftViewDelegate> delegate; // @synthesize delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

